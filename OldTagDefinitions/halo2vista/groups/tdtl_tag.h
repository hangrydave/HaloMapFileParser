#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace tdtl_tag
{
	struct cores_block
	{
		short bitmap_index;
		short unknown;
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		s_data_reference thickness;
		s_data_reference color;
		s_data_reference brightness_time;
		s_data_reference brightness_facing;
		s_data_reference along_axis_scale;
	};

	struct arcs_block
	{
		short flags;
		short sprite_count;
		float natural_length;
		short instances;
		short unknown;
		char instance_spread_angle[4]; // ???
		float instance_rotation_period;
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		s_tag_reference material_effects;
		s_tag_reference bitmap;
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		s_data_reference horizontal_range;
		s_data_reference vertical_range;
		float vertical_negative_scale;
		s_data_reference vertical_negative_scale2;
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		char unknown16[4]; // ???
		char unknown17[4]; // ???
		char unknown18[4]; // ???
		char unknown19[4]; // ???
		char unknown20[4]; // ???
		char unknown21[4]; // ???
		float octave_1_frequency_cycles_per_sec;
		float octave_2_frequency_cycles_per_sec;
		float octave_3_frequency_cycles_per_sec;
		float octave_4_frequency_cycles_per_sec;
		float octave_5_frequency_cycles_per_sec;
		float octave_6_frequency_cycles_per_sec;
		float octave_7_frequency_cycles_per_sec;
		float octave_8_frequency_cycles_per_sec;
		float octave_9_frequency_cycles_per_sec;
		char unknown22[4]; // ???
		char unknown23[4]; // ???
		char unknown24[4]; // ???
		char unknown25[4]; // ???
		char unknown26[4]; // ???
		char unknown27[4]; // ???
		char unknown28[4]; // ???
		char octave_flags[4]; // ???
		s_tag_block cores_block;
		s_data_reference range_collision_scale;
		s_data_reference brightness_collision_scale;
	};

	struct group
	{
		short unknown;
		short type;
		char attachment_marker_name[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		float falloff_distance_from_camera;
		float cutoff_distance_from_camera;
		char unknown16[4]; // ???
		char unknown17[4]; // ???
		char unknown18[4]; // ???
		char unknown19[4]; // ???
		char unknown20[4]; // ???
		char unknown21[4]; // ???
		char unknown22[4]; // ???
		char unknown23[4]; // ???
		s_tag_block arcs_block;
	};
}
