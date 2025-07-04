#include "../globals.hpp"
#include "legacy_str.h"

namespace xor_strs
{
	std::string hitbox_head{};
	std::string hitbox_chest{};
	std::string hitbox_stomach{};
	std::string hitbox_pelvis{};
	std::string hitbox_arms{};
	std::string hitbox_legs{};
	std::string hitbox_body{};
	std::string hitbox_limbs{};

	std::string weapon_default{};
	std::string weapon_auto{};
	std::string weapon_heavy_pistols{};
	std::string weapon_pistols{};
	std::string weapon_ssg08{};
	std::string weapon_awp{};
	std::string weapon_negev{};
	std::string weapon_m249{};
	std::string weapon_ak47{};
	std::string weapon_aug{};
	std::string weapon_duals{};
	std::string weapon_p250{};
	std::string weapon_cz{};

	std::string aa_disabled{};
	std::string aa_default{};

	std::string aa_pitch_down{};
	std::string aa_pitch_up{};

	std::string aa_yaw_back{};
	std::string aa_yaw_spin{};

	std::string aa_jitter_center{};
	std::string aa_jitter_offset{};
	std::string aa_jitter_random{};
	std::string aa_jitter_3way{};

	std::string aa_desync_jitter{};

	std::string aa_fakelag_max{};
	std::string aa_fakelag_jitter{};

	std::string vis_chams_textured{};
	std::string vis_chams_metallic{};
	std::string vis_chams_flat{};
	std::string vis_chams_glass{};
	std::string vis_chams_glow{};
	std::string vis_chams_bubble{};
	std::string vis_chams_money{};
	std::string vis_chams_fadeup{};

	std::string buybot_none{};

	std::string cfg_main{};
	std::string cfg_additional{};
	std::string cfg_misc{};
	std::string cfg_custom1{};
	std::string cfg_custom2{};

	std::string chams_visible{};
	std::string chams_xqz{};
	std::string chams_history{};
	std::string chams_onshot{};
	std::string chams_ragdolls{};
	std::string chams_viewmodel{};
	std::string chams_wpn{};
	std::string chams_attachments{};
	std::string chams_fake{};
	std::string chams_gloves{};

	std::string sound_metallic{};
	std::string sound_tap{};

	std::string box_default{};
	std::string box_thin{};

	std::string ragdoll_away{};
	std::string ragdoll_fly{};

	std::string target_damage{};
	std::string target_distance{};

	std::string sky_custom{};

	std::string tracer_laser{};
	std::string tracer_beam{};
	std::string tracer_white{};
	std::string tracer_line{};
	std::string tracer_glow{};

	std::string defensive_trigger{};
	std::string defensive_always{};

	std::string knife_default{};
	std::string knife_bayonet{};
	std::string knife_css{};
	std::string knife_skeleton{};
	std::string knife_nomad{};
	std::string knife_paracord{};
	std::string knife_survival{};
	std::string knife_flip{};
	std::string knife_gut{};
	std::string knife_karambit{};
	std::string knife_m9{};
	std::string knife_huntsman{};
	std::string knife_falchion{};
	std::string knife_bowie{};
	std::string knife_butterfly{};
	std::string knife_shadow{};
	std::string knife_ursus{};
	std::string knife_navaga{};
	std::string knife_stiletto{};
	std::string knife_talon{};

	std::string weapon_cfg_deagle{};
	std::string weapon_cfg_duals{};
	std::string weapon_cfg_fiveseven{};
	std::string weapon_cfg_glock{};
	std::string weapon_cfg_ak{};
	std::string weapon_cfg_aug{};
	std::string weapon_cfg_awp{};
	std::string weapon_cfg_famas{};
	std::string weapon_cfg_g3sg1{};
	std::string weapon_cfg_galil{};
	std::string weapon_cfg_m249{};
	std::string weapon_cfg_m4a1{};
	std::string weapon_cfg_m4a1s{};
	std::string weapon_cfg_mac10{};
	std::string weapon_cfg_p90{};
	std::string weapon_cfg_mp5{};
	std::string weapon_cfg_ump45{};
	std::string weapon_cfg_xm1014{};
	std::string weapon_cfg_bizon{};
	std::string weapon_cfg_mag7{};
	std::string weapon_cfg_negev{};
	std::string weapon_cfg_sawed_off{};
	std::string weapon_cfg_tec9{};
	std::string weapon_cfg_p2000{};
	std::string weapon_cfg_mp7{};
	std::string weapon_cfg_mp9{};
	std::string weapon_cfg_nova{};
	std::string weapon_cfg_p250{};
	std::string weapon_cfg_scar20{};
	std::string weapon_cfg_sg553{};
	std::string weapon_cfg_scout{};
	std::string weapon_cfg_usps{};
	std::string weapon_cfg_cz75{};
	std::string weapon_cfg_revolver{};
	std::string weapon_cfg_knife{};

	std::string agent_default{};

	std::string agent_gign{};
	std::string agent_gign_a{};
	std::string agent_gign_b{};
	std::string agent_gign_c{};
	std::string agent_gign_d{};

	std::string agent_pirate{};
	std::string agent_pirate_a{};
	std::string agent_pirate_b{};
	std::string agent_pirate_c{};
	std::string agent_pirate_d{};

	std::string agent_danger_a{};
	std::string agent_danger_b{};
	std::string agent_danger_c{};
	std::string agent_cmdr_davida{};
	std::string agent_cmdr_frank{};
	std::string agent_cmdr_lieutenant{};
	std::string agent_cmdr_michael{};
	std::string agent_cmdr_operator{};
	std::string agent_cmdr_spec_agent_ava{};
	std::string agent_cmdr_markus{};
	std::string agent_cmdr_sous{};
	std::string agent_cmdr_chem_haz{};
	std::string agent_cmdr_chef_d{};
	std::string agent_cmdr_aspirant{};
	std::string agent_cmdr_officer{};
	std::string agent_cmdr_d_sq{};
	std::string agent_cmdr_b_sq{};
	std::string agent_cmdr_seal_team6{};
	std::string agent_cmdr_bunkshot{};
	std::string agent_cmdr_lt_commander{};
	std::string agent_cmdr_bunkshot2{};
	std::string agent_cmdr_3rd_commando{};
	std::string agent_cmdr_two_times_{};
	std::string agent_cmdr_two_times_2{};
	std::string agent_cmdr_premeiro{};
	std::string agent_cmdr_cmdr{};
	std::string agent_cmdr_1st_le{};
	std::string agent_cmdr_john_van{};
	std::string agent_cmdr_bio_haz{};
	std::string agent_cmdr_sergeant{};
	std::string agent_cmdr_chem_haz__{};
	std::string agent_cmdr_farwlo{};
	std::string agent_cmdr_getaway_sally{};
	std::string agent_cmdr_getaway_number_k{};
	std::string agent_cmdr_getaway_little_kev{};
	std::string agent_cmdr_safecracker{};
	std::string agent_cmdr_bloody_darryl{};
	std::string agent_cmdr_bloody_loud{};
	std::string agent_cmdr_bloody_royale{};
	std::string agent_cmdr_bloody_skullhead{};
	std::string agent_cmdr_bloody_silent{};
	std::string agent_cmdr_bloody_miami{};
	std::string agent_street_solider{};
	std::string agent_solider{};
	std::string agent_slingshot{};
	std::string agent_enforcer{};
	std::string agent_mr_muhlik{};
	std::string agent_prof_shahmat{};
	std::string agent_prof_osiris{};
	std::string agent_prof_ground_rebek{};
	std::string agent_prof_elite_muhlik{};
	std::string agent_prof_trapper{};
	std::string agent_prof_trapper_aggressor{};
	std::string agent_prof_vypa_sista{};
	std::string agent_prof_col_magnos{};
	std::string agent_prof_crasswater{};
	std::string agent_prof_crasswater_forgotten{};
	std::string agent_prof_solman{};
	std::string agent_prof_romanov{};
	std::string agent_prof_blackwolf{};
	std::string agent_prof_maximus{};
	std::string agent_prof_dragomir{};
	std::string agent_prof_dragomir2{};
	std::string agent_prof_rezan{};
	std::string agent_prof_rezan_red{};

	std::string mask_none{};
	std::string mask_battle{};
	std::string mask_hoxton{};
	std::string mask_doll{};
	std::string mask_skull{};
	std::string mask_samurai{};
	std::string mask_evil_clown{};
	std::string mask_wolf{};
	std::string mask_sheep{};
	std::string mask_bunny_gold{};
	std::string mask_anaglyph{};
	std::string mask_kabuki_doll{};
	std::string mask_dallas{};
	std::string mask_pumpkin{};
	std::string mask_sheep_bloody{};
	std::string mask_devil_plastic{};
	std::string mask_boar{};
	std::string mask_chains{};
	std::string mask_tiki{};
	std::string mask_bunny{};
	std::string mask_sheep_gold{};
	std::string mask_zombie_plastic{};
	std::string mask_chicken{};
	std::string mask_skull_gold{};
	std::string mask_demon_man{};
	std::string mask_engineer{};
	std::string mask_heavy{};
	std::string mask_medic{};
	std::string mask_pyro{};
	std::string mask_scout{};
	std::string mask_sniper{};
	std::string mask_solider{};
	std::string mask_spy{};
	std::string mask_holiday_light{};

	std::string sky_tibet{};
	std::string sky_bagage{};
	std::string sky_italy{};
	std::string sky_jungle{};
	std::string sky_office{};
	std::string sky_daylight{};
	std::string sky_daylight2{};
	std::string sky_vertigo_blue{};
	std::string sky_vertigo{};
	std::string sky_day{};
	std::string sky_nuke_bank{};
	std::string sky_venice{};
	std::string sky_daylight3{};
	std::string sky_daylight4{};
	std::string sky_cloudy{};
	std::string sky_night{};
	std::string sky_nightb{};
	std::string sky_night_flat{};
	std::string sky_dust{};
	std::string sky_vietnam{};
	std::string sky_lunacy{};
	std::string sky_embassy{};

	std::string glove_default{};
	std::string glove_bloodhound{};
	std::string glove_sporty{};
	std::string glove_slick{};
	std::string glove_leather_wrap{};
	std::string glove_motorcycle{};
	std::string glove_specialist{};
	std::string glove_hydra{};

	std::string glove_skin_charred{};
	std::string glove_skin_snakebite{};
	std::string glove_skin_bronzed{};
	std::string glove_skin_leather{};
	std::string glove_skin_spruce{};
	std::string glove_skin_lunar{};
	std::string glove_skin_convoy{};
	std::string glove_skin_crimson{};
	std::string glove_skin_superconductor{};
	std::string glove_skin_arid{};
	std::string glove_skin_slaugher{};
	std::string glove_skin_eclipse{};
	std::string glove_skin_spearmint{};
	std::string glove_skin_boom{};
	std::string glove_skin_coolmint{};
	std::string glove_skin_forest{};
	std::string glove_skin_crimson_kimono{};
	std::string glove_skin_emerald_web{};
	std::string glove_skin_foundation{};
	std::string glove_skin_badlands{};
	std::string glove_skin_pandora{};
	std::string glove_skin_hedge{};
	std::string glove_skin_guerilla{};
	std::string glove_skin_diamondback{};
	std::string glove_skin_king{};
	std::string glove_skin_imperial{};
	std::string glove_skin_overtake{};
	std::string glove_skin_racing{};
	std::string glove_skin_amphibious{};
	std::string glove_skin_bronze{};
	std::string glove_skin_omega{};
	std::string glove_skin_vice{};
	std::string glove_skin_pow{};
	std::string glove_skin_turtle{};
	std::string glove_skin_transport{};
	std::string glove_skin_polygon{};
	std::string glove_skin_cobalt{};
	std::string glove_skin_overprint{};
	std::string glove_skin_duct{};
	std::string glove_skin_arboreal{};
	std::string glove_skin_emerald{};
	std::string glove_skin_mangrove{};
	std::string glove_skin_rattler{};
	std::string glove_skin_case{};
	std::string glove_skin_crimson_web{};
	std::string glove_skin_bu�kshot{};
	std::string glove_skin_fade{};
	std::string glove_skin_mogul{};

	__forceinline void init()
	{
		hitbox_head = XOR("Head");
		hitbox_chest = XOR("Chest");
		hitbox_stomach = XOR("Stomach");
		hitbox_pelvis = XOR("Pelvis");
		hitbox_arms = XOR("Arms");
		hitbox_legs = XOR("Legs");
		hitbox_body = XOR("Body");
		hitbox_limbs = XOR("Limbs");

		weapon_default = XOR("General");
		weapon_auto = XOR("Auto snipers");
		weapon_heavy_pistols = XOR("Deagle/R8");
		weapon_pistols = XOR("Pistols");
		weapon_ssg08 = XOR("Scout");
		weapon_awp = XOR("AWP");
		weapon_negev = XOR("Negev");
		weapon_m249 = XOR("M249");
		weapon_ak47 = XOR("AK47/M4A1");
		weapon_aug = XOR("AUG/SG553");
		weapon_duals = XOR("Dual berettas");
		weapon_p250 = XOR("P250");
		weapon_cz = XOR("CZ75/Five seven");

		aa_disabled = XOR("Disabled");
		aa_default = XOR("Default");

		aa_pitch_down = XOR("Down");
		aa_pitch_up = XOR("Up");

		aa_yaw_back = XOR("Backward");
		aa_yaw_spin = XOR("Spin");

		aa_jitter_center = XOR("Center");
		aa_jitter_offset = XOR("Offset");
		aa_jitter_random = XOR("Random");
		aa_jitter_3way = XOR("3-Way");

#ifdef LEGACY
		aa_desync_jitter = XOR("Double");
#else
		aa_desync_jitter = XOR("Jitter");
#endif

		aa_fakelag_max = XOR("Maximum");
		aa_fakelag_jitter = XOR("Jitter");

		vis_chams_textured = XOR("Textured");
		vis_chams_metallic = XOR("Shaded");
		vis_chams_flat = XOR("Flat");
		vis_chams_glass = XOR("Metallic");
		vis_chams_glow = XOR("Glow");
		vis_chams_bubble = XOR("Bubble");
		vis_chams_money = XOR("Custom Sprite");
		vis_chams_fadeup = XOR("Fade Up");

		buybot_none = XOR("None");

		cfg_main = XOR("Main");
		cfg_additional = XOR("Additional");
		cfg_misc = XOR("Misc");
		cfg_custom1 = XOR("Custom1");
		cfg_custom2 = XOR("Custom2");

		chams_visible = XOR("Visible");
		chams_xqz = XOR("Through walls");
		chams_history = XOR("History");
		chams_onshot = XOR("On-shot");
		chams_ragdolls = XOR("Ragdolls");
		chams_viewmodel = XOR("Viewmodel");
		chams_wpn = XOR("Weapon");
		chams_attachments = XOR("Attachments");
		chams_fake = XOR("Fake");
		chams_gloves = XOR("Gloves");

		sound_metallic = XOR("Metallic");
		sound_tap = XOR("Custom");

		box_default = XOR("Default");
		box_thin = XOR("Thin");

		ragdoll_away = XOR("Away");
		ragdoll_fly = XOR("Fly up");

		target_distance = XOR("Lowest distance");
		target_damage = XOR("Highest damage");

		sky_custom = XOR("Custom");

		tracer_laser= XOR("Laser");
		tracer_beam = XOR("Beam");
		tracer_white = XOR("White");
		tracer_line = XOR("Line");
		tracer_glow = XOR("Glow");

		defensive_trigger = XOR("Trigger");
		defensive_always = XOR("Always on");

		knife_default = XOR("Default");
		knife_bayonet = XOR("Bayonet");
		knife_css = XOR("CS:S");
		knife_skeleton = XOR("Skeleton");
		knife_nomad = XOR("Nomad");
		knife_paracord = XOR("Paracord");
		knife_survival = XOR("Survival");
		knife_flip = XOR("Flip knife");
		knife_gut = XOR("Gut knife");
		knife_karambit = XOR("Karambit");
		knife_m9 = XOR("M9 Bayonet");
		knife_huntsman = XOR("Huntsman");
		knife_falchion = XOR("Falchion");
		knife_bowie = XOR("Bowie");
		knife_butterfly = XOR("Butterfly");
		knife_shadow = XOR("Shadow Daggers");
		knife_ursus = XOR("Ursus");
		knife_navaga = XOR("Navaja");
		knife_stiletto = XOR("Stiletto");
		knife_talon = XOR("Talon");

		weapon_cfg_deagle = XOR("Deagle");
		weapon_cfg_duals = XOR("Duals");
		weapon_cfg_fiveseven = XOR("Five-Seven");
		weapon_cfg_glock = XOR("Glock");
		weapon_cfg_ak = XOR("AK47");
		weapon_cfg_aug = XOR("AUG");
		weapon_cfg_awp = XOR("AWP");
		weapon_cfg_famas = XOR("FAMAS");
		weapon_cfg_g3sg1 = XOR("G3SG1");
		weapon_cfg_galil = XOR("GALIL-AR");
		weapon_cfg_m249 = XOR("M249");
		weapon_cfg_m4a1 = XOR("M4A1");
		weapon_cfg_m4a1s = XOR("M4A1-s");
		weapon_cfg_mac10 = XOR("MAC-10");
		weapon_cfg_p90 = XOR("P-90");
		weapon_cfg_mp5 = XOR("MP5");
		weapon_cfg_ump45 = XOR("UMP45");
		weapon_cfg_xm1014 = XOR("XM1014");
		weapon_cfg_bizon = XOR("Bizon");
		weapon_cfg_mag7 = XOR("MAG7");
		weapon_cfg_negev = XOR("Negev");
		weapon_cfg_sawed_off = XOR("Sawed Off");
		weapon_cfg_tec9 = XOR("TEC9");
		weapon_cfg_p2000 = XOR("P2000");
		weapon_cfg_mp7 = XOR("MP7");
		weapon_cfg_mp9 = XOR("MP9");
		weapon_cfg_nova = XOR("NOVA");
		weapon_cfg_p250 = XOR("P250");
		weapon_cfg_scar20 = XOR("SCAR-20");
		weapon_cfg_sg553 = XOR("SG553");
		weapon_cfg_scout = XOR("SCOUT");
		weapon_cfg_usps = XOR("USP-S");
		weapon_cfg_cz75 = XOR("CZ-75");
		weapon_cfg_revolver = XOR("Revolver");
		weapon_cfg_knife = XOR("Knife");

		agent_default = XOR("Default");

		agent_gign = XOR("Gign");
		agent_gign_a = XOR("Gign A");
		agent_gign_b = XOR("Gign B");
		agent_gign_c = XOR("Gign C");
		agent_gign_d = XOR("Gign D");

		agent_pirate = XOR("Pirate");
		agent_pirate_a = XOR("Pirate A");
		agent_pirate_b = XOR("Pirate B");
		agent_pirate_c = XOR("Pirate C");
		agent_pirate_d = XOR("Pirate D");

		agent_danger_a = XOR("Danger zone A");
		agent_danger_b = XOR("Danger zone B");
		agent_danger_c = XOR("Danger zone C");
		agent_cmdr_davida = XOR("Fernandez");
		agent_cmdr_frank = XOR("Frank Baroud");
		agent_cmdr_lieutenant = XOR("Rex Krikey");
		agent_cmdr_michael = XOR("Michael Syfers");
		agent_cmdr_operator = XOR("Operator");
		agent_cmdr_spec_agent_ava = XOR("Agent Ava");
		agent_cmdr_markus = XOR("Markus Delrow");
		agent_cmdr_sous = XOR("Medic");
		agent_cmdr_chem_haz = XOR("Haz Capitaine");
		agent_cmdr_chef_d = XOR("Rouchard");
		agent_cmdr_aspirant = XOR("Aspirant");
		agent_cmdr_officer = XOR("Jacques Beltram");
		agent_cmdr_d_sq = XOR("Squadron");
		agent_cmdr_b_sq = XOR("Squadron 2");
		agent_cmdr_seal_team6 = XOR("SASD-6");
		agent_cmdr_bunkshot = XOR("Buckshot");
		agent_cmdr_lt_commander = XOR("Ricksaw");
		agent_cmdr_bunkshot2 = XOR("Buckshot 2");
		agent_cmdr_3rd_commando = XOR("Company");
		agent_cmdr_two_times_ = XOR("McCoy");
		agent_cmdr_two_times_2 = XOR("McCoy New");
		agent_cmdr_premeiro = XOR("Battalion");
		agent_cmdr_cmdr = XOR("Mae Jamison");
		agent_cmdr_1st_le = XOR("Farlow");
		agent_cmdr_john_van = XOR("Healen Kask");
		agent_cmdr_bio_haz = XOR("Haz Specialist");
		agent_cmdr_sergeant = XOR("Bombson");
		agent_cmdr_chem_haz__ = XOR("Chem Specialist");
		agent_cmdr_farwlo = XOR("Farlow New");
		agent_cmdr_getaway_sally = XOR("Sally");
		agent_cmdr_getaway_number_k = XOR("Number K");
		agent_cmdr_getaway_little_kev = XOR("Little Kev");
		agent_cmdr_safecracker = XOR("Voltzmann");
		agent_cmdr_bloody_darryl = XOR("Darryl Strapped");
		agent_cmdr_bloody_loud = XOR("Loudmouth");
		agent_cmdr_bloody_royale = XOR("Darryl Royale");
		agent_cmdr_bloody_skullhead = XOR("Skullhead");
		agent_cmdr_bloody_silent = XOR("Silent Darryl");
		agent_cmdr_bloody_miami = XOR("Miami Darryl");
		agent_street_solider = XOR("Street Soldier");
		agent_solider = XOR("Soldier");
		agent_slingshot = XOR("Slingshot");
		agent_enforcer = XOR("Enforcer");
		agent_mr_muhlik = XOR("Mr Muhlik");
		agent_prof_shahmat = XOR("Prof Shahmat");
		agent_prof_osiris = XOR("Osiris");
		agent_prof_ground_rebek = XOR("Ground Rebel");
		agent_prof_elite_muhlik = XOR("MR Muhlik");
		agent_prof_trapper = XOR("Trapper");
		agent_prof_trapper_aggressor = XOR("Aggressor");
		agent_prof_vypa_sista = XOR("Revolution");
		agent_prof_col_magnos = XOR("Dabisi");
		agent_prof_crasswater = XOR("Medium Rare");
		agent_prof_crasswater_forgotten = XOR("Forgotten");
		agent_prof_solman = XOR("Solman");
		agent_prof_romanov = XOR("Romanov");
		agent_prof_blackwolf = XOR("Blackwolf");
		agent_prof_maximus = XOR("Maximus");
		agent_prof_dragomir = XOR("Dragomir");
		agent_prof_dragomir2 = XOR("Dragomir 2");
		agent_prof_rezan = XOR("Rezan The Ready");
		agent_prof_rezan_red = XOR("Redshirt");

		mask_none = XOR("None");
		mask_battle = XOR("Battlemask");
		mask_hoxton = XOR("Hoxton");
		mask_doll = XOR("Doll");
		mask_skull = XOR("Skull");
		mask_samurai = XOR("Samurai");
		mask_evil_clown = XOR("Evil Clown");
		mask_wolf = XOR("Wolf");
		mask_sheep = XOR("Sheep");
		mask_bunny_gold = XOR("Bunny Gold");
		mask_anaglyph = XOR("Anaglyph");
		mask_kabuki_doll = XOR("Kabuki Doll");
		mask_dallas = XOR("Dallas");
		mask_pumpkin = XOR("Pumpkin");
		mask_sheep_bloody = XOR("Sheep Bloody");
		mask_devil_plastic = XOR("Devil Plastic");
		mask_boar = XOR("Boar");
		mask_chains = XOR("Chains");
		mask_tiki = XOR("Tiki");
		mask_bunny = XOR("Bunny");
		mask_sheep_gold = XOR("Sheep gold");
		mask_zombie_plastic = XOR("Zombie plastic");
		mask_chicken = XOR("Chicken");
		mask_skull_gold = XOR("Skull gold");
		mask_demon_man = XOR("Demon man");
		mask_engineer = XOR("Engineer");
		mask_heavy = XOR("Heavy");
		mask_medic = XOR("Medic");
		mask_pyro = XOR("Pyro");
		mask_scout = XOR("Scout");
		mask_sniper = XOR("Sniper");
		mask_solider = XOR("Solider");
		mask_spy = XOR("Spy");
		mask_holiday_light = XOR("Holiday Light");

		sky_tibet = XOR("Tibet");
		sky_bagage = XOR("Bagage");
		sky_italy = XOR("Italy");
		sky_jungle = XOR("Jungle");
		sky_office = XOR("Office");
		sky_daylight = XOR("Daylight 1");
		sky_daylight2 = XOR("Daylight 2");
		sky_vertigo_blue = XOR("Vertigo Blue");
		sky_vertigo = XOR("Vertigo");
		sky_day = XOR("Day");
		sky_nuke_bank = XOR("Nuke Bank");
		sky_venice = XOR("Venice");
		sky_daylight3 = XOR("Daylight 3");
		sky_daylight4 = XOR("Daylight 4");
		sky_cloudy = XOR("Cloudy");
		sky_night = XOR("Night");
		sky_nightb = XOR("Night B");
		sky_night_flat = XOR("Night Flat");
		sky_dust = XOR("Dust");
		sky_vietnam = XOR("Vietnam");
		sky_lunacy = XOR("Lunacy");
		sky_embassy = XOR("Embassy");

		glove_default = XOR("Default");
		glove_bloodhound = XOR("Bloodhound");
		glove_sporty = XOR("Sporty");
		glove_slick = XOR("Slick");
		glove_leather_wrap = XOR("Leather Wrap");
		glove_motorcycle = XOR("Motorcycle");
		glove_specialist = XOR("Specialist");
		glove_hydra = XOR("Hydra");

		glove_skin_charred = XOR("Charred");
		glove_skin_snakebite = XOR("Snakebite");
		glove_skin_bronzed = XOR("Bronzed");
		glove_skin_leather = XOR("Leather");
		glove_skin_spruce = XOR("Spruce DDPAT");
		glove_skin_lunar = XOR("Lunar Weave");
		glove_skin_convoy = XOR("Convoy");
		glove_skin_crimson = XOR("Crimson Weave");
		glove_skin_superconductor = XOR("Superconductor");
		glove_skin_arid = XOR("Arid");
		glove_skin_slaugher = XOR("Slaughter");
		glove_skin_eclipse = XOR("Eclipse");
		glove_skin_spearmint = XOR("Spearmint");
		glove_skin_boom = XOR("Boom!");
		glove_skin_coolmint = XOR("Cool Mint");
		glove_skin_forest = XOR("Forest DDPAT");
		glove_skin_crimson_kimono = XOR("Crimson Kimono");
		glove_skin_emerald_web = XOR("Emerald Web");
		glove_skin_foundation = XOR("Foundation");
		glove_skin_badlands = XOR("Badlands");
		glove_skin_pandora = XOR("Pandora's Box");
		glove_skin_hedge = XOR("Hedge Maze");
		glove_skin_guerilla = XOR("Guerrilla");
		glove_skin_diamondback = XOR("Diamondback");
		glove_skin_king = XOR("King Snake");
		glove_skin_imperial = XOR("Imperial Plaid");
		glove_skin_overtake = XOR("Overtake");
		glove_skin_racing = XOR("Racing Green");
		glove_skin_amphibious = XOR("Amphibious");
		glove_skin_bronze = XOR("Bronze Morph");
		glove_skin_omega = XOR("Omega");
		glove_skin_vice = XOR("Vice");
		glove_skin_pow = XOR("POW!");
		glove_skin_turtle = XOR("Turtle");
		glove_skin_transport = XOR("Transport");
		glove_skin_polygon = XOR("Polygon");
		glove_skin_cobalt = XOR("Cobalt Skulls");
		glove_skin_overprint = XOR("Overprint");
		glove_skin_duct = XOR("Duct Tape");
		glove_skin_arboreal = XOR("Arboreal");
		glove_skin_emerald = XOR("Emerald");
		glove_skin_mangrove = XOR("Mangrove");
		glove_skin_rattler = XOR("Rattler");
		glove_skin_case = XOR("Case Hardened");
		glove_skin_crimson_web = XOR("Crimson Web");
		glove_skin_bu�kshot = XOR("Buckshot");
		glove_skin_fade = XOR("Fade");
		glove_skin_mogul = XOR("Mogul");
	}
}