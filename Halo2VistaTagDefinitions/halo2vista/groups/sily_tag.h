#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace sily_tag
{
	struct options_block
	{
		char flags[4]; // ???
		long value;
		char label[4]; // ???
	};

	struct group
	{
		char setting_catergory[4]; // ???
		long value;
		s_tag_reference unicode_string_list_of_options;
		char title_text[4]; // ???
		char header_text[4]; // ???
		char description_text[4]; // ???
		s_tag_block options_block;
	};
}
