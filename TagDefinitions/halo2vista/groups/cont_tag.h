#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace cont_tag
{
	struct point_states_block
	{
		float duration_lower;
		float duration_upper;
		float transition_lower;
		float transition_upper;
		s_tag_reference physics;
		float width;
		float color_lower_alpha;
		float color_lower_red;
		float color_lower_green;
		float color_lower_blue;
		float color_upper_alpha;
		float color_upper_red;
		float color_upper_green;
		float color_upper_blue;
		char scale_flags[4]; // ???
	};

	struct group
	{
		short flags;
		short scale_flags;
		float point_generation_rate;
		float min_point_velocity;
		float max_point_velocity;
		char point_velocity_cone_angle[4]; // ???
		float inherited_velocity_fraction;
		short render_type;
		short unknown;
		float texture_repeats_u;
		float texture_repeats_v;
		float texture_animation_u;
		float texture_animation_v;
		float texture_animation_rate;
		s_tag_reference bitmap;
		short first_sequence_index;
		short sequence_count;
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
		short shader_flags;
		short framebuffer_blend_function;
		short framebuffer_fade_mode;
		short map_flags;
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		char unknown16[4]; // ???
		char unknown17[4]; // ???
		char unknown18[4]; // ???
		s_tag_reference bitmap2;
		short anchor;
		short flags2;
		short unknown19;
		short u_animation_function;
		float u_animation_period;
		float u_animation_phase;
		float u_animation_scale;
		short unknown20;
		short v_animation_function;
		float v_animation_period;
		float v_animation_phase;
		float v_animation_scale;
		short unknown21;
		short rotation_animation_function;
		float rotation_animation_period;
		float rotation_animation_phase;
		float rotation_animation_scale;
		float rotation_animation_center_x;
		float rotation_animation_center_y;
		char unknown22[4]; // ???
		float zsprite_radius_scale;
		char unknown23[4]; // ???
		char unknown24[4]; // ???
		char unknown25[4]; // ???
		char unknown26[4]; // ???
		char unknown27[4]; // ???
		s_tag_block point_states_block;
	};
}
