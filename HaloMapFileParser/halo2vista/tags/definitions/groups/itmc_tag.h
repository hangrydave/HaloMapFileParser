#pragma once

#include "../tag_layouts.h"

namespace itmc_tag
{
	struct item_permutations_block
	{
		float weight;
		s_tag_reference item;
		char variant_name[8]; // ???
	};

	struct group
	{
		s_tag_block item_permutations_block;
		char unused_spawn_time__in_seconds__0___default_[9]; // ???
	};
}
