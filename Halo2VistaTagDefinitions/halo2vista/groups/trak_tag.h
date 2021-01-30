#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace trak_tag
{
	struct camera_points_block
	{
		s_vector3 position;
		s_vector4 orientation;
	};

	struct group
	{
		s_tag_block camera_points_block;
	};
}
