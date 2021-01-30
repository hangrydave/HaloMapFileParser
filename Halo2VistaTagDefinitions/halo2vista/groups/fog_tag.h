#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace fog_tag
{
	struct patchy_fog_block
	{
		char color[12]; // ???
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		float density_min;
		float density_max;
		float distance_min;
		float distance_max;
		float min_depth_fraction;
		s_tag_reference patchy_fog;
	};

	struct group
	{
		short flags;
		short priority;
		char global_material_name[4]; // ???
		short unknown;
		short unknown2;
		float maximum_density;
		float opaque_distance;
		float opaque_depth;
		float atmospheric_planar_depth_min;
		float atmospheric_planar_depth_max;
		float eye_offset_scale;
		char color[12]; // ???
		s_tag_block patchy_fog_block;
		s_tag_reference background_sound;
		s_tag_reference sound_environment;
		float environment_damping_factor;
		float background_sound_gain;
		s_tag_reference enter_sound;
		s_tag_reference exit_sound;
	};
}
