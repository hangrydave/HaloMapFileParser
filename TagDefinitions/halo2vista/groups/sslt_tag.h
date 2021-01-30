#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace sslt_tag
{
	struct lighting_points_block
	{
		float position_x;
		float position_y;
		float position_z;
	};

	struct structure_lighting_block
	{
		s_tag_reference bsp;
		s_tag_block lighting_points_block;
	};

	struct group
	{
		s_tag_block structure_lighting_block;
	};
}
