#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace mulg_tag
{
	struct team_colors_block
	{
		char color[999]; // ???
	};

	struct universal_block
	{
		s_tag_reference random_player_names;
		s_tag_reference team_names;
		s_tag_block team_colors_block;
		s_tag_reference multiplayer_text;
	};

	struct weapons_block
	{
		s_tag_reference weapon;
	};

	struct vehicles_block
	{
		s_tag_reference vehicle;
	};

	struct grenades_block
	{
		s_tag_reference weapon;
	};

	struct powerups_block
	{
		s_tag_reference weapon;
	};

	struct sounds_block
	{
		s_tag_reference sound;
	};

	struct sound_permutations_block
	{
		short sound_flags;
		short unknown;
		s_tag_reference english_sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		float probability;
	};

	struct general_events_block
	{
		short flags;
		short type;
		short event;
		short audience;
		short unknown;
		short unknown2;
		char display_string[4]; // ???
		short required_field;
		short excluded_audience;
		char primary_string[4]; // ???
		long primary_string_duration;
		char pural_display_string[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		float sound_delay__announcer_only_;
		short sound_flags;
		short unknown10;
		s_tag_reference sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		s_tag_block sound_permutations_block;
	};

	struct sound_permutations2_block
	{
		short sound_flags;
		short unknown;
		s_tag_reference english_sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		float probability;
	};

	struct flavor_events_block
	{
		short flags;
		short type;
		short event;
		short audience;
		short unknown;
		short unknown2;
		char display_string[4]; // ???
		short required_field;
		short excluded_audience;
		char primary_string[4]; // ???
		long primary_string_duration;
		char pural_display_string[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		float sound_delay__announcer_only_;
		short sound_flags;
		short unknown10;
		s_tag_reference sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		s_tag_block sound_permutations2_block;
	};

	struct sound_permutations3_block
	{
		short sound_flags;
		short unknown;
		s_tag_reference english_sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		float probability;
	};

	struct slayer_events_block
	{
		short flags;
		short type;
		short event;
		short audience;
		short unknown;
		short unknown2;
		char display_string[4]; // ???
		short required_field;
		short excluded_audience;
		char primary_string[4]; // ???
		long primary_string_duration;
		char pural_display_string[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		float sound_delay__announcer_only_;
		short sound_flags;
		short unknown10;
		s_tag_reference sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		s_tag_block sound_permutations3_block;
	};

	struct sound_permutations4_block
	{
		short sound_flags;
		short unknown;
		s_tag_reference english_sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		float probability;
	};

	struct ctf_events_block
	{
		short flags;
		short type;
		short event;
		short audience;
		short unknown;
		short unknown2;
		char display_string[4]; // ???
		short required_field;
		short excluded_audience;
		char primary_string[4]; // ???
		long primary_string_duration;
		char pural_display_string[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		float sound_delay__announcer_only_;
		short sound_flags;
		short unknown10;
		s_tag_reference sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		s_tag_block sound_permutations4_block;
	};

	struct sound_permutations5_block
	{
		short sound_flags;
		short unknown;
		s_tag_reference english_sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		float probability;
	};

	struct oddball_events_block
	{
		short flags;
		short type;
		short event;
		short audience;
		short unknown;
		short unknown2;
		char display_string[4]; // ???
		short required_field;
		short excluded_audience;
		char primary_string[4]; // ???
		long primary_string_duration;
		char pural_display_string[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		float sound_delay__announcer_only_;
		short sound_flags;
		short unknown10;
		s_tag_reference sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		s_tag_block sound_permutations5_block;
	};

	struct sound_permutations6_block
	{
		short sound_flags;
		short unknown;
		s_tag_reference english_sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		float probability;
	};

	struct king_of_the_hill_events_block
	{
		short flags;
		short type;
		short event;
		short audience;
		short unknown;
		short unknown2;
		char display_string[4]; // ???
		short required_field;
		short excluded_audience;
		char primary_string[4]; // ???
		long primary_string_duration;
		char pural_display_string[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		float sound_delay__announcer_only_;
		short sound_flags;
		short unknown10;
		s_tag_reference sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		s_tag_block sound_permutations6_block;
	};

	struct sound_permutations7_block
	{
		short sound_flags;
		short unknown;
		s_tag_reference english_sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		float probability;
	};

	struct juggernaut_events_block
	{
		short flags;
		short type;
		short event;
		short audience;
		short unknown;
		short unknown2;
		char display_string[4]; // ???
		short required_field;
		short excluded_audience;
		char primary_string[4]; // ???
		long primary_string_duration;
		char pural_display_string[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		float sound_delay__announcer_only_;
		short sound_flags;
		short unknown10;
		s_tag_reference sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		s_tag_block sound_permutations7_block;
	};

	struct sound_permutations8_block
	{
		short sound_flags;
		short unknown;
		s_tag_reference english_sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		float probability;
	};

	struct territories_events_block
	{
		short flags;
		short type;
		short event;
		short audience;
		short unknown;
		short unknown2;
		char display_string[4]; // ???
		short required_field;
		short excluded_audience;
		char primary_string[4]; // ???
		long primary_string_duration;
		char pural_display_string[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		float sound_delay__announcer_only_;
		short sound_flags;
		short unknown10;
		s_tag_reference sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		s_tag_block sound_permutations8_block;
	};

	struct sound_permutations9_block
	{
		short sound_flags;
		short unknown;
		s_tag_reference english_sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		float probability;
	};

	struct assualt_events_block
	{
		short flags;
		short type;
		short event;
		short audience;
		short unknown;
		short unknown2;
		char display_string[4]; // ???
		short required_field;
		short excluded_audience;
		char primary_string[4]; // ???
		long primary_string_duration;
		char pural_display_string[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		float sound_delay__announcer_only_;
		short sound_flags;
		short unknown10;
		s_tag_reference sound;
		s_tag_reference japanese_sound;
		s_tag_reference german_sound;
		s_tag_reference french_sound;
		s_tag_reference spanish_sound;
		s_tag_reference italian_sound;
		s_tag_reference korean_sound;
		s_tag_reference chinese_sound;
		s_tag_reference portuguese_sound;
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		s_tag_block sound_permutations9_block;
	};

	struct multiplayer_constants_block
	{
		float maximum_random_spawn_bias;
		float teleporter_recharge_time;
		float grenade_danger_weight;
		float grenade_danger_inner_radius;
		float grenade_danger_outer_radius;
		float grenade_danger_lead_time;
		float vehicle_danger_minimum_speed;
		float vehicle_danger_weight;
		float vehicle_danger_radius;
		float vehicle_danger_lead_time;
		float vehicle_nearby_player_distance;
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
		char unknown18[4]; // ???
		char unknown19[4]; // ???
		char unknown20[4]; // ???
		char unknown21[4]; // ???
		char unknown22[4]; // ???
		char unknown23[4]; // ???
		char unknown24[4]; // ???
		char unknown25[4]; // ???
		char unknown26[4]; // ???
		char unknown27[4]; // ???
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
		s_tag_reference hill_shader;
		char unknown38[4]; // ???
		char unknown39[4]; // ???
		char unknown40[4]; // ???
		char unknown41[4]; // ???
		float flag_reset_stop_distance;
		s_tag_reference bomb_explode_effect;
		s_tag_reference bomb_explode_damage_effect;
		s_tag_reference bomb_defuse_effect;
		char bomb_defusal_string[4]; // ???
		char blocked_teleporter_string[4]; // ???
		char unknown42[4]; // ???
		char unknown43[4]; // ???
		char unknown44[4]; // ???
		char unknown45[4]; // ???
		char unknown46[4]; // ???
		char unknown47[4]; // ???
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
	};

	struct state_responses_block
	{
		short flags;
		short unknown;
		short state;
		short unknown2;
		char free_for_all_message[4]; // ???
		char team_message[4]; // ???
		s_tag_reference unknown3;
		char unknown4[8]; // ???
	};

	struct runtime_block
	{
		s_tag_reference flag;
		s_tag_reference ball;
		s_tag_reference unit;
		s_tag_reference flag_shader;
		s_tag_reference hill_shader;
		s_tag_reference head;
		s_tag_reference juggernaut_powerup;
		s_tag_reference bomb;
		s_tag_reference unknown;
		s_tag_reference unknown2;
		s_tag_reference unknown3;
		s_tag_reference unknown4;
		s_tag_reference unknown5;
		s_tag_block weapons_block;
		s_tag_block vehicles_block;
		s_tag_block grenades_block;
		s_tag_block powerups_block;
		s_tag_reference in_game_text;
		s_tag_block sounds_block;
		s_tag_block general_events_block;
		s_tag_block flavor_events_block;
		s_tag_block slayer_events_block;
		s_tag_block ctf_events_block;
		s_tag_block oddball_events_block;
		char null_block[4]; // ???
		char null_block2[4]; // ???
		s_tag_block king_of_the_hill_events_block;
		char null_block3[4]; // ???
		char null_block4[4]; // ???
		s_tag_block juggernaut_events_block;
		s_tag_block territories_events_block;
		s_tag_block assualt_events_block;
		char null_block5[4]; // ???
		char null_block6[4]; // ???
		char null_block7[4]; // ???
		char null_block8[4]; // ???
		char null_block9[4]; // ???
		char null_block10[4]; // ???
		char null_block11[4]; // ???
		char null_block12[4]; // ???
		s_tag_reference default_item_collection_1;
		s_tag_reference default_item_collection_2;
		long default_frag_grenade_count;
		long default_plasma_grenade_count;
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
		float upper_height;
		float lower_height;
		char unknown16[4]; // ???
		char unknown17[4]; // ???
		char unknown18[4]; // ???
		char unknown19[4]; // ???
		char unknown20[4]; // ???
		char unknown21[4]; // ???
		char unknown22[4]; // ???
		char unknown23[4]; // ???
		char unknown24[4]; // ???
		char unknown25[4]; // ???
		float inner_radius;
		float outer_radius;
		float weight;
		char unknown26[4]; // ???
		char unknown27[4]; // ???
		char unknown28[4]; // ???
		char unknown29[4]; // ???
		float inner_radius2;
		float outer_radius2;
		float weight2;
		char unknown30[4]; // ???
		char unknown31[4]; // ???
		char unknown32[4]; // ???
		char unknown33[4]; // ???
		float vehicle_inner_radius;
		float vehicle_outer_radius;
		float vehicle_weight;
		char unknown34[4]; // ???
		char unknown35[4]; // ???
		char unknown36[4]; // ???
		char unknown37[4]; // ???
		float inner_radius3;
		float outer_radius3;
		float weight3;
		char unknown38[4]; // ???
		char unknown39[4]; // ???
		char unknown40[4]; // ???
		char unknown41[4]; // ???
		float inner_radius4;
		float outer_radius4;
		float weight4;
		char unknown42[4]; // ???
		char unknown43[4]; // ???
		char unknown44[4]; // ???
		char unknown45[4]; // ???
		float inner_radius5;
		float outer_radius5;
		float weight5;
		char unknown46[4]; // ???
		char unknown47[4]; // ???
		char unknown48[4]; // ???
		char unknown49[4]; // ???
		float inner_radius6;
		float outer_radius6;
		float weight6;
		char unknown50[4]; // ???
		char unknown51[4]; // ???
		char unknown52[4]; // ???
		char unknown53[4]; // ???
		float inner_radius7;
		float outer_radius7;
		float weight7;
		char unknown54[4]; // ???
		char unknown55[4]; // ???
		char unknown56[4]; // ???
		char unknown57[4]; // ???
		float inner_radius8;
		float outer_radius8;
		float weight8;
		char unknown58[4]; // ???
		char unknown59[4]; // ???
		char unknown60[4]; // ???
		char unknown61[4]; // ???
		float inner_radius9;
		float outer_radius9;
		float weight9;
		char unknown62[4]; // ???
		char unknown63[4]; // ???
		char unknown64[4]; // ???
		char unknown65[4]; // ???
		float inner_radius10;
		float outer_radius10;
		float weight10;
		char unknown66[4]; // ???
		char unknown67[4]; // ???
		char unknown68[4]; // ???
		char unknown69[4]; // ???
		float inner_radius11;
		float outer_radius11;
		float weight11;
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
		char unknown127[4]; // ???
		char unknown128[4]; // ???
		char unknown129[4]; // ???
		char unknown130[4]; // ???
		char unknown131[4]; // ???
		char unknown132[4]; // ???
		char unknown133[4]; // ???
		char unknown134[4]; // ???
		char unknown135[4]; // ???
		char unknown136[4]; // ???
		char unknown137[4]; // ???
		char unknown138[4]; // ???
		char unknown139[4]; // ???
		char unknown140[4]; // ???
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
		char unknown176[4]; // ???
		char unknown177[4]; // ???
		char unknown178[4]; // ???
		char unknown179[4]; // ???
		char unknown180[4]; // ???
		char unknown181[4]; // ???
		char unknown182[4]; // ???
		char unknown183[4]; // ???
		char unknown184[4]; // ???
		char unknown185[4]; // ???
		char unknown186[4]; // ???
		char unknown187[4]; // ???
		char unknown188[4]; // ???
		char unknown189[4]; // ???
		char unknown190[4]; // ???
		char unknown191[4]; // ???
		char unknown192[4]; // ???
		char unknown193[4]; // ???
		char unknown194[4]; // ???
		char unknown195[4]; // ???
		char unknown196[4]; // ???
		char unknown197[4]; // ???
		char unknown198[4]; // ???
		char unknown199[4]; // ???
		char unknown200[4]; // ???
		char unknown201[4]; // ???
		char unknown202[4]; // ???
		char unknown203[4]; // ???
		char unknown204[4]; // ???
		char unknown205[4]; // ???
		char unknown206[4]; // ???
		char unknown207[4]; // ???
		char unknown208[4]; // ???
		char unknown209[4]; // ???
		char unknown210[4]; // ???
		char unknown211[4]; // ???
		char unknown212[4]; // ???
		char unknown213[4]; // ???
		char unknown214[4]; // ???
		char unknown215[4]; // ???
		char unknown216[4]; // ???
		char unknown217[4]; // ???
		char unknown218[4]; // ???
		char unknown219[4]; // ???
		char unknown220[4]; // ???
		char unknown221[4]; // ???
		char unknown222[4]; // ???
		char unknown223[4]; // ???
		char unknown224[4]; // ???
		char unknown225[4]; // ???
		s_tag_block multiplayer_constants_block;
		s_tag_block state_responses_block;
		s_tag_reference scoreboard_hud_definition;
		s_tag_reference scoreboard_emblem_shader;
		s_tag_reference scoreboard_emblem_bitmap;
		s_tag_reference scoreboard_dead_emblem_shader;
		s_tag_reference scoreboard_dead_emblem_bitmap;
	};

	struct group
	{
		s_tag_block universal_block;
		s_tag_block runtime_block;
	};
}
