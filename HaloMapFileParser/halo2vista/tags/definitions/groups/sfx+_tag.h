#pragma once

#include "../tag_layouts.h"

namespace sfx__tag
{
	struct filter_block
	{
		char filter_type[4]; // ???
		long filter_width;
		char scale_bounds[8]; // ???
		char random_base_variance[8]; // ???
		char scale_bounds2[8]; // ???
		char random_base_variance2[8]; // ???
		char scale_bounds3[8]; // ???
		char random_base_variance3[8]; // ???
		char scale_bounds4[8]; // ???
		char random_base_variance4[8]; // ???
	};

	struct pitch_lfo_block
	{
		char scale_bounds[8]; // ???
		char random_base_and_variance[8]; // ???
		char scale_bounds2[8]; // ???
		char random_base_and_variance2[8]; // ???
		char scale_bounds3[8]; // ???
		char random_base_and_variance3[8]; // ???
	};

	struct filter_lfo_block
	{
		char scale_bounds[8]; // ???
		char random_base_and_variance[8]; // ???
		char scale_bounds2[8]; // ???
		char random_base_and_variance2[8]; // ???
		char scale_bounds3[8]; // ???
		char random_base_and_variance3[8]; // ???
		char scale_bounds4[8]; // ???
		char random_base_and_variance4[8]; // ???
	};

	struct components_block
	{
		s_tag_reference sound;
		float gain;
		char flags[4]; // ???
	};

	struct unknown7_block
	{
		char unknown[4]; // ???
		s_data_reference unknown2;
		float unknown3;
	};

	struct unknown9_block
	{
		float unknown;
	};

	struct template_override_descriptors_block
	{
		char override_descriptor;
	};

	struct unknown6_block
	{
		s_tag_block unknown7_block;
		s_tag_block unknown9_block;
		s_tag_block template_override_descriptors_block;
		char unknown[25]; // ???
	};

	struct unknown13_block
	{
		char unknown[4]; // ???
		s_data_reference unknown2;
		float unknown3;
	};

	struct unknown5_block
	{
		s_tag_block unknown6_block;
		s_tag_block unknown13_block;
		char unknown[17]; // ???
	};

	struct sound_effect_block
	{
		s_tag_reference template_;
		s_tag_block components_block;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		s_tag_block unknown5_block;
	};

	struct sound_effects_block
	{
		char name[4]; // ???
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char flags[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		s_tag_block filter_block;
		s_tag_block pitch_lfo_block;
		s_tag_block filter_lfo_block;
		s_tag_block sound_effect_block;
	};

	struct group
	{
		s_tag_block sound_effects_block;
	};
}
