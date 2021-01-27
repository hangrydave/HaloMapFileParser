#pragma once

#include "../tag_layouts.h"

namespace vrtx_tag
{
	struct unknown2_block
	{
		char unknown[4]; // ???
		s_data_reference compiled_shader;
		s_data_reference code;
	};

	struct group
	{
		char unknown[4]; // ???
		s_tag_block unknown2_block;
		char unknown4[13]; // ???
	};
}
