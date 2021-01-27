#pragma once

#include "../tag_layouts.h"

namespace lens_tag
{
	struct reflections_block
	{
		short flags;
		short unknown;
		short bitmap_index;
		short unknown2;
		float position_along_flare_axis;
		float rotation_offset;
		float radius_min;
		float radius_max;
		float brightness_min;
		float brightness_max;
		float tint_modulation_factor;
		float tint_color_r;
		float tint_color_g;
		float tint_color_b;
	};

	struct brightness_block
	{
		s_data_reference function;
	};

	struct color_block
	{
		s_data_reference function;
	};

	struct rotation_block
	{
		s_data_reference function;
	};

	struct group
	{
		char falloff_angle[4]; // ???
		char cutoff_angle[4]; // ???
		float unknown;
		float unknown2;
		float occlusion_radius;
		short occlusion_offset_direction;
		short occlusion_inner_radius_scale;
		float near_fade_distance;
		float far_fade_distance;
		s_tag_reference bitmap;
		short flags;
		short unknown3;
		short rotation_function;
		short unknown4;
		char rotation_function_scale[4]; // ???
		float corona_scale_i;
		float corona_scale_j;
		short falloff_function;
		short unknown5;
		s_tag_block reflections_block;
		short flags2;
		short unknown7;
		s_tag_block brightness_block;
		s_tag_block color_block;
		s_tag_block rotation_block;
	};
}
