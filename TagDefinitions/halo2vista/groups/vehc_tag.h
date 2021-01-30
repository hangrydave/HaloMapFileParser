#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace vehc_tag
{
	struct vehicle_permutations_block
	{
		float weight;
		s_tag_reference vehicle;
		char variant_name[8]; // ???
	};

	struct group
	{
		s_tag_block vehicle_permutations_block;
		char unused_spawn_time__in_seconds__0___default_[9]; // ???
	};
}
