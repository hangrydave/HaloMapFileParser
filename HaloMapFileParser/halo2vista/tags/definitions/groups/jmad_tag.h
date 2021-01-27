#pragma once

#include "../tag_layouts.h"

namespace jmad_tag
{
	struct skeleton_nodes_block
	{
		char name[4]; // ???
		short next_sibling_node_index;
		short first_child_node_index;
		short parent_node_index;
		char model_flags[1]; // ???
		char node_joint_flags[1]; // ???
		s_vector3 base_vector;
		float vector_range;
		float z_position;
	};

	struct sound_references_block
	{
		s_tag_reference sound;
		short flags;
		short unknown;
	};

	struct effect_references_block
	{
		s_tag_reference effect;
		short flags;
		short unknown;
	};

	struct blend_screens_block
	{
		char label[4]; // ???
		char right_yaw_per_frame[4]; // ???
		char left_yaw_per_frame[4]; // ???
		short right_frame_count;
		short left_frame_count;
		char down_pitch_per_frame[4]; // ???
		char up_pitch_per_frame[4]; // ???
		short down_pitch_frame_count;
		short up_pitch_frame_count;
	};

	struct frame_events_block
	{
		short type;
		short frame;
	};

	struct sound_events_block
	{
		short sound;
		short frame;
		char marker_name[2]; // ???
	};

	struct effect_events_block
	{
		short effect;
		short frame;
	};

	struct object_space_parent_nodes_block
	{
		short node_index;
		short component_flags;
		char rotation[8]; // ???
		char default_translation[12]; // ???
		float default_scale;
	};

	struct animations_block
	{
		char name[4]; // ???
		long node_list_checksum;
		long production_checksum;
		long import_checksum;
		char type;
		char frame_info_type;
		char blend_screen;
		char node_count[1]; // ???
		short frame_count;
		char internal_flags[1]; // ???
		char production_flags[1]; // ???
		short playback_flags;
		char desired_compression;
		char current_compression;
		float weight;
		short loop_frame_index;
		short parent_animation_index;
		short next_animation_index;
		short unknown;
		s_data_reference resource;
		char unknown2;
		char unknown3;
		short unknown4;
		short unknown5;
		short unknown6;
		long unknown7;
		long unknown8;
		s_tag_block frame_events_block;
		s_tag_block sound_events_block;
		s_tag_block effect_events_block;
		s_tag_block object_space_parent_nodes_block;
	};

	struct actions_block
	{
		char label[4]; // ???
		short graph_index;
		short animation_index;
	};

	struct overlays_block
	{
		char label[4]; // ???
		short graph_index;
		short animation_index;
	};

	struct regions_block
	{
		short graph_index;
		short animation_index;
	};

	struct directions_block
	{
		s_tag_block regions_block;
	};

	struct death_and_damage_block
	{
		char label[4]; // ???
		s_tag_block directions_block;
	};

	struct destinations_block
	{
		char full_name[4]; // ???
		char mode_name[4]; // ???
		char state_name[4]; // ???
		char frame_event_link;
		char unknown;
		char index_a;
		char index_b;
		short graph_index;
		short animation_index;
	};

	struct transitions_block
	{
		char full_name[4]; // ???
		char state_name[4]; // ???
		short unknown;
		char index_a;
		char index_b;
		s_tag_block destinations_block;
	};

	struct high_precache_block
	{
		long cache_block_index;
	};

	struct low_precache_block
	{
		long cache_block_index;
	};

	struct weapon_type_block
	{
		char label[4]; // ???
		s_tag_block actions_block;
		s_tag_block overlays_block;
		s_tag_block death_and_damage_block;
		s_tag_block transitions_block;
		s_tag_block high_precache_block;
		s_tag_block low_precache_block;
	};

	struct weapon_ik_block
	{
		char marker[4]; // ???
		char attach_to_marker[4]; // ???
	};

	struct weapon_class_block
	{
		char label[4]; // ???
		s_tag_block weapon_type_block;
		s_tag_block weapon_ik_block;
	};

	struct mode_ik_block
	{
		char marker[4]; // ???
		char attach_to_marker[4]; // ???
	};

	struct modes_block
	{
		char label[4]; // ???
		s_tag_block weapon_class_block;
		s_tag_block mode_ik_block;
	};

	struct vehicle_suspension_block
	{
		char label[4]; // ???
		short graph_index;
		short animation;
		char marker_name[4]; // ???
		float mass_point_offset;
		float full_extension_ground_depth;
		float full_compression_ground_depth;
		char region_name[4]; // ???
		float mass_point_offset2;
		float expression_ground_depth;
		float compression_ground_depth;
	};

	struct object_overlays_block
	{
		char label[4]; // ???
		short graph_index;
		short animation;
		short unknown;
		short function_controls;
		char function[4]; // ???
		char unknown2[4]; // ???
	};

	struct node_map_block
	{
		short local_node;
	};

	struct node_map_flags_block
	{
		char local_node_flags[999]; // ???
	};

	struct inheritance_list_block
	{
		s_tag_reference inherited_graph;
		s_tag_block node_map_block;
		s_tag_block node_map_flags_block;
		float root_z_offset;
		char inheritance_flags[4]; // ???
	};

	struct weapon_list_block
	{
		char weapon_name[4]; // ???
		char weapon_class[4]; // ???
	};

	struct additional_node_data_block
	{
		char node_name[4]; // ???
		s_vector4 default_rotation;
		char default_translation[12]; // ???
		float default_scale;
		char minimum_bounds[12]; // ???
		char maximum_bounds[12]; // ???
	};

	struct group
	{
		s_tag_reference parent_animation_graph;
		char inheritance_flags[1]; // ???
		char private_flags[1]; // ???
		short animation_codec_pack;
		s_tag_block skeleton_nodes_block;
		s_tag_block sound_references_block;
		s_tag_block effect_references_block;
		s_tag_block blend_screens_block;
		s_tag_block animations_block;
		s_tag_block modes_block;
		s_tag_block vehicle_suspension_block;
		s_tag_block object_overlays_block;
		s_tag_block inheritance_list_block;
		s_tag_block weapon_list_block;
		char left_arm_nodes_nodes_1[4]; // ???
		char left_arm_nodes_2[4]; // ???
		char left_arm_nodes_3[4]; // ???
		char left_arm_nodes_4[4]; // ???
		char left_arm_nodes_5[4]; // ???
		char left_arm_nodes_6[4]; // ???
		char left_arm_nodes_7[4]; // ???
		char left_arm_nodes_8[4]; // ???
		char right_arm_nodes_1[4]; // ???
		char right_arm_nodes_2[4]; // ???
		char right_arm_nodes_3[4]; // ???
		char right_arm_nodes_4[4]; // ???
		char right_arm_nodes_5[4]; // ???
		char right_arm_nodes_6[4]; // ???
		char right_arm_nodes_7[4]; // ???
		char right_arm_nodes_8[4]; // ???
		s_data_reference last_import_results;
		s_tag_block additional_node_data_block;
	};
}
