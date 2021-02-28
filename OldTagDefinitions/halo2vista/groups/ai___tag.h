#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace ai___tag
{
	struct style_palette_block
	{
		s_tag_reference reference;
	};

	struct squad_groups_block
	{
		char name[32];
		short parent_index;
		short initial_orders_index;
	};

	struct starting_locations_block
	{
		char name[4]; // ???
		float position_x;
		float position_y;
		float position_z;
		short reference_frame;
		short unknown;
		char facing__yaw__pitch__y[4]; // ???
		char facing__yaw__pitch__p[4]; // ???
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
		short unknown3;
		short unknown4;
	};

	struct squads_block
	{
		char name[32];
		char flags[4]; // ???
		short team;
		short parent_index;
		float squad_delay_time;
		short normal_diff_count;
		short insane_diff_count;
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
		s_tag_block starting_locations_block;
		char placement_script[32];
		short unknown3;
		short unknown4;
	};

	struct firing_positions_block
	{
		float position__local__x;
		float position__local__y;
		float position__local__z;
		short reference_frame;
		short flags;
		short area_index;
		short cluster_index;
		char unknown[4]; // ???
		char normal_y[4]; // ???
		char normal_p[4]; // ???
	};

	struct flight_hints_block
	{
		short flight_hint_index;
		short poit_index;
	};

	struct areas_block
	{
		char name[32];
		char area_flags[4]; // ???
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
		short manual_reference_frame;
		short unknown23;
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

	struct character_palette_block
	{
		s_tag_reference reference;
	};

	struct ai_animation_references_block
	{
		char animation_name[32];
		s_tag_reference animation_graph;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
	};

	struct ai_script_references_block
	{
		char script_name[32];
		char unknown[4]; // ???
		char unknown2[4]; // ???
	};

	struct ai_recording_references_block
	{
		char recording_name[32];
		char unknown[4]; // ???
		char unknown2[4]; // ???
	};

	struct participants_block
	{
		char unknown[4]; // ???
		char unknown2[4]; // ???
		short use_this_object_index;
		short set_new_name_index;
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char encounter_name[32];
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		char unknown11[4]; // ???
		char unknown12[4]; // ???
	};

	struct lines_block
	{
		short flags;
		short participant_index;
		short addressee;
		short addressee_participant_index;
		char unknown[4]; // ???
		float line_delay_time;
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		s_tag_reference variant_1;
		s_tag_reference variant_2;
		s_tag_reference variant_3;
		s_tag_reference variant_4;
		s_tag_reference variant_5;
		s_tag_reference variant_6;
	};

	struct unknown15_block
	{
	};

	struct ai_conversations_block
	{
		char name[32];
		short flags;
		short unknown;
		float trigger_distance;
		float run_to_player_dist;
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		s_tag_block participants_block;
		s_tag_block lines_block;
		s_tag_block unknown15_block;
	};

	struct points_block
	{
		char name[32];
		float position_x;
		float position_y;
		float position_z;
		short reference_frame;
		short unknown;
		long surface_index;
		char facing_direction_y[4]; // ???
		char facing_direction_p[4]; // ???
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

	struct triggers_block
	{
		char trigger_flags[4]; // ???
		short trigger_index;
		short unknown;
	};

	struct secondary_set_trigger_block
	{
		short combination_rule;
		short dialogue_type;
		s_tag_block triggers_block;
	};

	struct special_movement_block
	{
		char special_movement_1[999]; // ???
	};

	struct triggers2_block
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
		s_tag_block triggers2_block;
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
		short unknown3;
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
		short squad_index;
		short squad_group_index;
		short a;
		float x;
		short trigger_volume_index;
		short unknown;
		char exit_condition_script[32];
		short unknown2;
		short unknown3;
		char flags[2]; // ???
	};

	struct triggers3_block
	{
		char name[32];
		char trigger_flags[4]; // ???
		short combination_rule;
		short unknown;
		s_tag_block conditions_block;
	};

	struct bsp_preferences_block
	{
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		s_tag_reference structure_bsp;
		s_tag_reference structure_lightmap;
		char unknown5[4]; // ???
		float radiance_est__search_distance;
		char unknown6[4]; // ???
		float luminels_per_world_unit;
		float output_white_reference;
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		short flags;
		short unknown9;
		short default_sky_index;
		short unknown10;
	};

	struct weapon_references_block
	{
		s_tag_reference name;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct vehicle_references_block
	{
		s_tag_reference name;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct vehicle_datum_references_block
	{
		short type_index;
		short name_index;
		char placement_flags[4]; // ???
		float position_x;
		float position_y;
		float position_z;
		char rotation_y[4]; // ???
		char rotation_p[4]; // ???
		char rotation_r[4]; // ???
		float scale;
		short transform_flags;
		short manual_bsp_flags;
		long unique_id;
		short origin_bsp_index;
		char type;
		char source;
		char bsp_policy;
		char unknown;
		short editor_folder_index;
		char variant_name[4]; // ???
		char active_change_colors[4]; // ???
		char primary_color[4]; // ???
		char secondary_color[4]; // ???
		char tertiary_color[4]; // ???
		char quaternary_color[4]; // ???
		float body_vitality;
		char flags[4]; // ???
	};

	struct triggers4_block
	{
		char trigger_flags[4]; // ???
		short trigger_index;
		short unknown;
	};

	struct trigger_conditions_block
	{
		short combination_rule;
		short unknown;
		s_tag_block triggers4_block;
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

	struct mission_dialogue_scenes_block
	{
		char name[4]; // ???
		char flags[4]; // ???
		s_tag_block trigger_conditions_block;
		s_tag_block roles_block;
	};

	struct sources_block
	{
		float position_i;
		float position_j;
		float position_k;
		char starting_yaw__pitch_y[4]; // ???
		char starting_yaw__pitch_p[4]; // ???
		float radius;
		float weight;
	};

	struct sinks_block
	{
		float position_i;
		float position_j;
		float position_k;
		float radius;
	};

	struct flocks_block
	{
		short bsp_index;
		short unknown;
		short bounding_volume_index;
		short flags;
		float ecology_margin;
		s_tag_block sources_block;
		s_tag_block sinks_block;
		float production_frequency;
		float scale_min;
		float scale_max;
		s_tag_reference creature;
		char boid_count_min[2]; // ???
		char boid_count_max[2]; // ???
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
		float random_offset_period_min;
		float random_offset_period_max;
		char flock_name[4]; // ???
	};

	struct trigger_volume_references_block
	{
		char name[4]; // ???
		short object_name_index;
		short unknown;
		char node_name[4]; // ???
		float unknown2;
		float unknown3;
		float unknown4;
		float unknown5;
		float unknown6;
		float unknown7;
		float position_x;
		float position_y;
		float position_z;
		float extents_x;
		float extents_y;
		float extents_z;
		char unknown8[4]; // ???
		short kill_trigger_volume_index;
		short unknown9;
	};

	struct group
	{
		s_tag_block style_palette_block;
		s_tag_block squad_groups_block;
		s_tag_block squads_block;
		s_tag_block zones_block;
		s_tag_block character_palette_block;
		s_tag_block ai_animation_references_block;
		s_tag_block ai_script_references_block;
		s_tag_block ai_recording_references_block;
		s_tag_block ai_conversations_block;
		s_tag_block scripting_data_block;
		s_tag_block orders_block;
		s_tag_block triggers3_block;
		s_tag_block bsp_preferences_block;
		s_tag_block weapon_references_block;
		s_tag_block vehicle_references_block;
		s_tag_block vehicle_datum_references_block;
		s_tag_block mission_dialogue_scenes_block;
		s_tag_block flocks_block;
		s_tag_block trigger_volume_references_block;
	};
}
