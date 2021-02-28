#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace fpch_tag
{
	struct group
	{
		char flags[4]; // ???
		float movement_rotation_multiplier;
		float movement_strafing_multiplier;
		float movement_zoom_multiplier;
		float noise_map_scale;
		s_tag_reference noise_map;
		float noise_vertical_scale_forward;
		float noise_vertical_scale_up;
		float noise_opacity_scale_up;
		float animation_period__sec_;
		float wind_velocity_min;
		float wind_velocity_max;
		float wind_period_min;
		float wind_period_max;
		float wind_acceleration_weight;
		float wind_perpendicular_weight;
		float wind_constant_velocity_x;
		float wind_constant_velocity_y;
		float wind_constant_velocity_z;
	};
}
