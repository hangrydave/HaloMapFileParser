#pragma once

#include "../tag_layouts.h"

namespace trg__tag
{
	struct kill_trigger_volumes_block
	{
		char name[4]; // ???
		short object_name;
		short unknown;
		char node_name[4]; // ???
		float unknown2;
		float unknown3;
		float unknown4;
		float unknown5;
		float unknown6;
		float unknown7;
		float unknown8;
		float position_x;
		float position_y;
		float position_z;
		float extents_x;
		float extents_y;
		float extents_z;
		short kill_trigger_volume_index;
		short unknown9;
	};

	struct object_names_block
	{
		char name[32];
		short type;
		short placement_index;
	};

	struct group
	{
		s_tag_block kill_trigger_volumes_block;
		s_tag_block object_names_block;
	};
}
