#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

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
