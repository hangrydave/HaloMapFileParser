#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace cin__tag
{
	struct flags_block
	{
		char unknown[4]; // ???
		char name[32];
		float position_x;
		float position_y;
		float position_z;
		char facing_y[4]; // ???
		char facing_p[4]; // ???
	};

	struct camera_points_block
	{
		short flags;
		short type;
		char name[32];
		float position_x;
		float position_y;
		float position_z;
		char orientation_y[4]; // ???
		char orientation_p[4]; // ???
		char orientation_r[4]; // ???
		char unknown[4]; // ???
	};

	struct recorded_animations_block
	{
		char name[32];
		char version;
		char raw_animation_data;
		char unit_control_data_version;
		char unknown;
		short length_of_animation;
		short unknown2;
		char unknown3[4]; // ???
		s_data_reference recorded_animation_event_stream;
	};

	struct group
	{
		s_tag_block flags_block;
		s_tag_block camera_points_block;
		s_tag_block recorded_animations_block;
	};
}
