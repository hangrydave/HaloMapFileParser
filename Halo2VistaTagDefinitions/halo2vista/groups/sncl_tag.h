#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace sncl_tag
{
	struct sound_classes_block
	{
		short max_sounds_per_tag;
		short max_sounds_per_object;
		long preemption_time;
		short internal_flags;
		short flags;
		short priority;
		short cache_miss_mode;
		float reverb_gain;
		float override_speaker_gain;
		char distance_bounds[8]; // ???
		char gain_bounds[8]; // ???
		float cutscene_ducking;
		float cutscene_ducking_fade_in_time;
		float cutscene_ducking_sustain_time;
		float cutscene_ducking_fade_out_time;
		float scripted_dialog_ducking;
		float scripted_dialog_ducking_fade_in_time;
		float scripted_dialog_ducking_sustain_time;
		float scripted_dialog_ducking_fade_out_time;
		float doppler_factor;
		char stereo_playback_type[4]; // ???
		float transmission_multiplier;
		float obstruction_max_bend;
		float occlusion_max_bend;
	};

	struct group
	{
		s_tag_block sound_classes_block;
	};
}
