#pragma once

#include "../tag_layouts.h"

namespace clwd_tag
{
	struct vertices_block
	{
		float initial_position_x;
		float initial_position_y;
		float initial_position_z;
		float uv_i;
		float uv_j;
	};

	struct indices_block
	{
		short index;
	};

	struct strip_indices_block
	{
		short index;
	};

	struct links_block
	{
		long attachment_bits;
		short index_1;
		short index_2;
		float default_distance;
		float damping_multiplier;
	};

	struct group
	{
		char flags[4]; // ???
		char marker_attachment_name[4]; // ???
		s_tag_reference shader;
		short grid_x_dimension;
		short grid_y_dimension;
		float grid_spacing_x;
		float grid_spacing_y;
		short integration_type;
		short number_iterations;
		float weight;
		float drag;
		float wind_scale;
		float wind_flappiness_scale;
		float longest_rod;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		s_tag_block vertices_block;
		s_tag_block indices_block;
		s_tag_block strip_indices_block;
		s_tag_block links_block;
	};
}
