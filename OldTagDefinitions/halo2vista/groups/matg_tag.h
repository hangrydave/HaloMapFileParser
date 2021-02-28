#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace matg_tag
{
	struct havok_cleanup_resources_block
	{
		s_tag_reference object_cleanup_effect;
	};

	struct collision_damage_block
	{
		s_tag_reference collision_damage;
		float minimum_game_acceleration;
		float maximum_game_acceleration;
		float minimum_game_scale;
		float maximum_game_scale;
		float minimum_absolute_acceleration;
		float maximum_absolute_acceleration;
		float minimum_absolute_scale;
		float maximum_absolute_scale;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct sound_globals_block
	{
		s_tag_reference sound_classes;
		s_tag_reference sound_effects;
		s_tag_reference sound_mix;
		s_tag_reference sound_combat_dialogue_constants;
		s_tag_reference sound_gestalt;
	};

	struct gravemind_properties_block
	{
		float minimum_retreat_time;
		float ideal_retreat_time;
		float maximum_retreat_time;
	};

	struct ai_globals_block
	{
		float danger_broadly_facing;
		char unknown[4]; // ???
		float danger_shooting_near;
		char unknown2[4]; // ???
		float danger_shooting_at;
		char unknown3[4]; // ???
		float danger_extremely_close;
		char unknown4[4]; // ???
		float danger_shield_damage;
		float danger_extended_shield_damage;
		float danger_body_damage;
		float danger_extended_body_damage;
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		char unknown16[4]; // ???
		s_tag_reference global_dialogue_tag;
		char default_mission_dialogue_sound_effect[4]; // ???
		char unknown17[4]; // ???
		char unknown18[4]; // ???
		char unknown19[4]; // ???
		char unknown20[4]; // ???
		char unknown21[4]; // ???
		float jump_down;
		float jump_step;
		float jump_crouch;
		float jump_stand;
		float jump_storey;
		float jump_tower;
		float maximum_jump_down_height_down;
		float maximum_jump_down_height_step;
		float maximum_jump_down_height_crouch;
		float maximum_jump_down_height_stand;
		float maximum_jump_down_height_storey;
		float maximum_jump_down_height_tower;
		char hoist_step[8]; // ???
		char hoist_crouch[8]; // ???
		char hoist_stand[8]; // ???
		char unknown22[4]; // ???
		char unknown23[4]; // ???
		char unknown24[4]; // ???
		char unknown25[4]; // ???
		char unknown26[4]; // ???
		char unknown27[4]; // ???
		char vault_step[8]; // ???
		char vault_crouch[8]; // ???
		char unknown28[4]; // ???
		char unknown29[4]; // ???
		char unknown30[4]; // ???
		char unknown31[4]; // ???
		char unknown32[4]; // ???
		char unknown33[4]; // ???
		char unknown34[4]; // ???
		char unknown35[4]; // ???
		char unknown36[4]; // ???
		char unknown37[4]; // ???
		char unknown38[4]; // ???
		char unknown39[4]; // ???
		s_tag_block gravemind_properties_block;
		char unknown40[4]; // ???
		char unknown41[4]; // ???
		char unknown42[4]; // ???
		char unknown43[4]; // ???
		char unknown44[4]; // ???
		char unknown45[4]; // ???
		char unknown46[4]; // ???
		char unknown47[4]; // ???
		char unknown48[4]; // ???
		char unknown49[4]; // ???
		char unknown50[4]; // ???
		char unknown51[4]; // ???
		float scary_target_threshold;
		float scary_weapon_threshold;
		float player_scariness;
		float berserking_actor_scariness;
	};

	struct armor_modifiers_block
	{
		char name[4]; // ???
		float damage_multiplier;
	};

	struct damage_groups_block
	{
		char name[4]; // ???
		s_tag_block armor_modifiers_block;
	};

	struct damage_table_block
	{
		s_tag_block damage_groups_block;
	};

	struct sounds_block
	{
		s_tag_reference sound__obsolete_;
	};

	struct camera_block
	{
		s_tag_reference default_unit_camera_track;
		float default_change_pause;
		float first_person_change_pause;
		float following_camera_change_pause;
	};

	struct look_function_block
	{
		float scale;
	};

	struct player_control_block
	{
		float magnetism_friction;
		float magnetism_adhesion;
		float inconsequential_target_scale;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char crosshair_location[8]; // ???
		float seconds_to_start;
		float seconds_to_full_speed;
		float decay_rate;
		float full_speed_multiplier;
		float pegged_magnitude;
		float pegged_angular_threshold;
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		float look_default_pitch_rate;
		float look_default_yaw_rate;
		float look_peg_threshold;
		float look_yaw_acceleration_time;
		float look_yaw_acceleration_scale;
		float look_pitch_acceleration_time;
		float look_pitch_acceleration_scale;
		float look_autoleveling_scale;
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		float gravity_scale;
		short unknown8;
		short minimum_autoleveling_ticks;
		char minimum_angle_for_vehicle_flipping[4]; // ???
		s_tag_block look_function_block;
		float minimum_action_hold_time;
	};

	struct difficulty_block
	{
		float easy_enemy_damage;
		float normal_enemy_damage;
		float hard_enemy_damage;
		float impossible_enemy_damage;
		float easy_enemy_vitality;
		float normal_enemy_vitality;
		float hard_enemy_vitality;
		float impossible_enemy_vitality;
		float easy_enemy_shield;
		float normal_enemy_shield;
		float hard_enemy_shield;
		float impossible_enemy_shield;
		float easy_enemy_recharge;
		float normal_enemy_recharge;
		float hard_enemy_recharge;
		float impossible_enemy_recharge;
		float easy_friend_damage;
		float normal_friend_damage;
		float hard_friend_damage;
		float impossible_friend_damage;
		float easy_friend_vitality;
		float normal_friend_vitality;
		float hard_friend_vitality;
		float impossible_friend_vitality;
		float easy_friend_shield;
		float normal_friend_shield;
		float hard_friend_shield;
		float impossible_friend_shield;
		float easy_friend_recharge;
		float normal_friend_recharge;
		float hard_friend_recharge;
		float impossible_friend_recharge;
		float easy_infection_forms;
		float normal_infection_forms;
		float hard_infection_forms;
		float impossible_infection_forms;
		float easy_unknown;
		float normal_unknown;
		float hard_unknown;
		float impossible_unknown;
		float easy_rate_of_fire;
		float normal_rate_of_fire;
		float hard_rate_of_fire;
		float impossible_rate_of_fire;
		float easy_projectile_error;
		float normal_projectile_error;
		float hard_projectile_error;
		float impossible_projectile_error;
		float easy_burst_error;
		float normal_burst_error;
		float hard_burst_error;
		float impossible_burst_error;
		float easy_new_target_delay;
		float normal_new_target_delay;
		float hard_new_target_delay;
		float impossible_new_target_delay;
		float easy_burst_separation;
		float normal_burst_separation;
		float hard_burst_separation;
		float impossible_burst_separation;
		float easy_target_tracking;
		float normal_target_tracking;
		float hard_target_tracking;
		float impossible_target_tracking;
		float easy_target_leading;
		float normal_target_leading;
		float hard_target_leading;
		float impossible_target_leading;
		float easy_overcharge_chance;
		float normal_overcharge_chance;
		float hard_overcharge_chance;
		float impossible_overcharge_chance;
		float easy_special_fire_delay;
		float normal_special_fire_delay;
		float hard_special_fire_delay;
		float impossible_special_fire_delay;
		float easy_guidance_vs_player;
		float normal_guidance_vs_player;
		float hard_guidance_vs_player;
		float impossible_guidance_vs_player;
		float easy_melee_delay_base;
		float normal_melee_delay_base;
		float hard_melee_delay_base;
		float impossible_melee_delay_base;
		float easy_melee_delay_scale;
		float normal_melee_delay_scale;
		float hard_melee_delay_scale;
		float impossible_melee_delay_scale;
		float easy_unknown2;
		float normal_unknown2;
		float hard_unknown2;
		float impossible_unknown2;
		float easy_grenade_chance_scale;
		float normal_grenade_chance_scale;
		float hard_grenade_chance_scale;
		float impossible_grenade_chance_scale;
		float easy_grenade_timer_scale;
		float normal_grenade_timer_scale;
		float hard_grenade_timer_scale;
		float impossible_grenade_timer_scale;
		float easy_unknown3;
		float normal_unknown3;
		float hard_unknown3;
		float impossible_unknown3;
		float easy_unknown4;
		float normal_unknown4;
		float hard_unknown4;
		float impossible_unknown4;
		float easy_unknown5;
		float normal_unknown5;
		float hard_unknown5;
		float impossible_unknown5;
		float easy_major_upgrade__normal_;
		float normal_major_upgrade__normal_;
		float hard_major_upgrade__normal_;
		float impossible_major_upgrade__normal_;
		float easy_major_upgrade__few_;
		float normal_major_upgrade__few_;
		float hard_major_upgrade__few_;
		float impossible_major_upgrade__few_;
		float easy_major_upgrade__many_;
		float normal_major_upgrade__many_;
		float hard_major_upgrade__many_;
		float impossible_major_upgrade__many_;
		float easy_player_vehicle_ram_chance;
		float normal_player_vehicle_ram_chance;
		float hard_player_vehicle_ram_chance;
		float impossible_player_vehicle_ram_chance;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		char unknown16[4]; // ???
		char unknown17[4]; // ???
		char unknown18[4]; // ???
		char unknown19[4]; // ???
		char unknown20[4]; // ???
		char unknown21[4]; // ???
		char unknown22[4]; // ???
		char unknown23[4]; // ???
		char unknown24[4]; // ???
		char unknown25[4]; // ???
		char unknown26[4]; // ???
		char unknown27[4]; // ???
		char unknown28[4]; // ???
		char unknown29[4]; // ???
		char unknown30[4]; // ???
		char unknown31[4]; // ???
		char unknown32[4]; // ???
		char unknown33[4]; // ???
	};

	struct grenades_block
	{
		short maximum_count;
		short unknown;
		s_tag_reference throwing_effect;
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		s_tag_reference equipment;
		s_tag_reference projectile;
	};

	struct global_vertex_shaders_block
	{
		s_tag_reference vertex_shader;
	};

	struct rasterizer_data_block
	{
		s_tag_reference distance_attenuation;
		s_tag_reference vector_normalization;
		s_tag_reference gradients;
		s_tag_reference unused;
		s_tag_reference unused2;
		s_tag_reference unused3;
		s_tag_reference glow;
		s_tag_reference unused4;
		s_tag_reference unused5;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		s_tag_block global_vertex_shaders_block;
		s_tag_reference default_2d;
		s_tag_reference default_3d;
		s_tag_reference default_cube_map;
		s_tag_reference unused6;
		s_tag_reference unused7;
		s_tag_reference unused8;
		s_tag_reference unused9;
		s_tag_reference unused10;
		s_tag_reference unused11;
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		s_tag_reference global_shader;
		short flags;
		short unknown14;
		float refraction_amount;
		float distance_falloff;
		char tint_color[12]; // ???
		float hyper_stealth_refraction;
		float hyper_stealth_distance_falloff;
		char hyper_stealth_tint_color[12]; // ???
		s_tag_reference unused12;
	};

	struct interface_tags_block
	{
		s_tag_reference spinner;
		s_tag_reference obsolete;
		s_tag_reference screen_color_table;
		s_tag_reference hud_color_table;
		s_tag_reference editor_color_table;
		s_tag_reference dialog_color_table;
		s_tag_reference hud_globals;
		s_tag_reference motion_sensor_sweep_bitmap;
		s_tag_reference motion_sensor_sweep_bitmap_mask;
		s_tag_reference multiplayer_hud_bitmap;
		s_tag_reference unknown;
		s_tag_reference hud_digits_definition;
		s_tag_reference motion_sensor_blip_bitmap;
		s_tag_reference interface_goo_map_1;
		s_tag_reference interface_goo_map_2;
		s_tag_reference interface_goo_map_3;
		s_tag_reference main_menu_ui_globals;
		s_tag_reference single_player_ui_globals;
		s_tag_reference multiplayer_ui_globals;
	};

	struct weapon_list_block
	{
		s_tag_reference weapon;
	};

	struct cheat_powerups_block
	{
		s_tag_reference powerup;
	};

	struct vehicles_block
	{
		s_tag_reference vehicle;
	};

	struct sounds2_block
	{
		s_tag_reference sound;
	};

	struct sound_permutations_block
	{
		short sound_flags;
		short unknown;
		s_tag_reference english_sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		float probability;
	};

	struct general_events_block
	{
		short flags;
		short unknown;
		short event;
		short audience;
		short unknown2;
		short unknown3;
		char display_string[4]; // ???
		short required_field;
		short excluded_audience;
		char primary_string[4]; // ???
		long primary_string_duration;
		char plural_display_string[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		float sound_delay__announcer_only_;
		short sound_flags;
		short unknown11;
		s_tag_reference sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		char unknown16[4]; // ???
		s_tag_block sound_permutations_block;
	};

	struct sound_permutations2_block
	{
		short sound_flags;
		short unknown;
		s_tag_reference english_sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		float probability;
	};

	struct slayer_events_block
	{
		short flags;
		short unknown;
		short event;
		short audience;
		short unknown2;
		short unknown3;
		char display_string[4]; // ???
		short required_field;
		short excluded_audience;
		char primary_string[4]; // ???
		long primary_string_duration;
		char plural_display_string[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		float sound_delay__announcer_only_;
		short sound_flags;
		short unknown11;
		s_tag_reference sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		char unknown16[4]; // ???
		s_tag_block sound_permutations2_block;
	};

	struct sound_permutations3_block
	{
		short sound_flags;
		short unknown;
		s_tag_reference english_sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		float probability;
	};

	struct ctf_events_block
	{
		short flags;
		short unknown;
		short event;
		short audience;
		short unknown2;
		short unknown3;
		char display_string[4]; // ???
		short required_field;
		short excluded_audience;
		char primary_string[4]; // ???
		long primary_string_duration;
		char plural_display_string[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		float sound_delay__announcer_only_;
		short sound_flags;
		short unknown11;
		s_tag_reference sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		char unknown16[4]; // ???
		s_tag_block sound_permutations3_block;
	};

	struct sound_permutations4_block
	{
		short sound_flags;
		short unknown;
		s_tag_reference english_sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		float probability;
	};

	struct oddball_events_block
	{
		short flags;
		short unknown;
		short event;
		short audience;
		short unknown2;
		short unknown3;
		char display_string[4]; // ???
		short required_field;
		short excluded_audience;
		char primary_string[4]; // ???
		long primary_string_duration;
		char plural_display_string[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		float sound_delay__announcer_only_;
		short sound_flags;
		short unknown11;
		s_tag_reference sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		char unknown16[4]; // ???
		s_tag_block sound_permutations4_block;
	};

	struct sound_permutations5_block
	{
		short sound_flags;
		short unknown;
		s_tag_reference english_sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		float probability;
	};

	struct king_events_block
	{
		short flags;
		short unknown;
		short event;
		short audience;
		short unknown2;
		short unknown3;
		char display_string[4]; // ???
		short required_field;
		short excluded_audience;
		char primary_string[4]; // ???
		long primary_string_duration;
		char plural_display_string[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		float sound_delay__announcer_only_;
		short sound_flags;
		short unknown11;
		s_tag_reference sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		char unknown16[4]; // ???
		s_tag_block sound_permutations5_block;
	};

	struct unknown74_block
	{
		s_tag_block king_events_block;
	};

	struct player_information_block
	{
		s_tag_reference unused;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		float walking_speed;
		char unknown8[4]; // ???
		float run_forward;
		float run_backward;
		float run_sideways;
		float run_acceleration;
		float sneak_forward;
		float sneak_backward;
		float sneak_sideways;
		float sneak_acceleration;
		float airborne_acceleration;
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char grenade_origin[12]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		float stun_movement_penalty;
		float stun_turning_penalty;
		float stun_jumping_penalty;
		float minimum_stun_time;
		float maximum_stun_time;
		char unknown16[4]; // ???
		char unknown17[4]; // ???
		char first_person_idle_time[8]; // ???
		float first_person_skip_fraction;
		char unknown18[4]; // ???
		char unknown19[4]; // ???
		char unknown20[4]; // ???
		char unknown21[4]; // ???
		s_tag_reference coop_respawn_effect;
		long binoculars_zoom_count;
		char binoculars_zoom_range[8]; // ???
		s_tag_reference binoculars_zoom_in_sound;
		s_tag_reference binoculars_zoom_out_sound;
		char unknown22[4]; // ???
		char unknown23[4]; // ???
		char unknown24[4]; // ???
		char unknown25[4]; // ???
		s_tag_reference active_camouflage_on;
		s_tag_reference active_camouflage_off;
		s_tag_reference active_camouflage_error;
		s_tag_reference active_camouflage_ready;
		s_tag_reference flashlight_on;
		s_tag_reference flashlight_off;
		s_tag_reference ice_cream;
	};

	struct player_representation_block
	{
		s_tag_reference first_person_hands_model;
		s_tag_reference first_person_body_model;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		char unknown16[4]; // ???
		char unknown17[4]; // ???
		char unknown18[4]; // ???
		char unknown19[4]; // ???
		char unknown20[4]; // ???
		char unknown21[4]; // ???
		char unknown22[4]; // ???
		char unknown23[4]; // ???
		char unknown24[4]; // ???
		char unknown25[4]; // ???
		char unknown26[4]; // ???
		char unknown27[4]; // ???
		char unknown28[4]; // ???
		char unknown29[4]; // ???
		char unknown30[4]; // ???
		char unknown31[4]; // ???
		char unknown32[4]; // ???
		char unknown33[4]; // ???
		char unknown34[4]; // ???
		char unknown35[4]; // ???
		char unknown36[4]; // ???
		char unknown37[4]; // ???
		char unknown38[4]; // ???
		char unknown39[4]; // ???
		char unknown40[4]; // ???
		s_tag_reference third_person_unit;
		char third_person_variant[8]; // ???
	};

	struct falling_damage_block
	{
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char harmful_falling_distance[8]; // ???
		s_tag_reference falling_damage;
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		float maximum_falling_distance;
		s_tag_reference distance_damage;
		s_tag_reference vehicle_environment_collision_damage_effect;
		s_tag_reference vehicle_killed_unit_damage_effect;
		s_tag_reference vehicle_collision_damage;
		s_tag_reference flaming_death_damage;
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		float unknown9;
		float unknown10;
		float unknown11;
	};

	struct old_materials_block
	{
		char new_material_name[4]; // ???
		char new_general_material_name[4]; // ???
		float ground_friction_scale;
		float ground_friction_normal_k1_scale;
		float ground_friction_normal_k0_scale;
		float ground_depth_scale;
		float ground_damp_fraction_scale;
		s_tag_reference melee_hit_sound;
	};

	struct materials_block
	{
		char name[4]; // ???
		char parent_name[4]; // ???
		short unknown;
		short flags;
		short old_material_type;
		short unknown2;
		char general_armor[4]; // ???
		char specific_armor[4]; // ???
		char flags2[4]; // ???
		float friction;
		float restitution;
		float density;
		s_tag_reference old_material_physics;
		s_tag_reference breakable_surface;
		s_tag_reference sound_sweetener_small;
		s_tag_reference sound_sweetener_medium;
		s_tag_reference sound_sweetener_large;
		s_tag_reference sound_sweetener_rolling;
		s_tag_reference sound_sweetener_grinding;
		s_tag_reference sound_sweetener_melee;
		s_tag_reference unknown3;
		s_tag_reference effect_sweetener_small;
		s_tag_reference effect_sweetener_medium;
		s_tag_reference effect_sweetener_large;
		s_tag_reference effect_sweetener_rolling;
		s_tag_reference effect_sweetener_grinding;
		s_tag_reference effect_sweetener_melee;
		s_tag_reference unknown4;
		char sweetener_inheritance_flags[4]; // ???
		s_tag_reference material_effects;
	};

	struct obsolete_profile_colors_block
	{
		char color[999]; // ???
	};

	struct team_colors_block
	{
		char color[999]; // ???
	};

	struct multiplayer_ui_block
	{
		s_tag_reference random_player_names;
		s_tag_block obsolete_profile_colors_block;
		s_tag_block team_colors_block;
		s_tag_reference team_names;
	};

	struct profile_colors_block
	{
		char color[999]; // ???
	};

	struct campaign_levels_block
	{
		long campaign_id;
		long map_id;
		char path[256];
	};

	struct runtime_level_data_block
	{
		s_tag_block campaign_levels_block;
	};

	struct campaigns_block
	{
		long campaign_id;
		char english_name[64]; // ???
		char japanese_name[64]; // ???
		char german_name[64]; // ???
		char french_name[64]; // ???
		char spanish_name[64]; // ???
		char italian_name[64]; // ???
		char korean_name[64]; // ???
		char chinese_name[64]; // ???
		char portuguese_name[64]; // ???
		char english_description[256]; // ???
		char japanese_description[256]; // ???
		char german_description[256]; // ???
		char french_description[256]; // ???
		char spanish_description[256]; // ???
		char italian_description[256]; // ???
		char korean_description[256]; // ???
		char chinese_description[256]; // ???
		char portuguese_description[256]; // ???
	};

	struct campaign_levels2_block
	{
		long campaign_id;
		long map_id;
		s_tag_reference bitmap;
		char english_name[64]; // ???
		char japanese_name[64]; // ???
		char german_name[64]; // ???
		char french_name[64]; // ???
		char spanish_name[64]; // ???
		char italian_name[64]; // ???
		char korean_name[64]; // ???
		char chinese_name[64]; // ???
		char portuguese_name[64]; // ???
		char english_description[256]; // ???
		char japanese_description[256]; // ???
		char german_description[256]; // ???
		char french_description[256]; // ???
		char spanish_description[256]; // ???
		char italian_description[256]; // ???
		char korean_description[256]; // ???
		char chinese_description[256]; // ???
		char portuguese_description[256]; // ???
	};

	struct multiplayer_levels_block
	{
		long map_id;
		s_tag_reference bitmap;
		char english_name[64]; // ???
		char japanese_name[64]; // ???
		char german_name[64]; // ???
		char french_name[64]; // ???
		char spanish_name[64]; // ???
		char italian_name[64]; // ???
		char korean_name[64]; // ???
		char chinese_name[64]; // ???
		char portuguese_name[64]; // ???
		char english_description[256]; // ???
		char japanese_description[256]; // ???
		char german_description[256]; // ???
		char french_description[256]; // ???
		char spanish_description[256]; // ???
		char italian_description[256]; // ???
		char korean_description[256]; // ???
		char chinese_description[256]; // ???
		char portuguese_description[256]; // ???
		char path[256];
		long sort_order;
		char flags[1]; // ???
		char unknown;
		short unknown2;
		char max_teams_none;
		char max_teams_ctf;
		char max_teams_slayer;
		char max_teams_oddball;
		char max_teams_koth;
		char max_teams_race;
		char max_teams_headhunter;
		char max_teams_juggernaut;
		char max_teams_territories;
		char max_teams_assault;
		char max_teams_stub_10;
		char max_teams_stub_11;
		char max_teams_stub_12;
		char max_teams_stub_13;
		char max_teams_stub_14;
		char max_teams_stub_15;
	};

	struct ui_level_data_block
	{
		s_tag_block campaigns_block;
		s_tag_block campaign_levels2_block;
		s_tag_block multiplayer_levels_block;
	};

	struct group
	{
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		char unknown16[4]; // ???
		char unknown17[4]; // ???
		char unknown18[4]; // ???
		char unknown19[4]; // ???
		char unknown20[4]; // ???
		char unknown21[4]; // ???
		char unknown22[4]; // ???
		char unknown23[4]; // ???
		char unknown24[4]; // ???
		char unknown25[4]; // ???
		char unknown26[4]; // ???
		char unknown27[4]; // ???
		char unknown28[4]; // ???
		char unknown29[4]; // ???
		char unknown30[4]; // ???
		char unknown31[4]; // ???
		char unknown32[4]; // ???
		char unknown33[4]; // ???
		char unknown34[4]; // ???
		char unknown35[4]; // ???
		char unknown36[4]; // ???
		char unknown37[4]; // ???
		char unknown38[4]; // ???
		char unknown39[4]; // ???
		char unknown40[4]; // ???
		char unknown41[4]; // ???
		char unknown42[4]; // ???
		char unknown43[4]; // ???
		char language[4]; // ???
		s_tag_block havok_cleanup_resources_block;
		s_tag_block collision_damage_block;
		s_tag_block sound_globals_block;
		s_tag_block ai_globals_block;
		s_tag_block damage_table_block;
		s_tag_block unknown52_block;
	};
}
