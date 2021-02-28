#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace effe_tag
{
	struct locations_block
	{
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[1]; // ???
		char marker_name[1]; // ???
	};

	struct parts_block
	{
		short create_in;
		short create_in2;
		short location_index;
		short flags;
		char runtime_base_group_tag[4]; // ???
		s_tag_reference type;
		char velocity_bound[8]; // ???
		char velocity_cone_angle[4]; // ???
		char angular_velocity_bounds[8]; // ???
		char radius_modifier_bounds[8]; // ???
		char a_scales_values[4]; // ???
		char b_scales_values[4]; // ???
	};

	struct beams_block
	{
		s_tag_reference shader;
		short location_index;
		short unknown;
		s_data_reference color;
		s_data_reference alpha;
		s_data_reference width;
		s_data_reference length;
		s_data_reference yaw;
		s_data_reference pitch;
	};

	struct accelerations_block
	{
		short create_in;
		short create_in2;
		short location;
		short unknown;
		float acceleration;
		char inner_cone_angle[4]; // ???
		char outer_cone_angle[4]; // ???
	};

	struct emitters_block
	{
		s_tag_reference particle_physics;
		short input;
		short range;
		short output_modifier_kind;
		short output_modifier;
		s_data_reference function;
		short input2;
		short range2;
		short output_modifier_kind2;
		short output_modifier2;
		s_data_reference function2;
		short input3;
		short range3;
		short output_modifier_kind3;
		short output_modifier3;
		s_data_reference function3;
		short input4;
		short range4;
		short output_modifier_kind4;
		short output_modifier4;
		s_data_reference function4;
		short input5;
		short range5;
		short output_modifier_kind5;
		short output_modifier5;
		s_data_reference function5;
		short input6;
		short range6;
		short output_modifier_kind6;
		short output_modifier6;
		s_data_reference function6;
		short input7;
		short range7;
		short output_modifier_kind7;
		short output_modifier7;
		s_data_reference function7;
		char emission_shape[4]; // ???
		short input8;
		short range8;
		short output_modifier_kind8;
		short output_modifier8;
		s_data_reference function8;
		short input9;
		short range9;
		short output_modifier_kind9;
		short output_modifier9;
		s_data_reference function9;
		char translation_offset[12]; // ???
		char relative_direction[8]; // ???
		long unknown;
		long unknown2;
	};

	struct particle_systems_block
	{
		s_tag_reference particle;
		short location;
		short unknown;
		short coordinate_system;
		short environment;
		short disposition;
		short camera_mode;
		short sort_bias;
		short flags;
		float lod_in_distance;
		float lod_feather_in_delta;
		float inverse_lod_feather_in;
		float lod_out_distance;
		float lod_feather_out_delta;
		float inverse_lod_feather_out;
		s_tag_block emitters_block;
	};

	struct events_block
	{
		char flags[4]; // ???
		float skip_fraction;
		char delay_bounds[8]; // ???
		char duration_bounds[8]; // ???
		s_tag_block parts_block;
		s_tag_block beams_block;
		s_tag_block accelerations_block;
		s_tag_block particle_systems_block;
	};

	struct group
	{
		char flags[4]; // ???
		short loop_start_event;
		short unknown;
		char unknown2[4]; // ???
		s_tag_block locations_block;
		s_tag_block events_block;
		s_tag_reference looping_sound;
		short location;
		short unknown10;
		float always_play_distance;
		float never_play_distance;
	};
}
