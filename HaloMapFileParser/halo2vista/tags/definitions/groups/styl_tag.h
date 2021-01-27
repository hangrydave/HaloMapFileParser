#pragma once

#include "../tag_layouts.h"

namespace styl_tag
{
	struct special_movement_block
	{
		char special_movement_1[999]; // ???
	};

	struct behavior_list_block
	{
		char behavior_name[32];
	};

	struct group
	{
		char name[32];
		short combat_status_decay_options;
		short unknown;
		short attitude;
		short unknown2;
		char engage_attitude;
		char evasion_attitude;
		char cover_attitude;
		char search_attitude;
		char presearch_attitude;
		char retreat_attitude;
		char charge_attitude;
		char ready_attitude;
		char idle_attitude;
		char weapon_attitude;
		char swarm_attitude;
		char unknown3;
		char style_control[4]; // ???
		char behaviors1[4]; // ???
		char behaviors2[4]; // ???
		char behaviors3[4]; // ???
		char behaviors4[4]; // ???
		char behaviors5[4]; // ???
		s_tag_block special_movement_block;
		s_tag_block behavior_list_block;
	};
}
