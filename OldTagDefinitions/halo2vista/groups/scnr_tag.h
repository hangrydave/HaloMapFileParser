#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace scnr_tag
{
	struct skies_block
	{
		s_tag_reference sky;
	};

	struct _child_scenarios_block
	{
		s_tag_reference child_scenario;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
	};

	struct predicted_resource_block
	{
		short type;
		short resource_index;
		s_tag_reference tag_index;
	};

	struct comments_block
	{
		char position[12]; // ???
		char type[4]; // ???
		char name[32];
		char comment[256];
	};

	struct object_names_block
	{
		char name[32];
		short type;
		short placement_index;
	};

	struct pathfinding_references_block
	{
		short bsp_index;
		short pathfinding_object_index;
	};

	struct scenery_block
	{
		short palette_index;
		short name_index;
		char placement_flags[4]; // ???
		char position[12]; // ???
		char rotation[12]; // ???
		float scale;
		short transform_flags;
		short manual_bsp_flags;
		char unique_id[4]; // ???
		short origin_bsp_index;
		char type;
		char source;
		char bsp_policy;
		char unknown;
		short editor_folder;
		char variant_name[4]; // ???
		char active_change_colors[4]; // ???
		char primary_color[4]; // ???
		char secondary_color[4]; // ???
		char tertiary_color[4]; // ???
		char quaternary_color[4]; // ???
		short pathfinding_policy;
		short lightmapping_policy;
		s_tag_block pathfinding_references_block;
		short valid_multiplayer_games;
		short unknown2;
	};

	struct scenery_palette_block
	{
		s_tag_reference scenery;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct bipeds_block
	{
		short palette_index;
		short name_index;
		char placement_flags[4]; // ???
		char position[12]; // ???
		char rotation[12]; // ???
		float scale;
		short transform_flags;
		short manual_bsp_flags;
		char unique_id[4]; // ???
		short origin_bsp_index;
		char type;
		char source;
		char bsp_policy;
		char unknown;
		short editor_folder;
		char variant_name[4]; // ???
		char active_change_colors[4]; // ???
		char primary_color[4]; // ???
		char secondary_color[4]; // ???
		char tertiary_color[4]; // ???
		char quaternary_color[4]; // ???
		float body_vitality;
		char flags[4]; // ???
	};

	struct biped_palette_block
	{
		s_tag_reference biped;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct vehicles_block
	{
		short palette_index;
		short name_index;
		char placement_flags[4]; // ???
		char position[12]; // ???
		char rotation[12]; // ???
		float scale;
		short transform_flags;
		short manual_bsp_flags;
		char unique_id[4]; // ???
		short origin_bsp_index;
		char type;
		char source;
		char bsp_policy;
		char unknown;
		short editor_folder;
		char variant_name[4]; // ???
		char active_change_colors[4]; // ???
		char primary_color[4]; // ???
		char secondary_color[4]; // ???
		char tertiary_color[4]; // ???
		char quaternary_color[4]; // ???
		float body_vitality;
		char flags[4]; // ???
	};

	struct vehicle_palette_block
	{
		s_tag_reference vehicle;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct equipment_block
	{
		short palette_index;
		short name_index;
		char placement_flags[4]; // ???
		char position[12]; // ???
		char rotation[12]; // ???
		float scale;
		short transform_flags;
		short manual_bsp_flags;
		char unique_id[4]; // ???
		short origin_bsp_index;
		char type;
		char source;
		char bsp_policy;
		char unknown;
		short editor_folder;
		char equipment_flags[2]; // ???
	};

	struct equipment_palette_block
	{
		s_tag_reference equipment;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct weapons_block
	{
		short palette_index;
		short name_index;
		char placement_flags[4]; // ???
		char position[12]; // ???
		char rotation[12]; // ???
		float scale;
		short transform_flags;
		short manual_bsp_flags;
		char unique_id[4]; // ???
		short origin_bsp_index;
		char type;
		char source;
		char bsp_policy;
		char unknown;
		short editor_folder;
		char variant_name[4]; // ???
		char active_change_colors[4]; // ???
		char primary_color[4]; // ???
		char secondary_color[4]; // ???
		char tertiary_color[4]; // ???
		char quaternary_color[4]; // ???
		short rounds_left;
		short rounds_loaded;
		char flags[2]; // ???
	};

	struct weapon_palette_block
	{
		s_tag_reference weapon;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct device_groups_block
	{
		char name[32];
		float inital_value;
		char flags[4]; // ???
	};

	struct pathfinding_references2_block
	{
		short bsp_index;
		short pathfinding_object_index;
	};

	struct machines_block
	{
		short palette_index;
		short name_index;
		char placement_flags[4]; // ???
		char position[12]; // ???
		char rotation[12]; // ???
		float scale;
		short transform_flags;
		short manual_bsp_flags;
		char unique_id[4]; // ???
		short origin_bsp_index;
		char type;
		char source;
		char bsp_policy;
		char unknown;
		short editor_folder;
		short power_group;
		short position_group;
		char flags[4]; // ???
		char flags2[4]; // ???
		s_tag_block pathfinding_references2_block;
	};

	struct machine_palette_block
	{
		s_tag_reference machine;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct controls_block
	{
		short palette_index;
		short name_index;
		char placement_flags[4]; // ???
		char position[12]; // ???
		char rotation[12]; // ???
		float scale;
		short transform_flags;
		short manual_bsp_flags;
		char unique_id[4]; // ???
		short origin_bsp_index;
		char type;
		char source;
		char bsp_policy;
		char unknown;
		short editor_folder;
		short power_group;
		short position_group;
		char flags[4]; // ???
		char flags2[4]; // ???
		short don_t_touch_this;
		short unknown2;
	};

	struct control_palette_block
	{
		s_tag_reference control;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct light_fixtures_block
	{
		short palette_index;
		short name_index;
		char placement_flags[4]; // ???
		char position[12]; // ???
		char rotation[12]; // ???
		float scale;
		short transform_flags;
		short manual_bsp_flags;
		char unique_id[4]; // ???
		short origin_bsp_index;
		char type;
		char source;
		char bsp_policy;
		char unknown;
		short editor_folder;
		short power_group;
		short position_group;
		char flags[4]; // ???
		float color_red;
		float color_green;
		float color_blue;
		float intensity;
		char falloff_angle[4]; // ???
		char cutoff_angle[4]; // ???
	};

	struct light_fixtures_palette_block
	{
		s_tag_reference light_fixture;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct sound_scenery_block
	{
		short palette_index;
		short name_index;
		char placement_flags[4]; // ???
		char position[12]; // ???
		char rotation[12]; // ???
		float scale;
		short transform_flags;
		short manual_bsp_flags;
		char unique_id[4]; // ???
		short origin_bsp_index;
		char type;
		char source;
		char bsp_policy;
		char unknown;
		short editor_folder;
		char volume_type[4]; // ???
		float height;
		char override_distance_bounds[8]; // ???
		char override_cone_angle_bounds[8]; // ???
		float override_outer_cone_gain;
	};

	struct sound_scenery_palette_block
	{
		s_tag_reference sound_scenery;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct light_volumes_block
	{
		short palette_index;
		short name_index;
		char placement_flags[4]; // ???
		char position[12]; // ???
		char rotation[12]; // ???
		float scale;
		short transform_flags;
		short manual_bsp_flags;
		char unique_id[4]; // ???
		short origin_bsp_index;
		char type;
		char source;
		char bsp_policy;
		char unknown;
		short editor_folder;
		short power_group;
		short position_group;
		char flags[4]; // ???
		short type2;
		short flags2;
		short lightmap_type;
		short lightmap_flags;
		float lightmap_half_life;
		float lightmap_light_scale;
		char target_point[12]; // ???
		float width;
		float height_scale;
		char field_of_view[4]; // ???
		float falloff_distance;
		float cutoff_distance;
	};

	struct light_volumes_palette_block
	{
		s_tag_reference light_volume;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct player_starting_profile_block
	{
		char name[32];
		float starting_health_damage;
		float starting_shield_damage;
		s_tag_reference primary_weapon;
		short rounds_loaded;
		short rounds_total;
		s_tag_reference secondary_weapon;
		short rounds_loaded2;
		short rounds_total2;
		char starting_frag_grenade_count[1]; // ???
		char starting_plasma_grenade_count[1]; // ???
		char starting_unused_grenade_count[1]; // ???
		char starting_unused_grenade_count2[1]; // ???
	};

	struct player_starting_locations_block
	{
		char position[12]; // ???
		char facing[4]; // ???
		short team_designator;
		short bsp_index;
		short game_type_1;
		short game_type_2;
		short game_type_3;
		short game_type_4;
		short spawn_type_1;
		short spawn_type_2;
		short spawn_type_3;
		short spawn_type_4;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		short campaign_player_type;
		short unknown3;
		char unknown4[2]; // ???
	};

	struct kill_trigger_volumes_block
	{
		char name[4]; // ???
		short object_name_index;
		short node_index;
		char node_name[4]; // ???
		s_vector3 forward;
		s_vector3 up;
		char position[12]; // ???
		char extents[12]; // ???
		float unknown;
		short kill_trigger_volume_index;
		short unknown2;
	};

	struct netgame_flags_block
	{
		char position[12]; // ???
		char facing[4]; // ???
		short type;
		short team_designator;
		short identifier;
		short flags;
		char unknown[4]; // ???
		char unknown2[4]; // ???
	};

	struct netgame_equipment_block
	{
		char flags[4]; // ???
		short game_type_1;
		short game_type_2;
		short game_type_3;
		short game_type_4;
		short team_index;
		short spawn_time;
		short respawn_on_empty_time;
		short respawn_timer_starts;
		char classification;
		char unknown;
		char unknown2;
		char unknown3;
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
		char position[12]; // ???
		char orientation[12]; // ???
		s_tag_reference item_vehicle_collection;
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
	};

	struct starting_equipment_block
	{
		char starting_grenades[4]; // ???
		short game_type_1;
		short game_type_2;
		short game_type_3;
		short game_type_4;
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
		s_tag_reference item_collection_1;
		s_tag_reference item_collection_2;
		s_tag_reference item_collection_3;
		s_tag_reference item_collection_4;
		s_tag_reference item_collection_5;
		s_tag_reference item_collection_6;
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
	};

	struct bsp_switch_trigger_volumes_block
	{
		short trigger_volume_index;
		short source_bsp_index;
		short destination_bsp_index;
		short unknown;
		short unknown2;
		short unknown3;
		short unknown4;
	};

	struct decals_block
	{
		short palette_index;
		char yaw;
		char pitch;
		char position[1]; // ???
	};

	struct decal_palette_block
	{
		s_tag_reference decal;
	};

	struct detail_object_collection_palette_block
	{
		s_tag_reference detail_object_collection;
	};

	struct style_palette_block
	{
		s_tag_reference style;
	};

	struct squad_groups_block
	{
		char name[32];
		short parent_index;
		short initial_order_index;
	};

	struct starting_loctations_block
	{
		char name[4]; // ???
		char position[12]; // ???
		short reference_frame;
		short unknown;
		char facing[8]; // ???
		char flags[4]; // ???
		short character_type_index;
		short initial_weapon_index;
		short initial_secondary_weapon_index;
		short unknown2;
		short vehicle_type_index;
		short seat_type;
		short grenade_type;
		short swarm_count;
		char actor_variant_name[4]; // ???
		char vehicle_variant_name[4]; // ???
		float initial_movement_distance;
		short emitter_vehicle_index;
		short initial_movement_mode;
		char placement_script[32];
		short placement_script_index;
		short unknown3;
	};

	struct squads_block
	{
		char name[32];
		char flags[4]; // ???
		short team;
		short parent_squad_group_index;
		float squad_delay_time;
		short normal_difficulty_count;
		short insane_difficulty_count;
		short major_upgrade;
		short unknown;
		short vehicle_type_index;
		short character_type_index;
		short initial_zone_index;
		short unknown2;
		short initial_weapon_index;
		short initial_secondary_weapon_index;
		short grenade_type;
		short initial_order_index;
		char vehicle_variant[4]; // ???
		s_tag_block starting_loctations_block;
		char placement_script[32];
		short placement_script_index;
		short unknown3;
	};

	struct firing_positions_block
	{
		char position[12]; // ???
		short reference_frame;
		short flags;
		short area_index;
		short cluster_index;
		short unknown;
		short unknown2;
		char normal[2]; // ???
	};

	struct flight_hints_block
	{
		short flight_hint_index;
		short point_index;
	};

	struct areas_block
	{
		char name[32];
		char area_flags[4]; // ???
		char position[12]; // ???
		short unknown;
		short unknown2;
		float unknown3;
		short firing_position_start_index;
		short firing_position_count;
		short unknown4;
		short unknown5;
		char unknown6[4]; // ???
		char unknown7;
		char unknown8;
		char unknown9;
		char unknown10;
		short unknown11;
		short unknown12;
		char unknown13[4]; // ???
		float unknown14;
		float unknown15;
		float unknown16;
		float unknown17;
		float unknown18;
		float unknown19;
		float unknown20;
		float unknown21;
		float unknown22;
		float unknown23;
		float unknown24;
		short manual_reference_frame;
		short unknown25;
		s_tag_block flight_hints_block;
	};

	struct zones_block
	{
		char name[32];
		char flags[4]; // ???
		short manual_bsp_index;
		short unknown;
		s_tag_block firing_positions_block;
		s_tag_block areas_block;
	};

	struct triggers_block
	{
		char trigger_flags[4]; // ???
		short trigger_index;
		short unknown;
	};

	struct trigger_conditions_block
	{
		short combination_rule;
		short unknown;
		s_tag_block triggers_block;
	};

	struct role_variants_block
	{
		char variant_designation[999]; // ???
	};

	struct roles_block
	{
		char name[4]; // ???
		short group;
		short unknown;
		s_tag_block role_variants_block;
	};

	struct mission_scenes_block
	{
		char name[4]; // ???
		char flags[4]; // ???
		s_tag_block trigger_conditions_block;
		s_tag_block roles_block;
	};

	struct character_palette_block
	{
		s_tag_reference character;
	};

	struct scripts_block
	{
		char name[32];
		short script_type;
		short return_type;
		char root_expression[2]; // ???
	};

	struct globals_block
	{
		char name[32];
		short type;
		short unknown;
		char initialization_expression[2]; // ???
	};

	struct script_references_block
	{
		s_tag_reference reference;
	};

	struct points_block
	{
		char name[32];
		char position[12]; // ???
		short reference_frame;
		short unknown;
		long surface_index;
		char facing_direction_y[4]; // ???
	};

	struct point_sets_block
	{
		char name[32];
		s_tag_block points_block;
		short bsp_index;
		short manual_reference_frame;
		char flags[2]; // ???
	};

	struct scripting_data_block
	{
		s_tag_block point_sets_block;
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
	};

	struct cutscene_flags_block
	{
		char unknown[4]; // ???
		char name[32];
		char position[12]; // ???
		char facing[12]; // ???
	};

	struct cutscene_camera_points_block
	{
		short flags;
		short type;
		char name[32];
		char position[12]; // ???
		char orientation[12]; // ???
		float unknown;
	};

	struct cutscene_titles_block
	{
		char name[4]; // ???
		char text_bounds[8]; // ???
		short justification;
		short font;
		char text_color[4]; // ???
		char shadow_color[4]; // ???
		float fade_in_time;
		float up_time;
		float fade_out_time;
	};

	struct structure_bsps_block
	{
		char structure_bsp_offset[4]; // ???
		char structure_bsp_size[4]; // ???
		char primary_magic_meta_offset[4]; // ???
		char unknown[4]; // ???
		s_tag_reference structure_bsp;
		s_tag_reference structure_lightmap;
		char unknown2[4]; // ???
		float radiance_estimated_search_distance;
		char unknown3[4]; // ???
		float luminels_per_world_unit;
		float output_white_reference;
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		short flags;
		short unknown6;
		short default_sky;
		short unknown7;
	};

	struct references_block
	{
		s_tag_reference reference;
	};

	struct script_source_block
	{
		s_tag_reference reference;
	};

	struct ai_resources_block
	{
		s_tag_reference reference;
	};

	struct scenario_resources_block
	{
		s_tag_block references_block;
		s_tag_block script_source_block;
		s_tag_block ai_resources_block;
	};

	struct environment_object_identifiers_block
	{
		char unique_id[4]; // ???
		short origin_bsp_index;
		char type;
		char source;
	};

	struct structure_physics_block
	{
		s_data_reference mopp_code;
		s_tag_block environment_object_identifiers_block;
		char unknown[4]; // ???
		float mopp_bounds_min_x;
		float mopp_bounds_min_y;
		float mopp_bounds_min_z;
		float mopp_bounds_max_x;
		float mopp_bounds_max_y;
		float mopp_bounds_max_z;
	};

	struct unit_seats_mapping_block
	{
		s_tag_reference unit;
		char seats[4]; // ???
	};

	struct scenario_kill_triggers_block
	{
		short trigger_volume;
	};

	struct script_expressions_block
	{
		char salt[2]; // ???
		short opcode;
		short value_type;
		short expression_type;
		char next_expression[4]; // ???
		char string_address[4]; // ???
		char value_00__lsb_;
		char value_01_byte;
		char value_02_byte;
		char value_03__msb_;
	};

	struct primary_area_set_block
	{
		short area_type;
		short unknown;
		short zone_index;
		short area_index;
	};

	struct secondary_area_set_block
	{
		short area_type;
		short unknown;
		short zone_index;
		short area_index;
	};

	struct triggers2_block
	{
		char trigger_flags[4]; // ???
		short trigger_index;
		short unknown;
	};

	struct secondary_set_trigger_block
	{
		short combination_rule;
		short dialogue_type;
		s_tag_block triggers2_block;
	};

	struct special_movement_block
	{
		char special_movement_1[999]; // ???
	};

	struct triggers3_block
	{
		char trigger_flags[4]; // ???
		short trigger_index;
		short unknown;
	};

	struct order_endings_block
	{
		short next_order_index;
		short combination_rule;
		float delay_time;
		short dialogue_type;
		short unknown;
		s_tag_block triggers3_block;
	};

	struct orders_block
	{
		char name[32];
		short style_index;
		short unknown;
		char flags[4]; // ???
		short force_combat_status;
		short unknown2;
		char entry_script[32];
		short script_index;
		short follow_squad_index;
		float follow_radius;
		s_tag_block primary_area_set_block;
		s_tag_block secondary_area_set_block;
		s_tag_block secondary_set_trigger_block;
		s_tag_block special_movement_block;
		s_tag_block order_endings_block;
	};

	struct conditions_block
	{
		short rule_type;
		short squad;
		short squad_group;
		short a;
		float x;
		short trigger_volume;
		short unknown;
		char exit_condition_script[32];
		short exit_condition_script_index;
		short unknown2;
		char flags[2]; // ???
	};

	struct ai_triggers_block
	{
		char name[32];
		char trigger_flags[4]; // ???
		short combination_rule;
		short unknown;
		s_tag_block conditions_block;
	};

	struct background_sound_palette_block
	{
		char name[32];
		s_tag_reference background_sound;
		s_tag_reference inside_cluster_sound;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		float cutoff_distance;
		char scale_flags[4]; // ???
		float interior_scale;
		float portal_scale;
		float exterior_scale;
		float interpolation_speed;
		char unknown6[4]; // ???
		char unknown7[4]; // ???
	};

	struct sound_environment_palette_block
	{
		char name[32];
		s_tag_reference sound_environment;
		float cutoff_distance;
		float interpolation_speed;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
	};

	struct weather_palette_block
	{
		char name[32];
		s_tag_reference weather_system;
		short unknown;
		short unknown2;
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		s_tag_reference wind;
		s_vector3 wind_direction;
		float wind_magnitude;
		char unknown11[4]; // ???
		char wind_scale_function[32];
	};

	struct background_sounds_block
	{
		short palette_index;
		short unknown;
	};

	struct sound_environments_block
	{
		short palette_index;
		short unknown;
	};

	struct cluster_centroids_block
	{
		char centroid[999]; // ???
	};

	struct weather_properties_block
	{
		short palette_index;
		short unknown;
	};

	struct atmospheric_fog_properties_block
	{
		short palette_index;
		short unknown;
	};

	struct scenario_cluster_data_block
	{
		s_tag_reference bsp;
		s_tag_block background_sounds_block;
		s_tag_block sound_environments_block;
		long bsp_checksum;
		s_tag_block cluster_centroids_block;
		s_tag_block weather_properties_block;
		s_tag_block atmospheric_fog_properties_block;
	};

	struct dynamic_spawn_overloads_block
	{
		short overload_type;
		short unknown;
		float inner_radius;
		float outer_radius;
		float weight;
	};

	struct static_respawn_zones_block
	{
		char name[4]; // ???
		char relevant_team[4]; // ???
		char relevant_games[4]; // ???
		char flags[4]; // ???
		float position_x;
		float position_y;
		float position_z;
		float lower_height;
		float upper_height;
		float inner_radius;
		float outer_radius;
		float weight;
	};

	struct static_initial_spawn_zones_block
	{
		char name[4]; // ???
		char relevant_team[4]; // ???
		char relevant_games[4]; // ???
		char flags[4]; // ???
		char position[12]; // ???
		float lower_height;
		float upper_height;
		float inner_radius;
		float outer_radius;
		float weight;
	};

	struct spawn_data_block
	{
		float dynamic_spawn_lower_height;
		float dynamic_spawn_upper_height;
		float game_objective_reset_height;
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
		s_tag_block dynamic_spawn_overloads_block;
		s_tag_block static_respawn_zones_block;
		s_tag_block static_initial_spawn_zones_block;
	};

	struct crates_block
	{
		short palette_index;
		short name_index;
		char placement_flags[4]; // ???
		char position[12]; // ???
		char rotation[12]; // ???
		float scale;
		short transform_flags;
		short manual_bsp_flags;
		char unique_id[4]; // ???
		short origin_bsp_index;
		char type;
		char source;
		char bsp_policy;
		char unknown;
		short editor_folder;
		char variant_name[4]; // ???
		char active_change_colors[4]; // ???
		char primary_color[4]; // ???
		char secondary_color[4]; // ???
		char tertiary_color[4]; // ???
		char quaternary_color[4]; // ???
	};

	struct crate_palette_block
	{
		s_tag_reference crate;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct mixers_block
	{
		char unknown[4]; // ???
		char atmospheric_fog_source[4]; // ???
		char interpolator[4]; // ???
		short unknown2;
		short unknown3;
	};

	struct atmospheric_fog_palette_block
	{
		char name[4]; // ???
		float color_red;
		float color_green;
		float color_blue;
		float spread_distance;
		char unknown[4]; // ???
		float maximum_density;
		float start_distance;
		float opaque_distance;
		float color_red2;
		float color_green2;
		float color_blue2;
		float spread_distance2;
		char unknown2[4]; // ???
		float maximum_density2;
		float start_distance2;
		float opaque_distance2;
		float planar_color_red;
		float planar_color_green;
		float planar_color_blue;
		float planar_maximum_density;
		float planar_override_amount;
		float planar_minimum_distance_bias;
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
		float patchy_color_red;
		float patchy_color_green;
		float patchy_color_blue;
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		char unknown16[4]; // ???
		float patchy_density_min;
		float patchy_density_max;
		float patchy_distance_min;
		float patchy_distance_max;
		char unknown17[4]; // ???
		char unknown18[4]; // ???
		char unknown19[4]; // ???
		char unknown20[4]; // ???
		char unknown21[4]; // ???
		char unknown22[4]; // ???
		char unknown23[4]; // ???
		char unknown24[4]; // ???
		s_tag_reference patchy_fog;
		s_tag_block mixers_block;
		float amount;
		float threshold;
		float brightness;
		float gamma_power;
		short camera_immersion_flags;
		short unknown25;
	};

	struct planar_fog_palette_block
	{
		char name[4]; // ???
		s_tag_reference planar_fog;
		short unknown;
		short unknown2;
	};

	struct sources_block
	{
		char position[12]; // ???
		char starting[8]; // ???
		float radius;
		float weight;
	};

	struct sinks_block
	{
		char position[12]; // ???
		float radius;
	};

	struct flocks_block
	{
		short bsp_index;
		short unknown;
		short bounding_trigger_volume;
		short flags;
		float ecology_margin;
		s_tag_block sources_block;
		s_tag_block sinks_block;
		float production_frequency;
		char scale[8]; // ???
		s_tag_reference creature;
		char boid_count[4]; // ???
		float neighborhood_radius;
		float avoidance_radius;
		float forward_scale;
		float alignment_scale;
		float avoidance_scale;
		float leveling_force_scale;
		float sink_scale;
		char perception_angle[4]; // ???
		float average_throttle;
		float maximum_throttle;
		float position_scale;
		float position_min_radius;
		float position_max_radius;
		float movement_weight_threshold;
		float danger_radius;
		float danger_scale;
		float random_offset_scale;
		char random_offset_period[8]; // ???
		char flock_name[8]; // ???
	};

	struct creatures_block
	{
		short palette_index;
		short name_index;
		char placement_flags[4]; // ???
		char position[12]; // ???
		char rotation[12]; // ???
		float scale;
		short transform_flags;
		short manual_bsp_flags;
		char unique_id[4]; // ???
		short origin_bsp_index;
		char type;
		char source;
		char bsp_policy;
		char unknown;
		short editor_folder;
	};

	struct creature_palette_block
	{
		s_tag_reference creature;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct decorator_palette_block
	{
		s_tag_reference decorator_set;
	};

	struct bsp_transition_volumes_block
	{
		short unknown;
		short bsp_index_key;
		short trigger_volume_index;
		short unknown2;
	};

	struct lighting_points_block
	{
		char position[999]; // ???
	};

	struct structure_lighting_block
	{
		s_tag_reference bsp;
		s_tag_block lighting_points_block;
	};

	struct editor_folders_block
	{
		long parent_folder;
		char name[256];
	};

	struct campaign_level_data_block
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

	struct multiplayer_block
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
		char unknown2;
		char unknown3;
		char max_teams_none[1]; // ???
		char max_teams_ctf[1]; // ???
		char max_teams_slayer[1]; // ???
		char max_teams_oddball[1]; // ???
		char max_teams_koth[1]; // ???
		char max_teams_race[1]; // ???
		char max_teams_headhunter[1]; // ???
		char max_teams_juggernaut[1]; // ???
		char max_teams_territories[1]; // ???
		char max_teams_assault[1]; // ???
		char max_teams_stub_10[1]; // ???
		char max_teams_stub_11[1]; // ???
		char max_teams_stub_12[1]; // ???
		char max_teams_stub_13[1]; // ???
		char max_teams_stub_14[1]; // ???
		char max_teams_stub_15[1]; // ???
	};

	struct level_data_block
	{
		s_tag_reference level_description;
		s_tag_block campaign_level_data_block;
		s_tag_block multiplayer_block;
	};

	struct mission_dialogue_block
	{
		s_tag_reference mission_dialogue;
	};

	struct interpolators_block
	{
		char name[4]; // ???
		char accelerator_name[4]; // ???
		char multiplier_name[4]; // ???
		s_data_reference function;
		short unknown;
		short unknown2;
	};

	struct screen_effect_references_block
	{
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		s_tag_reference screen_effect;
		char primary_input[4]; // ???
		char secondary_input[4]; // ???
		short unknown5;
		short unknown6;
	};

	struct simulation_definition_table_block
	{
		s_tag_reference tag;
	};

	struct group
	{
		s_tag_reference do_not_use;
		s_tag_block skies_block;
		short map_type;
		short flags;
		s_tag_block _child_scenarios_block;
		char local_north[4]; // ???
		s_tag_block predicted_resource_block;
		char functions_block[4]; // ???
		char functions_block2[4]; // ???
		s_data_reference editor_scenario_data;
		s_tag_block comments_block;
		char don_t_use_environment_objects_block[4]; // ???
		char don_t_use_environment_objects_block2[4]; // ???
		s_tag_block object_names_block;
		s_tag_block scenery_block;
		s_tag_block scenery_palette_block;
		s_tag_block bipeds_block;
		s_tag_block biped_palette_block;
		s_tag_block vehicles_block;
		s_tag_block vehicle_palette_block;
		s_tag_block equipment_block;
		s_tag_block equipment_palette_block;
		s_tag_block weapons_block;
		s_tag_block weapon_palette_block;
		s_tag_block device_groups_block;
		s_tag_block machines_block;
		s_tag_block machine_palette_block;
		s_tag_block controls_block;
		s_tag_block control_palette_block;
		s_tag_block light_fixtures_block;
		s_tag_block light_fixtures_palette_block;
		s_tag_block sound_scenery_block;
		s_tag_block sound_scenery_palette_block;
		s_tag_block light_volumes_block;
		s_tag_block light_volumes_palette_block;
		s_tag_block player_starting_profile_block;
		s_tag_block player_starting_locations_block;
		s_tag_block kill_trigger_volumes_block;
		char recorded_animations_block[4]; // ???
		char recorded_animations_block2[4]; // ???
		s_tag_block netgame_flags_block;
		s_tag_block netgame_equipment_block;
		s_tag_block starting_equipment_block;
		s_tag_block bsp_switch_trigger_volumes_block;
		s_tag_block decals_block;
		s_tag_block decal_palette_block;
		s_tag_block detail_object_collection_palette_block;
		s_tag_block style_palette_block;
		s_tag_block squad_groups_block;
		s_tag_block squads_block;
		s_tag_block zones_block;
		s_tag_block mission_scenes_block;
		s_tag_block character_palette_block;
		char ai_pathfinding_data_block[4]; // ???
		char ai_pathfinding_data_block2[4]; // ???
		char ai_animation_references_block[4]; // ???
		char ai_animation_references_block2[4]; // ???
		char ai_script_references_block[4]; // ???
		char ai_script_references_block2[4]; // ???
		char ai_recording_references_block[4]; // ???
		char ai_recording_references_block2[4]; // ???
		char ai_conversations_block[4]; // ???
		char ai_conversations_block2[4]; // ???
		s_data_reference script_syntax_data;
		s_data_reference script_string_data;
		s_tag_block scripts_block;
		s_tag_block globals_block;
		s_tag_block script_references_block;
		char source_files_block[4]; // ???
		char source_files_block2[4]; // ???
		s_tag_block scripting_data_block;
		s_tag_block cutscene_flags_block;
		s_tag_block cutscene_camera_points_block;
		s_tag_block cutscene_titles_block;
		s_tag_reference custom_object_names;
		s_tag_reference chapter_title_text;
		s_tag_reference hud_messages;
		s_tag_block structure_bsps_block;
		s_tag_block scenario_resources_block;
		s_tag_block structure_physics_block;
		s_tag_block unit_seats_mapping_block;
		s_tag_block scenario_kill_triggers_block;
		s_tag_block script_expressions_block;
		s_tag_block orders_block;
		s_tag_block ai_triggers_block;
		s_tag_block background_sound_palette_block;
		s_tag_block sound_environment_palette_block;
		s_tag_block weather_palette_block;
		char null_block[4]; // ???
		char null_block2[4]; // ???
		char null_block3[4]; // ???
		char null_block4[4]; // ???
		char null_block5[4]; // ???
		char null_block6[4]; // ???
		char null_block7[4]; // ???
		char null_block8[4]; // ???
		char null_block9[4]; // ???
		char null_block10[4]; // ???
		s_tag_block scenario_cluster_data_block;
		long object_salts_1;
		long object_salts_2;
		long object_salts_3;
		long object_salts_4;
		long object_salts_5;
		long object_salts_6;
		long object_salts_7;
		long object_salts_8;
		long object_salts_9;
		long object_salts_10;
		long object_salts_11;
		long object_salts_12;
		long object_salts_13;
		long object_salts_14;
		long object_salts_15;
		long object_salts_16;
		long object_salts_17;
		long object_salts_18;
		long object_salts_19;
		long object_salts_20;
		long object_salts_21;
		long object_salts_22;
		long object_salts_23;
		long object_salts_24;
		long object_salts_25;
		long object_salts_26;
		long object_salts_27;
		long object_salts_28;
		long object_salts_29;
		long object_salts_30;
		long object_salts_31;
		long object_salts_32;
		s_tag_block spawn_data_block;
		s_tag_reference sound_effects_collection;
		s_tag_block crates_block;
		s_tag_block crate_palette_block;
		s_tag_reference global_lighting;
		s_tag_block atmospheric_fog_palette_block;
		s_tag_block planar_fog_palette_block;
		s_tag_block flocks_block;
		s_tag_reference subtitles;
		char decorators_block[4]; // ???
		char decorators_block2[4]; // ???
		s_tag_block creatures_block;
		s_tag_block creature_palette_block;
		s_tag_block decorator_palette_block;
		s_tag_block bsp_transition_volumes_block;
		s_tag_block structure_lighting_block;
		s_tag_block editor_folders_block;
		s_tag_block level_data_block;
		s_tag_reference territory_location_names;
		char unknown113[4]; // ???
		char unknown114[4]; // ???
		s_tag_block mission_dialogue_block;
		s_tag_reference objectives;
		s_tag_block interpolators_block;
		char shared_references_block[4]; // ???
		char shared_references_block2[4]; // ???
		s_tag_block screen_effect_references_block;
		s_tag_block simulation_definition_table_block;
	};
}
