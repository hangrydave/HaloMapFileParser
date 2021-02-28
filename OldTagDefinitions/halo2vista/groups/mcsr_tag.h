#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace mcsr_tag
{
	struct mouse_cursor_bitmaps_block
	{
		s_tag_reference bitmap;
	};

	struct group
	{
		s_tag_block mouse_cursor_bitmaps_block;
		float animation_speed__fps_;
	};
}
