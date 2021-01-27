#pragma once

#include "../tag_layouts.h"

namespace udlg_tag
{
	struct vocalizations_block
	{
		short flags;
		short unknown;
		char vocalization[4]; // ???
		s_tag_reference sound;
	};

	struct group
	{
		s_tag_reference global_dialogue_info;
		char flags[4]; // ???
		s_tag_block vocalizations_block;
		char mission_dialogue_designator[21]; // ???
	};
}
