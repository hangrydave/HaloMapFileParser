#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace foot_tag
{
	struct old_materials_block
	{
		s_tag_reference effect;
		s_tag_reference sound;
		char material_name[4]; // ???
		short global_material_index;
		char sweetener_mode;
		char unknown;
	};

	struct sounds_block
	{
		s_tag_reference tag;
		s_tag_reference secondary_tag;
		char material_name[4]; // ???
		short global_material_index;
		char sweetener_mode;
		char unknown;
	};

	struct effects2_block
	{
		s_tag_reference tag;
		s_tag_reference secondary_tag;
		char material_name[4]; // ???
		short global_material_index;
		char sweetener_mode;
		char unknown;
	};

	struct effects_block
	{
		s_tag_block old_materials_block;
		s_tag_block sounds_block;
		s_tag_block effects2_block;
	};

	struct group
	{
		s_tag_block effects_block;
	};
}
