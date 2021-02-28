#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace deca_tag
{
	struct group
	{
		short flags;
		short type;
		short layer;
		short max_overlapping_count;
		s_tag_reference next_decal_in_chain;
		float radius;
		float _to_world_units_;
		float radius_overlapping_rejection;
		float color_lower_bound_r;
		float color_lower_bound_g;
		float color_lower_bound_b;
		float color_upper_bound_r;
		float color_upper_bound_g;
		float color_upper_bound_b;
		float lifetime;
		float _to_seconds_;
		float decay_time;
		float _to_seconds_2;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		short unknown11;
		short unknown12;
		short unknown13;
		short unknown14;
		char unknown15[4]; // ???
		char unknown16[4]; // ???
		char unknown17[4]; // ???
		char unknown18[4]; // ???
		char unknown19[4]; // ???
		s_tag_reference bitmap;
		char unknown20[4]; // ???
		char unknown21[4]; // ???
		char unknown22[4]; // ???
		char unknown23[4]; // ???
		char unknown24[4]; // ???
		float maximun_sprite_extent_pixels_;
		char unknown25[4]; // ???
	};
}
