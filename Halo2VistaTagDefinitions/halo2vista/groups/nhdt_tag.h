#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace nhdt_tag
{
	struct effect_block
	{
		short flags;
		short unknown;
		char input_name[4]; // ???
		char range_name[4]; // ???
		float time_period_in_seconds;
		s_data_reference function;
		char input_name2[4]; // ???
		char range_name2[4]; // ???
		float time_period_in_seconds2;
		s_data_reference function2;
		char input_name3[4]; // ???
		char range_name3[4]; // ???
		float time_period_in_seconds3;
		s_data_reference function3;
		char input_name4[4]; // ???
		char range_name4[4]; // ???
		float time_period_in_seconds4;
		s_data_reference function4;
		char input_name5[4]; // ???
		char range_name5[4]; // ???
		float time_period_in_seconds5;
		s_data_reference function5;
	};

	struct bitmap_widgets_block
	{
		char name[4]; // ???
		char input_1;
		char input_2;
		char input_3;
		char input_4;
		short _yes__unit_flags;
		short _yes__extra_flags;
		short _yes__weapon_flags;
		short _yes__game_engine_state_flags;
		short _no__unit_flags;
		short _no__extra_flags;
		short _no__weapon_flags;
		short _no__game_engine_state_flags;
		char age_cutoff;
		char clip_cutoff;
		char total_cutoff;
		char unknown;
		short anchor;
		short flags;
		s_tag_reference bitmap;
		s_tag_reference shader;
		char fullscreen_sequence_index;
		char halfscreen_sequence_index;
		char quarterscreen_sequence_index;
		char unknown2;
		s_point16 fullscreen_offset;
		s_point16 halfscreen_offset;
		s_point16 quarterscreen_offset;
		char fullscreen_registration_point[8]; // ???
		char halfscreen_registration_point[8]; // ???
		char quarterscreen_registration_point[8]; // ???
		s_tag_block effect_block;
		short special_hud_type;
		short unknown3;
	};

	struct effect2_block
	{
		short flags;
		short unknown;
		char input_name[4]; // ???
		char range_name[4]; // ???
		float time_period_in_seconds;
		s_data_reference function;
		char input_name2[4]; // ???
		char range_name2[4]; // ???
		float time_period_in_seconds2;
		s_data_reference function2;
		char input_name3[4]; // ???
		char range_name3[4]; // ???
		float time_period_in_seconds3;
		s_data_reference function3;
		char input_name4[4]; // ???
		char range_name4[4]; // ???
		float time_period_in_seconds4;
		s_data_reference function4;
		char input_name5[4]; // ???
		char range_name5[4]; // ???
		float time_period_in_seconds5;
		s_data_reference function5;
	};

	struct text_widgets_block
	{
		char name[4]; // ???
		char input_1;
		char input_2;
		char input_3;
		char input_4;
		short _yes__unit_flags;
		short _yes__extra_flags;
		short _yes__weapon_flags;
		short _yes__game_engine_state_flags;
		short _no__unit_flags;
		short _no__extra_flags;
		short _no__weapon_flags;
		short _no__game_engine_state_flags;
		char age_cutoff;
		char clip_cutoff;
		char total_cutoff;
		char unknown;
		short anchor;
		short flags;
		s_tag_reference shader;
		char string[4]; // ???
		short justification;
		short unknown2;
		char fullscreen_font_index;
		char halfscreen_font_index;
		char quarterscreen_font_index;
		char unknown3;
		float fullscreen_scale;
		float halfscreen_scale;
		float quarterscreen_scale;
		s_point16 fullscreen_offset;
		s_point16 halfscreen_offset;
		s_point16 quarterscreen_offset;
		s_tag_block effect2_block;
	};

	struct screen_effect_widgets_block
	{
		char name[4]; // ???
		char input_1;
		char input_2;
		char input_3;
		char input_4;
		short _yes__unit_flags;
		short _yes__extra_flags;
		short _yes__weapon_flags;
		short _yes__game_engine_state_flags;
		short _no__unit_flags;
		short _no__extra_flags;
		short _no__weapon_flags;
		short _no__game_engine_state_flags;
		char age_cutoff;
		char clip_cutoff;
		char total_cutoff;
		char unknown;
		short anchor;
		short flags;
		s_tag_reference bitmap;
		s_tag_reference fullscreen_screen_effect;
		s_tag_reference halfscreen_screen_effect;
		s_tag_reference quarterscreen_screen_effect;
		char fullscreen_sequence_index;
		char halfscreen_sequence_index;
		char quarterscreen_sequence_index;
		char unknown2;
		s_point16 fullscreen_offset;
		s_point16 halfscreen_offset;
		s_point16 quarterscreen_offset;
	};

	struct group
	{
		s_tag_reference unknown;
		s_tag_block bitmap_widgets_block;
		s_tag_block text_widgets_block;
		short low_clip_cutoff;
		short low_ammo_cutoff;
		float age_cutoff;
		s_tag_block screen_effect_widgets_block;
	};
}
