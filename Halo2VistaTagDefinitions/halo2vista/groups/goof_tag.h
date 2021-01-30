#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace goof_tag
{
	struct options_block
	{
		s_tag_reference value_pairs;
	};

	struct game_engine_settings_block
	{
		char setting_category[4]; // ???
		char unknown[4]; // ???
		s_tag_block options_block;
		char unknown2[4]; // ???
		char unknown3[4]; // ???
	};

	struct settings_block
	{
		char setting_catergory[4]; // ???
		long value;
	};

	struct default_variants_block
	{
		char variant_name[4]; // ???
		short variant_type;
		short unknown;
		s_tag_block settings_block;
		short description_index;
		short unknown2;
	};

	struct create_new_slayer_variant_block
	{
		char setting_catergory[4]; // ???
		long value;
	};

	struct create_new_king_of_the_hill_variant_block
	{
		char setting_catergory[4]; // ???
		long value;
	};

	struct create_new_unknown_variant_block
	{
		char setting_catergory[4]; // ???
		long value;
	};

	struct create_new_oddball_variant_block
	{
		char setting_catergory[4]; // ???
		long value;
	};

	struct create_new_juggernaut_variant_block
	{
		char setting_catergory[4]; // ???
		long value;
	};

	struct create_new_unknown_variant2_block
	{
		char setting_catergory[4]; // ???
		long value;
	};

	struct create_new_capture_the_flag_variant_block
	{
		char setting_catergory[4]; // ???
		long value;
	};

	struct create_new_assault_variant_block
	{
		char setting_catergory[4]; // ???
		long value;
	};

	struct create_new_territories_variant_block
	{
		char setting_catergory[4]; // ???
		long value;
	};

	struct group
	{
		s_tag_reference unknown;
		s_tag_reference unknown2;
		s_tag_reference unknown3;
		s_tag_block game_engine_settings_block;
		s_tag_reference default_variant_strings;
		s_tag_block default_variants_block;
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		s_tag_block create_new_slayer_variant_block;
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		s_tag_block create_new_king_of_the_hill_variant_block;
		char unknown15[4]; // ???
		char unknown16[4]; // ???
		char unknown17[4]; // ???
		s_tag_block create_new_unknown_variant_block;
		char unknown19[4]; // ???
		char unknown20[4]; // ???
		char unknown21[4]; // ???
		s_tag_block create_new_oddball_variant_block;
		char unknown23[4]; // ???
		char unknown24[4]; // ???
		char unknown25[4]; // ???
		s_tag_block create_new_juggernaut_variant_block;
		char unknown27[4]; // ???
		char unknown28[4]; // ???
		char unknown29[4]; // ???
		s_tag_block create_new_unknown_variant2_block;
		char unknown31[4]; // ???
		char unknown32[4]; // ???
		char unknown33[4]; // ???
		s_tag_block create_new_capture_the_flag_variant_block;
		char unknown35[4]; // ???
		char unknown36[4]; // ???
		char unknown37[4]; // ???
		s_tag_block create_new_assault_variant_block;
		char unknown39[4]; // ???
		char unknown40[4]; // ???
		char unknown41[4]; // ???
		s_tag_block create_new_territories_variant_block;
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
	};
}
