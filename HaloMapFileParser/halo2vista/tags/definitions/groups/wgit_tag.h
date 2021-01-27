#pragma once

#include "../tag_layouts.h"

namespace wgit_tag
{
	struct buttons_1_block
	{
		short unknown;
		short unknown2;
		short button_transition_type__bitmask_;
		short unknown3;
		short unknown4;
		short font_type;
		float unknown5;
		float text_color_red;
		float text_color_green;
		float text_color_blue;
		short bitmap_placement_positive_coord_y;
		short bitmap_placement_positive_coord_x;
		short text_placement_negative_coord_y;
		short text_placement_negative_coord_x;
		s_tag_reference bitm;
		char coord[1]; // ???
		char coord2[1]; // ???
		char coord3[1]; // ???
		char coord4[1]; // ???
		char something_count[1]; // ???
		char bitmap_transiton_type__bitmask_[1]; // ???
		char unknown6[1]; // ???
		char brightness_something_[1]; // ???
		short unknown7;
		short unknown8;
		short unknown9;
		short unknown10;
	};

	struct buttons_2_block
	{
		short buttons_loop;
		short unknown;
		short unknown2;
		short unknown3;
		short button_type__palette__skin__;
		short unknown4;
		short number_of_visibles_buttons;
		short unknown5;
		short buttons_placement_coord_x;
		short buttons_placement_coord_y;
		short transition_type___bitmask_;
		short variation_;
	};

	struct text_strings_block
	{
		char text_options[4]; // ???
		short transtion_type__bitmask_;
		short variation_;
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

	struct ui_bitmaps_block
	{
		short unknown;
		short unknown2;
		short transition_type__bitmask_;
		short variation_;
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
		short coord_x_for__;
		short coord_y_for__;
		float unknown6;
		float unknown7;
		float unknown8;
	};

	struct script_object_block
	{
		char script_object_name[32];
	};

	struct unknown11_block
	{
		char unknown[32];
	};

	struct modelsscript_objects__scenery_bipeds_____block
	{
		short unknown;
		short unknown2;
		short transition_type__bitmask_;
		short variation_;
		short unknown3;
		short unknown4;
		s_tag_block script_object_block;
		s_tag_block unknown11_block;
		float unknown5;
		float unknown6;
		float unknown7;
		float unknown8;
		float unknown9;
		float unknown10;
		char relatives__coord__size__palcement[1]; // ???
		char relatives__coord__size__palcement2[1]; // ???
		char relatives__coord__size__palcement3[1]; // ???
		char relatives__coord__size__palcement4[1]; // ???
		char relatives__coord__size__palcement5[1]; // ???
		char relatives__coord__size__palcement6[1]; // ???
		char relatives__coord__size__palcement7[1]; // ???
		char relatives__coord__size__palcement8[1]; // ???
		char relatives__coord__size__palcement9[1]; // ???
		char relatives__coord__size__palcement10[1]; // ???
		char relatives__coord__size__palcement11[1]; // ???
		char relatives__coord__size__palcement12[1]; // ???
		float unknown11;
		float unknown12;
		float unknown13;
	};

	struct variable_buttons_block
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

	struct menu_content_block
	{
		short unknown;
		short transition_type;
		s_tag_block buttons_1_block;
		s_tag_block buttons_2_block;
		float unknown2;
		float unknown3;
		s_tag_block text_strings_block;
		s_tag_block ui_bitmaps_block;
		s_tag_block modelsscript_objects__scenery_bipeds_____block;
		float unknown4;
		float unknown5;
		float unknown6;
		float unknown7;
		s_tag_block variable_buttons_block;
	};

	struct notification_messages_block
	{
		char text_strings[999]; // ???
	};

	struct descriptions_help_text_block
	{
		char text_strings[4]; // ???
		s_tag_block notification_messages_block;
	};

	struct prededicated_resources__bitmap_tags_block
	{
		s_tag_reference bitm;
	};

	struct group
	{
		short back_ground_blur__blur_0_noblur_37_;
		short unknown;
		short menu_id;
		short visibles_x_a_b_options_buttons;
		float unknown2;
		float unknown3;
		float unknown4;
		float unknown5;
		s_tag_reference unic;
		s_tag_block menu_content_block;
		short font_type;
		short unknown16;
		char header_title_text_string[4]; // ???
		s_tag_block descriptions_help_text_block;
		s_tag_block prededicated_resources__bitmap_tags_block;
		char source_color[12]; // ???
		char destination_color[12]; // ???
		float accumulate_zoom_scale_x;
		float accumulate_zoom_scale_y;
		float refraction_scale_x;
		float refraction_scale_y;
		s_tag_reference mouse_cursor_definition;
	};
}
