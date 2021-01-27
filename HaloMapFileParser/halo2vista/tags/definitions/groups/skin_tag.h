#pragma once

#include "../tag_layouts.h"

namespace skin_tag
{
	struct button_switching_effects_block
	{
		float unknown;
		float bitmap_flashing_speed;
		float button_shifting_space;
		float unknown2;
		float unknown3;
	};

	struct button_effects_block
	{
		float unknown;
		short brightness;
		short brightness_only_once;
		s_tag_block button_switching_effects_block;
	};

	struct buttons_text_strings_block
	{
		char text_options[4]; // ???
		short animation_index;
		short intro_animation_delay_milliseconds;
		short unknown;
		short font_type;
		float alpha;
		float color_red;
		float color_green;
		float color_blue;
		char text_placement[8]; // ???
		char string_name[4]; // ???
		char unknown2[4]; // ???
	};

	struct button_bitmaps_block
	{
		short unknown;
		short unknown2;
		short animation_index;
		short intro_animation_delay_milliseconds;
		short alpha_transparence;
		short xbox_live_bitmap_setting;
		short bitmap_placement_coord_x;
		short bitmap_placement_coord_y;
		float horizontal_bitmap_scrolling_speed;
		float unknown3;
		s_tag_reference bitm;
		short bitmap_layer_level;
		short unknown4;
		float unknown5;
		short unknown6;
		short unknown7;
		char bitmap_color_variation_fuction[4]; // ???
		float unknown8;
		float unknown9;
	};

	struct emblem_block
	{
		char flags[4]; // ???
		short animation_index;
		short intro_animation_delay_milliseconds;
		short xbox_live_bitmap_setting;
		short unknown;
		s_tag_reference bitm;
		s_tag_reference shad;
		short coord_x;
		short coord_y;
		short coord_x2;
		short coord_y2;
	};

	struct buttons_holder_block
	{
		float unknown;
		s_tag_reference skin;
		short coord_x;
		short coord_y;
		char unknown2[1]; // ???
		char max_visible_buttons[1]; // ???
		char unknown3[1]; // ???
		char unknown4[1]; // ???
		short coord_x2;
		short coord_y2;
	};

	struct group
	{
		float unknown;
		s_tag_reference bitm;
		short coord_x_top_arrow;
		short coord_y_top_arrow;
		short coord_x_bottom_arrow;
		short coord_y_bottom_arrow;
		s_tag_block button_effects_block;
		s_tag_block buttons_text_strings_block;
		s_tag_block button_bitmaps_block;
		s_tag_block emblem_block;
		s_tag_block buttons_holder_block;
	};
}
