#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace jpt__tag
{
	struct player_responses_block
	{
		short response_type;
		short unknown;
		char unknown2[2]; // ???
		char unknown3[5]; // ???
		short type;
		short priority;
		float duration;
		short fade_function;
		short unknown4;
		float maximum_intensity;
		char color[16]; // ???
		float low_frequency_vibration_duration;
		s_data_reference low_frequency_vibration_function;
		float high_frequency_vibration_duration;
		s_data_reference high_frequency_vibration_function;
		char effect_name[4]; // ???
		float duration2;
		s_data_reference effect_scale_function;
	};

	struct group
	{
		char radius[8]; // ???
		float cutoff_scale;
		char flags[4]; // ???
		short side_effect;
		short category;
		char flags2[4]; // ???
		float area_of_effect_core_radius;
		float damage_lower_bound;
		char damage_upper_bound[8]; // ???
		char damage_inner_cone_angle[4]; // ???
		char damage_outer_cone_angle[4]; // ???
		float active_camoflage_damage;
		float stun;
		float maximum_stun;
		float stun_time;
		float instantaneous_acceleration;
		float rider_direct_damage_scale;
		float rider_maximum_transfer_damage_scale;
		float rider_minimum_transfer_damage_scale;
		char general_damage[4]; // ???
		char specific_damage[4]; // ???
		float ai_stun_radius;
		char ai_stun_bounds[8]; // ???
		float shake_radius;
		float emp_radius;
		s_tag_block player_responses_block;
		float duration;
		short fade_function;
		short unknown2;
		char rotation[4]; // ???
		float pushback;
		char jitter[8]; // ???
		float duration2;
		short falloff_function;
		short unknown3;
		float random_translation;
		char random_rotation[4]; // ???
		short wobble_function;
		short unknown4;
		float wobble_function_period;
		float wobble_weight;
		s_tag_reference sound;
		char unknown5[4]; // ???
		char unknown6[177]; // ???
		float forward_velocity;
		float forward_radius;
		float forward_exponent;
		float outward_velocity;
		float outward_radius;
		float outward_exponent;
	};
}
