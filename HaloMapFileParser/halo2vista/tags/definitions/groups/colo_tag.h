#pragma once

#include "../tag_layouts.h"

namespace colo_tag
{
	struct colors_block
	{
		char name[32];
		char color[32]; // ???
	};

	struct group
	{
		s_tag_block colors_block;
	};
}
