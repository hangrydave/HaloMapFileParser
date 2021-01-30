#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace snde_tag
{
	struct group
	{
		char unknown[4]; // ???
		short priority;
		short unknown2;
		float room_intensity;
		float room_intensity_high_frequency;
		float room_rolloff;
		float decay_time;
		float decay_high_frequency_ratio;
		float reflections_intensity;
		float reflections_delay;
		float reverb_intensity;
		float reverb_delay;
		float diffusion;
		float density;
		float high_frequency_refrence;
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
	};
}
