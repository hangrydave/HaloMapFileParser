#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace bsdt_tag
{
	struct emitters_block
	{
		s_tag_reference particle_physics;
		short input_variable;
		short range_variable;
		short output_modifier;
		short output_modifier2;
		s_data_reference function;
		short input_variable2;
		short range_variable2;
		short output_modifier3;
		short output_modifier4;
		s_data_reference function2;
		short input_variable3;
		short range_variable3;
		short output_modifier5;
		short output_modifier6;
		s_data_reference function3;
		short input_variable4;
		short range_variable4;
		short output_modifier7;
		short output_modifier8;
		s_data_reference function4;
		short input_variable5;
		short range_variable5;
		short output_modifier9;
		short output_modifier10;
		s_data_reference function5;
		short input_variable6;
		short range_variable6;
		short output_modifier11;
		short output_modifier12;
		s_data_reference function6;
		short input_variable7;
		short range_variable7;
		short output_modifier13;
		short output_modifier14;
		s_data_reference function7;
		char emission_shape[4]; // ???
		short input_variable8;
		short range_variable8;
		short output_modifier15;
		short output_modifier16;
		s_data_reference function8;
		short input_variable9;
		short range_variable9;
		short output_modifier17;
		short output_modifier18;
		s_data_reference function9;
		float translational_offset_x;
		float translational_offset_y;
		float translational_offset_z;
		char relative_direction_y[4]; // ???
		char relative_direction_p[4]; // ???
		long unknown;
		long unknown2;
	};

	struct particle_effects_block
	{
		s_tag_reference particle;
		long location;
		short coordinate_system;
		short environment;
		short disposition;
		short camera_mode;
		short sort_bias;
		short flags;
		float lod_in_distance;
		float lod_feather_in_delta;
		float unknown;
		float lod_out_distance;
		float lod_feather_out_delta;
		float unknown2;
		s_tag_block emitters_block;
	};

	struct group
	{
		float maximum_vitality;
		s_tag_reference effect;
		s_tag_reference sound;
		s_tag_block particle_effects_block;
		float particle_density;
	};
}
