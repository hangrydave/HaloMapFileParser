#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace _____tag
{
	struct comments_block
	{
		float position_x;
		float position_y;
		float position_z;
		char type[4]; // ???
		char name[32];
		char comment[256];
	};

	struct group
	{
		s_tag_block comments_block;
	};
}
