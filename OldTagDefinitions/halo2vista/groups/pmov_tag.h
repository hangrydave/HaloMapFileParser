#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace pmov_tag
{
	struct parameters_block
	{
		long parameter_id;
		short unknown;
		short unknown2;
		short unknown3;
		short unknown4;
		s_data_reference function;
	};

	struct movements_block
	{
		short type;
		short unknown;
		s_tag_block parameters_block;
		short unknown2;
		short unknown3;
		long unknown4;
	};

	struct group
	{
		s_tag_reference template_;
		char flags[4]; // ???
		s_tag_block movements_block;
	};
}
