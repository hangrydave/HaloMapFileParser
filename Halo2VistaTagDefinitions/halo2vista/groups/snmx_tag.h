#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace snmx_tag
{
	struct group
	{
		float left_stereo_gain;
		float right_stereo_gain;
		float left_stereo_gain2;
		float right_stereo_gain2;
		float left_stereo_gain3;
		float right_stereo_gain3;
		float front_speaker_gain;
		float rear_speaker_gain;
		float front_speaker_gain2;
		float rear_speaker_gain2;
		float mono_unspatialized_gain;
		float stereo_to_3d_gain;
		float rear_surround_to_front_stereo_gain;
		float front_speaker_gain3;
		float center_speaker_gain;
		float front_speaker_gain4;
		float center_speaker_gain2;
		float stereo_unspatialized_gain;
		float solo_player_fade_out_delay;
		float solo_player_fade_out_time_sec;
		float solo_player_fade_in_time_sec;
		float game_music_fade_out_time_sec;
	};
}
