#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace adlg_tag
{
	struct unknown_block
	{
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
	};

	struct unknown3_block
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
		char unknown18[4]; // ???
		char unknown19[4]; // ???
		char unknown20[4]; // ???
		char unknown21[4]; // ???
		char unknown22[4]; // ???
		char unknown23[4]; // ???
		char unknown24[4]; // ???
	};

	struct death_taunting_dialog_block
	{
		char situation[4]; // ???
		char root_situation[4]; // ???
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		float unknown6;
		float unknown7;
		float unknown8;
		float unknown9;
		float unknown10;
		float unknown11;
		float unknown12;
		float unknown13;
		float unknown14;
		char unknown15[4]; // ???
		float unknown16;
		float unknown17;
		char spoken_dialog[4]; // ???
		s_tag_block unknown_block;
		s_tag_block unknown3_block;
	};

	struct killing_cautious_dialog_block
	{
		short dialogue_type;
		short vocalization_index;
		char vocalization_name[4]; // ???
		short speaker_type;
		short flags;
		short listener_target;
		short unknown;
		short unknown2;
		short unknown3;
		short hostility;
		short damage_type;
		short danger_level;
		short attitude;
		short unknown4;
		short unknown5;
		short subject_actor_type;
		short cause_actor_type;
		short cause_type;
		short subject_type;
		char cause_ai_type_name[4]; // ???
		short spacial_relationship;
		short unknown6;
		char subject_ai_type_name[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		long conditions;
	};

	struct unknown10_block
	{
		char unknown[999]; // ???
	};

	struct unknown12_block
	{
		long unknown;
	};

	struct group
	{
		s_tag_block death_taunting_dialog_block;
		s_tag_block killing_cautious_dialog_block;
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		s_tag_block unknown10_block;
		s_tag_block unknown12_block;
	};
}
