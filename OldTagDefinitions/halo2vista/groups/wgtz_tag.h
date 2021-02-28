#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace wgtz_tag
{
	struct collection_block
	{
		s_tag_reference game_shell;
	};

	struct group
	{
		s_tag_reference globals;
		s_tag_block collection_block;
		s_tag_reference gametype_collection;
		s_tag_reference unicode_strings;
	};
}
