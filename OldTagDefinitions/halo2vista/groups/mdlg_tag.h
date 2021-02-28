#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace mdlg_tag
{
	struct variants_block
	{
		char variant_designation[4]; // ???
		s_tag_reference sound;
		char sound_effect[8]; // ???
	};

	struct lines_block
	{
		char name[4]; // ???
		s_tag_block variants_block;
		char default_sound_effect[13]; // ???
	};

	struct group
	{
		s_tag_block lines_block;
	};
}
