#pragma once

#include "../tag_layouts.h"

namespace _fx__tag
{
	struct additional_sound_inputs_block
	{
		char dsp_effect[4]; // ???
		s_data_reference low_frequency_sound_function;
		float time_period;
		float unknown;
	};

	struct components_block
	{
		char value_type[4]; // ???
		float default_value;
		float minimum_value;
		float maximum_value;
	};

	struct platform_effect_template_block
	{
		char input_dsp_effect_name[4]; // ???
		long unknown;
		long unknown2;
		short unknown3;
		short unknown4;
		s_tag_block components_block;
	};

	struct platform_effect_templates_block
	{
		s_tag_block platform_effect_template_block;
		char input_dsp_effect_name[9]; // ???
	};

	struct group
	{
		char template_collection_block[4]; // ???
		char template_collection_block2[4]; // ???
		long input_effect_name;
		s_tag_block additional_sound_inputs_block;
		s_tag_block platform_effect_templates_block;
	};
}
