#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace mgs2_tag
{
	struct aspect_block
	{
		s_data_reference along_axis_scale;
		s_data_reference away_from_axis_scale;
		float parallel_scale;
		float parallel_threshold_angle;
		float parallel_exponent;
	};

	struct unknown2_block
	{
		float unknown_i;
		float unknown_j;
	};

	struct volumes_block
	{
		char flags[4]; // ???
		s_tag_reference bitmap;
		long sprite_count;
		s_data_reference offset;
		s_data_reference radius;
		s_data_reference brightness;
		s_data_reference color;
		s_data_reference facing;
		s_tag_block aspect_block;
		float radius_frac_min;
		float deprecated_x_step_exponent;
		long deprecated_x_buffer_length;
		long x_buffer_spacing;
		long x_buffer_min_iterations;
		long x_buffer_max_iterations;
		float x_delta_max_error;
		char unknown[4]; // ???
		s_tag_block unknown2_block;
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
	};

	struct group
	{
		float falloff_distance_from_camera;
		float cutoff_distance_from_camera;
		s_tag_block volumes_block;
	};
}
