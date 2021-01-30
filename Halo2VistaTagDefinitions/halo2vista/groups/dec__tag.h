#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace dec__tag
{
	struct palette_block
	{
		s_tag_reference reference;
	};

	struct decals_block
	{
		short decal_type_index;
		char yaw__127_127_;
		char pitch__127_127_;
		float position_x;
		float position_y;
		float position_z;
	};

	struct group
	{
		s_tag_block palette_block;
		s_tag_block decals_block;
	};
}
