#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace snd__tag
{
	struct group
	{
		short flags;
		char sound_class;
		char sample_rate;
		char encoding;
		char compression;
		short _ugh___playback_parameter_index;
		short _ugh___pitch_range_index;
		char unknown;
		char _ugh___scale_index;
		char _ugh___promotion_index;
		char _ugh___custom_playback_index;
		short _ugh___extra_info_index;
		long maximum_play_time;
	};
}
