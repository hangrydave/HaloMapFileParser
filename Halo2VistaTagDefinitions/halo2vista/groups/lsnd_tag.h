#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace lsnd_tag
{
	struct tracks_block
	{
		char name[4]; // ???
		char flags[4]; // ???
		float gain;
		float fade_in_duration;
		float fade_out_duration;
		s_tag_reference in;
		s_tag_reference loop;
		s_tag_reference out;
		s_tag_reference alternate_loop;
		s_tag_reference alternate_out;
		short output_effect;
		short unknown;
		s_tag_reference alternate_transition_in;
		s_tag_reference alternate_transition_out;
		float alternate_crossfade_duration;
		float alternate_fade_out_duration;
	};

	struct detail_sounds_block
	{
		char name[4]; // ???
		s_tag_reference sound;
		char random_period_bounds[8]; // ???
		float unknown;
		char flags[4]; // ???
		char yaw_bounds[8]; // ???
		char pitch_bounds[8]; // ???
		char distance_bounds[8]; // ???
	};

	struct group
	{
		char flags[4]; // ???
		float marty_s_music_time;
		float unknown;
		float unknown2;
		float unknown3;
		s_tag_reference unknown4;
		s_tag_block tracks_block;
		s_tag_block detail_sounds_block;
	};
}
