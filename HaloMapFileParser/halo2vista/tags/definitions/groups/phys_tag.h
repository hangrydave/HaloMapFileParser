#pragma once

#include "../tag_layouts.h"

namespace phys_tag
{
	struct internal_matrix_block
	{
		float yy_zz;
		float _xy;
		float _zx;
		float _xy2;
		float zz_xx;
		float _yz;
		float _zx2;
		float _yz2;
		float xx_yy;
	};

	struct mass_points_block
	{
		char name[32];
		char flags[4]; // ???
		float strength;
		float offset_real;
		float height_real;
		float damp_fraction;
		float normal_k1;
		float normal_k0;
	};

	struct mass_points2_block
	{
		char name[32];
		short model_node;
		short powered_mass_point;
		char flags[4]; // ???
		float relative_mass;
		float mass;
		float relative_density;
		float density;
		float pos_x;
		float pos_y;
		float pos_z;
		char forward_i[4]; // ???
		char forward_j[4]; // ???
		char forward_k[4]; // ???
		char up_i[4]; // ???
		char up_j[4]; // ???
		char up_k[4]; // ???
		char friction_type[4]; // ???
		float friction_parallel_scale;
		float friction_perpendicular_scale;
		float radius;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
	};

	struct group
	{
		float radius;
		float moment_scale;
		float mass;
		float center_of_mass_x;
		float center_of_mass_y;
		float center_of_mass_z;
		float density;
		float gravity_scale;
		float ground_friction;
		float ground_depth;
		float ground_damp_function;
		float normal_k1;
		float normal_k0;
		char unknown[4]; // ???
		float water_friction;
		float water_depth;
		float water_density;
		char unknown2[4]; // ???
		float air_friction;
		char unknown3[4]; // ???
		float xx_movement;
		float yy_movement;
		float zz_movement;
		s_tag_block internal_matrix_block;
		s_tag_block mass_points_block;
		s_tag_block mass_points2_block;
	};
}
