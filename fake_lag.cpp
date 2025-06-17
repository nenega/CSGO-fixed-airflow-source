#include "globals.hpp"
#include "fake_lag.hpp"
#include "exploits.hpp"
#include "anti_aim.hpp"
#include "engine_prediction.hpp"
#include "ragebot.hpp"
#include "animations.hpp"
#include "server_bones.hpp"
#include "movement.hpp"
#include "cmd_shift.hpp"

inline bool disable_custom_overrides()
{
	auto shifting = EXPLOITS->cl_move.trigger && EXPLOITS->cl_move.shifting;
	if (shifting)
		return true;

	if (ANTI_AIM->is_fake_ducking())
		return true;

	if (EXPLOITS->enabled() && !EXPLOITS->reset_dt)
		return true;

	if (g_cfg.antihit.fakelag)
		return false;

	return true;
}

int c_fake_lag::get_max_choke()
{
	auto shifting = EXPLOITS->cl_move.trigger && EXPLOITS->cl_move.shifting;
	if (shifting)
		return 0;

	auto add_ticks = (int)g_cfg.antihit.desync;

	if (ANTI_AIM->is_fake_ducking())
		return std::clamp(HACKS->max_choke, 0, 14);

	if (EXPLOITS->enabled() && !EXPLOITS->reset_dt)
		return add_ticks;

	if (g_cfg.antihit.fakelag)
		return std::clamp(g_cfg.antihit.fakelag_limit, 0, HACKS->max_choke);

	return add_ticks;
}

void c_fake_lag::bypass_choke_limit()
{
	if (HACKS->valve_ds)
		return;

	static int old_choke = 0;

	if (old_choke != HACKS->max_choke)
	{
		auto address = offsets::send_move_addr.add(1).cast< std::uint8_t* >();

		uint32_t choke_clamp = HACKS->max_choke + 3;

		DWORD old_protect = 0;
		VirtualProtect((void*)address, sizeof(std::uint32_t), PAGE_EXECUTE_READWRITE, &old_protect);
		*(std::uint32_t*)address = choke_clamp;
		VirtualProtect((void*)address, sizeof(std::uint32_t), old_protect, &old_protect);

		old_choke = HACKS->max_choke;
	}
}

int c_fake_lag::get_choke_amount()
{
	if (disable_custom_overrides())
		return get_max_choke();

	auto desync_choke = (int)g_cfg.antihit.desync;
	int max_choke = get_max_choke();
	int temp_choke = desync_choke;

	auto velocity = HACKS->local->velocity();
	bool standing = HACKS->local->velocity().length_2d() < 10.f;
	if ((g_cfg.antihit.fakelag_conditions & 1) && standing
		|| (g_cfg.antihit.fakelag_conditions & 2) && !standing && MOVEMENT->on_ground()
		|| (g_cfg.antihit.fakelag_conditions & 4) && !MOVEMENT->on_ground())
		temp_choke = max_choke;

	static int timer{};
	if (!(MOVEMENT->on_ground()) && g_cfg.antihit.fluctiate_in_air)
	{
		if (std::abs(timer - HACKS->global_vars->tickcount) > max_choke + 1)
		{
			temp_choke = desync_choke;
			timer = HACKS->global_vars->tickcount;
		}
		else
			temp_choke = max_choke;
	}

	return temp_choke;
}

void c_fake_lag::update_shot_cmd()
{
	if (RAGEBOT->is_shooting())
		HACKS->shot_cmd = HACKS->cmd->command_number;

	HACKS->shooting = HACKS->shot_cmd == HACKS->cmd->command_number;
}

void c_fake_lag::run()
{
	bypass_choke_limit();

	if (HACKS->game_rules->is_freeze_time() || HACKS->local->flags().has(FL_FROZEN))
	{
		if (!*HACKS->send_packet)
			*HACKS->send_packet = true;

		return;
	}

	auto shooting = RAGEBOT->is_shooting();
	auto shifting = EXPLOITS->cl_move.trigger && EXPLOITS->cl_move.shifting;
	int choke_amount = get_choke_amount();

	if (EXPLOITS->recharge.start || choke_amount == 0 || !shifting && shooting && !ANTI_AIM->is_fake_ducking())
	{
		if (!*HACKS->send_packet)
			*HACKS->send_packet = true;

		return;
	}

	*HACKS->send_packet = false;
	int choke = HACKS->client_state->choked_commands;

	if (choke >= choke_amount)
	{
		*HACKS->send_packet = true;
		return;
	}
}

void c_ping_spike::on_procces_packet()
{
	if (!g_cfg.binds[spike_b].toggled || !HACKS->local || !HACKS->local->is_alive())
	{
		flipped_state = true;
		return;
	}

	auto netchan = HACKS->client_state->net_channel;
	if (!netchan)
		return;

	static auto last_reliable_state = -1;

	if (netchan->in_reliable_state != last_reliable_state)
		flipped_state = true;

	last_reliable_state = netchan->in_reliable_state;
}

void c_ping_spike::on_net_chan(c_net_channel* netchan, float latency)
{
	if (flipped_state)
	{
		flipped_state = false;
		return;
	}

	int ticks = TIME_TO_TICKS(latency);
	if (netchan->in_sequence_nr > ticks)
		netchan->in_sequence_nr -= ticks;
}