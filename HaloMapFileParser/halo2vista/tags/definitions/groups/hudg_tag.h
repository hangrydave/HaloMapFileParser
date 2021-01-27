#pragma once

#include "../tag_layouts.h"

namespace hudg_tag
{
	struct button_icons_block
	{
		short sequence_index;
		short width_offset;
		short offset_from_reference_corner__x_;
		short offset_from_reference_corner__y_;
		char override_icon_color[4]; // ???
		char frame_rate__0_30_[1]; // ???
		char flags[1]; // ???
		short text_index;
	};

	struct waypoint_arrows_block
	{
		char name[32];
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char color[4]; // ???
		float opacity;
		float translucency;
		short on_screen_sequence_index;
		short off_screen_sequence_index;
		short occluded_sequence_index;
		short unknown3;
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char flags[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char unknown13[4]; // ???
	};

	struct dashlights_block
	{
		s_tag_reference bitmap;
		s_tag_reference shader;
		short sequence_index;
		short time_out_flash_flags;
		s_tag_reference sound;
	};

	struct waypoint_arrows2_block
	{
		s_tag_reference bitmap;
		s_tag_reference shader;
		float sequence_index;
		float smallest_size;
		float smallest_distance;
		s_tag_reference border_bitmap;
	};

	struct waypoints_block
	{
		s_tag_reference bitmap;
		s_tag_reference sahder;
		short onscreen_sequence_index;
		short occluded_sequence_index;
		short offscreen_sequence_index;
		short unknown;
	};

	struct hud_sounds_block
	{
		s_tag_reference chief_sound;
		char flags[4]; // ???
		float scale;
		s_tag_reference dervish_sound;
	};

	struct player_training_data_block
	{
		char display_string[4]; // ???
		char display_string_2[4]; // ???
		char display_string_3[4]; // ???
		short maximum_display_time;
		short display_count;
		short dissapear_delay;
		short redisplay_delay;
		float display_delay;
		short flags;
		short unknown;
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
		short anchor;
		char anchor_offset__y_[1]; // ???
		char anchor_offset__x_[1]; // ???
		char unknown10[4]; // ???
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		char unknown16[4]; // ???
		char unknown17[4]; // ???
		s_tag_reference obsolete1;
		s_tag_reference obsolete2;
		float message_up_time;
		float message_fade_time;
		char icon_color[16]; // ???
		char text_color[16]; // ???
		float text_spacing;
		s_tag_reference item_message_text;
		s_tag_reference icon_bitmap;
		s_tag_reference alternate_icon;
		s_tag_block button_icons_block;
		char hud_help_default_color[4]; // ???
		char hud_help_flashing_color[4]; // ???
		float hud_help_flash_period;
		float hud_help_flash_delay;
		short number_of_flashes;
		short hud_help_flash_flags;
		float hud_help_flash_length;
		char disabled_color[4]; // ???
		char disabled_color2[4]; // ???
		s_tag_reference hud_messages;
		char objective_default[4]; // ???
		char objective_flashing[4]; // ???
		float objective_flash_period;
		float objective_flash_delay;
		short number_of_flashes2;
		short hud_help_flash_flags2;
		float objective_flash_length;
		char disabled_color3[4]; // ???
		short objective_uptime_ticks;
		short objective_fade_ticks;
		float _waypoint_top_offset;
		float waypoint_bottom_offset;
		float waypoint_left_offset;
		float waypoint_right_offset;
		char unknown19[4]; // ???
		char unknown20[4]; // ???
		char unknown21[4]; // ???
		char unknown22[4]; // ???
		char unknown23[4]; // ???
		char unknown24[4]; // ???
		char unknown25[4]; // ???
		char unknown26[4]; // ???
		s_tag_reference arrow_bitmap;
		s_tag_block waypoint_arrows_block;
		char unknown28[4]; // ???
		char unknown29[4]; // ???
		char unknown30[4]; // ???
		char unknown31[4]; // ???
		char unknown32[4]; // ???
		char unknown33[4]; // ???
		char unknown34[4]; // ???
		char unknown35[4]; // ???
		char unknown36[4]; // ???
		char unknown37[4]; // ???
		char unknown38[4]; // ???
		char unknown39[4]; // ???
		char unknown40[4]; // ???
		char unknown41[4]; // ???
		char unknown42[4]; // ???
		char unknown43[4]; // ???
		char unknown44[4]; // ???
		char unknown45[4]; // ???
		char unknown46[4]; // ???
		char unknown47[4]; // ???
		float multiplayer_hud_scale;
		char unknown48[4]; // ???
		char unknown49[4]; // ???
		char unknown50[4]; // ???
		char unknown51[4]; // ???
		char unknown52[4]; // ???
		char unknown53[4]; // ???
		char unknown54[4]; // ???
		char unknown55[4]; // ???
		char unknown56[4]; // ???
		char unknown57[4]; // ???
		char unknown58[4]; // ???
		char unknown59[4]; // ???
		char unknown60[4]; // ???
		char unknown61[4]; // ???
		char unknown62[4]; // ???
		char unknown63[4]; // ???
		char unknown64[4]; // ???
		char unknown65[4]; // ???
		char unknown66[4]; // ???
		char unknown67[4]; // ???
		char unknown68[4]; // ???
		char unknown69[4]; // ???
		char unknown70[4]; // ???
		char unknown71[4]; // ???
		char unknown72[4]; // ???
		char unknown73[4]; // ???
		char unknown74[4]; // ???
		char unknown75[4]; // ???
		char unknown76[4]; // ???
		char unknown77[4]; // ???
		char unknown78[4]; // ???
		char unknown79[4]; // ???
		char unknown80[4]; // ???
		char unknown81[4]; // ???
		char unknown82[4]; // ???
		char unknown83[4]; // ???
		char unknown84[4]; // ???
		char unknown85[4]; // ???
		char unknown86[4]; // ???
		char unknown87[4]; // ???
		char unknown88[4]; // ???
		char unknown89[4]; // ???
		char unknown90[4]; // ???
		char unknown91[4]; // ???
		char unknown92[4]; // ???
		char unknown93[4]; // ???
		char unknown94[4]; // ???
		char unknown95[4]; // ???
		char unknown96[4]; // ???
		char unknown97[4]; // ???
		char unknown98[4]; // ???
		char unknown99[4]; // ???
		char unknown100[4]; // ???
		char unknown101[4]; // ???
		char unknown102[4]; // ???
		char unknown103[4]; // ???
		char unknown104[4]; // ???
		char unknown105[4]; // ???
		char unknown106[4]; // ???
		char unknown107[4]; // ???
		char unknown108[4]; // ???
		char unknown109[4]; // ???
		char unknown110[4]; // ???
		char unknown111[4]; // ???
		char unknown112[4]; // ???
		char unknown113[4]; // ???
		char unknown114[4]; // ???
		char unknown115[4]; // ???
		float motion_sensor_range;
		float motion_sensor_velocity_sensitivity;
		float motion_sensor_scale;
		short default_title_chapter_bounds__top_;
		short default_title_chapter_bounds__left_;
		short default_title_chapter_bounds__bottom_;
		short default_title_chapter_bounds__right_;
		char unknown116[4]; // ???
		char unknown117[4]; // ???
		char unknown118[4]; // ???
		char unknown119[4]; // ???
		char unknown120[4]; // ???
		char unknown121[4]; // ???
		char unknown122[4]; // ???
		char unknown123[4]; // ???
		char unknown124[4]; // ???
		char unknown125[4]; // ???
		char unknown126[4]; // ???
		short hud_damage_indicator_offset__top_;
		short hud_damage_indicator_offset__bottom_;
		short hud_damage_indicator_offset__left_;
		short hud_damage_indicator_offset__right_;
		char unknown127[4]; // ???
		char unknown128[4]; // ???
		char unknown129[4]; // ???
		char unknown130[4]; // ???
		char unknown131[4]; // ???
		char unknown132[4]; // ???
		char unknown133[4]; // ???
		char unknown134[4]; // ???
		s_tag_reference damage_indicator_bitmap;
		short sequence_index;
		short multiplayer_sequence_index;
		char damage_indicator_color[4]; // ???
		char unknown135[4]; // ???
		char unknown136[4]; // ???
		char unknown137[4]; // ???
		char unknown138[4]; // ???
		char not_much_time_left_default_color[4]; // ???
		char not_much_time_left_flash_color[4]; // ???
		float not_much_time_left_flash_period;
		float not_much_time_left_flash_delay;
		short number_of_flashes3;
		short not_much_time_left_flash_flags;
		float not_much_time_left_flash_length;
		char unknown139[4]; // ???
		char unknown140[4]; // ???
		char time_out_default_color[4]; // ???
		char time_out_flashing_color[4]; // ???
		float time_out_flash_period;
		float time_out_flash_delay;
		short number_of_flashes4;
		short time_out_flash_flags;
		float time_out_flash_length;
		char disabled_time_out_default_color[4]; // ???
		char unknown141[4]; // ???
		char unknown142[4]; // ???
		char unknown143[4]; // ???
		char unknown144[4]; // ???
		char unknown145[4]; // ???
		char unknown146[4]; // ???
		char unknown147[4]; // ???
		char unknown148[4]; // ???
		char unknown149[4]; // ???
		char unknown150[4]; // ???
		char unknown151[4]; // ???
		s_tag_reference carnage_report_bitmap;
		short loading_begin_text;
		short loading_end_text;
		short checkpoint_begin_text;
		short checkpoint_end_text;
		s_tag_reference checkpoint_sound;
		char unknown152[4]; // ???
		char unknown153[4]; // ???
		char unknown154[4]; // ???
		char unknown155[4]; // ???
		char unknown156[4]; // ???
		char unknown157[4]; // ???
		char unknown158[4]; // ???
		char unknown159[4]; // ???
		char unknown160[4]; // ???
		char unknown161[4]; // ???
		char unknown162[4]; // ???
		char unknown163[4]; // ???
		char unknown164[4]; // ???
		char unknown165[4]; // ???
		char unknown166[4]; // ???
		char unknown167[4]; // ???
		char unknown168[4]; // ???
		char unknown169[4]; // ???
		char unknown170[4]; // ???
		char unknown171[4]; // ???
		char unknown172[4]; // ???
		char unknown173[4]; // ???
		char unknown174[4]; // ???
		char unknown175[4]; // ???
		s_tag_reference hud_text;
		s_tag_block dashlights_block;
		s_tag_block waypoint_arrows2_block;
		s_tag_block waypoints_block;
		s_tag_block hud_sounds_block;
		s_tag_block player_training_data_block;
		s_tag_reference primary_message_sound;
		s_tag_reference secondary_message_sound;
		char boot_griefer_string[4]; // ???
		char cannot_boot_griefer_string[4]; // ???
		s_tag_reference training_shader;
		s_tag_reference human_training_top_right;
		s_tag_reference human_training_top_center;
		s_tag_reference human_training_top_left;
		s_tag_reference human_training_center;
		s_tag_reference elite_training_top_right;
		s_tag_reference elite_training_top_center;
		s_tag_reference elite_training_top_left;
		s_tag_reference elite_training_center;
	};
}
