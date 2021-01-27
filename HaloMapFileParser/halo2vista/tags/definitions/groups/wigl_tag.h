#pragma once

#include "../tag_layouts.h"

namespace wigl_tag
{
	struct variations_block
	{
		short unknown;
		short unknown2;
		short unknown3;
		short unknown4;
		char header[4]; // ???
		char content[4]; // ???
		char option_1[4]; // ???
		char option_2[4]; // ???
	};

	struct dialogs_block
	{
		char dialog_group[4]; // ???
		short unknown;
		short window_type___wgit_palette_;
		s_tag_reference unic_text;
		char default_header[4]; // ???
		char default_content[4]; // ???
		char option_1[4]; // ???
		char option_2[4]; // ???
		s_tag_block variations_block;
	};

	struct button_switching_effects_block
	{
		float unknown;
		float unknown2;
		float unknown3;
		float unknown4;
		float unknown5;
	};

	struct button_switching_effects2_block
	{
		float unknown;
		float unknown2;
		float unknown3;
		float unknown4;
		float unknown5;
	};

	struct unknown32_block
	{
		float unknown;
		float unknown2;
		float unknown3;
		float unknown4;
		float unknown5;
	};

	struct virtual_keyboard_buttons_settings_block
	{
		short unknown;
		short unknown2;
		short selected_button_brightness;
		short unknown3;
		s_tag_block button_switching_effects_block;
		short selected_button_brightness2;
		short unknown4;
		s_tag_block button_switching_effects2_block;
		short unknown5;
		short unknown6;
		short unknown7;
		short unknown8;
		s_tag_block unknown32_block;
	};

	struct button_switching_effects__block
	{
		short unknown;
		short unknown2;
		float unknown3;
		float unknown4;
		float unknown5;
		float unknown6;
	};

	struct button_effects__block
	{
		short unknown;
		short unknown2;
		short brightness;
		short unknown3;
		s_tag_block button_switching_effects__block;
	};

	struct buttons_palette_block
	{
		s_tag_reference skin;
	};

	struct unknown42_block
	{
		short unknown;
		short unknown2;
	};

	struct group
	{
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
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		char unknown16[4]; // ???
		char unknown17[4]; // ???
		float unknown18;
		short auto_typing_text__time;
		short auto_typing_text__words_per_line;
		float auto_typing_text__size;
		float auto_typing_text__alpha_;
		float red;
		float green;
		float blue;
		float unknown19;
		float blur_blending_speedunknown;
		float blur_blending_speedunknown2;
		float blur_color_opacity;
		float blur_red;
		float blur_green;
		float blur_blue;
		float unknown20;
		float unknown21;
		float unknown22;
		s_tag_block dialogs_block;
		s_tag_reference selection_change_sound_1;
		s_tag_reference forward_sound_1;
		s_tag_reference unknown25;
		s_tag_reference advance_sound;
		s_tag_reference back_sound;
		s_tag_reference shortcut_sound;
		s_tag_reference selection_change_sound_2;
		s_tag_reference keyboard_click_sound;
		s_tag_reference message_recieved_sound;
		s_tag_reference forward_sound_2;
		s_tag_reference countdown_sound;
		s_tag_reference unknown26;
		s_tag_reference pickup_health_sound;
		s_tag_reference unknown27;
		s_tag_reference unknown28;
		s_tag_reference unknown29;
		s_tag_reference global_bitmaps;
		s_tag_reference global_unic;
		s_tag_block virtual_keyboard_buttons_settings_block;
		char unknown35[4]; // ???
		char unknown36[4]; // ???
		s_tag_block button_effects__block;
		s_tag_block buttons_palette_block;
		s_tag_reference unic;
		s_tag_reference built_in_gametype_names;
		char unknown40[4]; // ???
		char unknown41[4]; // ???
		s_tag_block unknown42_block;
		short main_window_header_text__font_type_;
		short pop_up_window_header_text__font_type_;
		short pop_up_window_confirmation_dialog_header_text__font_type_;
		short unknown_header_fontype;
		float unknown_header_fontype2;
		float red_header_tittle;
		float green_header_tittle;
		float blue_header_tittle;
		short main_window_header_text_coord_y;
		short main_window_header_text_coord_x;
		short pop_up_window_confirmation_dialog_header_text_coord_x;
		short pop_up_window_confirmation_dialog_header_text_coord_x2;
		short main_window_buttons_coord_y;
		short main_window_buttons_coord_x;
		short main_window_buttons_coord_y2;
		short main_window_buttons_coord_x2;
		short game_setup_header_text_coord_y;
		short game_setup_header_text_coord_x;
		short pop_up_confirmation_dialog_header_text_coord_y;
		short pop_up_confirmation_dialog_header_text_coord_x;
		short game_setup_buttons_coord_y;
		short game_setup_buttons_coord_x;
		short keyboard_window_buttons_coord_y;
		short keyboard_window_buttons_coord_x;
		short unknown_header_text_coords_y;
		short unknown_header_text_coords_x;
		short unknown_header_text_coords_y2;
		short unknown_header_text_coords_x2;
		short unknown_button_coords_y;
		short unknown_button_coords_x;
		short campaign_gametype_settings_pop_up_dialog_button_y;
		short campaign_gametype_settings_pop_up_dialog_button_x;
		short pop_up_confirmation_dialog_header_text_y;
		short pop_up_confirmation_dialog_header_text_x;
		short unknown_header_text_coords_y3;
		short unknown_header_text_coords_x3;
		short unknown_button_coords_y2;
		short unknown_button_coords_x2;
		short pop_up_confirmation_dialog_button_coord_y;
		short pop_up_confirmation_dialog_button_coord_x;
		s_tag_reference music;
		char music_duration_time_[8]; // ???
	};
}
