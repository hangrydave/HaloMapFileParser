#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace ugh__tag
{
	struct playback_parameters_block
	{
		float minimum_distance;
		float maximum_distance;
		float skip_fraction;
		float runtime_bend_per_second;
		float gain_base;
		float gain_variance;
		char random_pitch_bounds_min[4]; // ???
		char inner_cone_angle[4]; // ???
		char outer_cone_angle[4]; // ???
		float outer_cone_gain;
		char flags[4]; // ???
		float azimuth;
		float positional_gain;
		float first_person_gain;
	};

	struct scales_block
	{
		char gain_modifier[8]; // ???
		char pitch_modifier[4]; // ???
		char skip_fraction_modifier[4]; // ???
	};

	struct import_names_block
	{
		char name[999]; // ???
	};

	struct pitch_range_parameters_block
	{
		short natural_pitch;
		char bend_bounds[4]; // ???
		char max_gain_pitch_bounds[4]; // ???
	};

	struct pitch_ranges_block
	{
		short import_name_index;
		short pitch_range_parameter_index;
		short encoded_permutation_data_index;
		short encoded_runtime_permutation_flag_index;
		short first_permutation;
		short permutation_count;
	};

	struct permutations_block
	{
		short import_name_index;
		short encoded_skip_fraction;
		char gain;
		char permutation_info_index;
		short language_neutral_time;
		char sample_size[4]; // ???
		short first_chunk;
		short chunk_count;
	};

	struct filter_block
	{
		char filter_type[4]; // ???
		long filter_width;
		char scale_bounds[8]; // ???
		char random_base_and_variance[8]; // ???
		char scale_bounds2[8]; // ???
		char random_base_and_variance2[8]; // ???
		char scale_bounds3[8]; // ???
		char random_base_and_variance3[8]; // ???
		char scale_bounds4[8]; // ???
		char random_base_and_variance4[8]; // ???
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

	struct unknown13_block
	{
		char unknown[4]; // ???
		s_data_reference unknown2;
		float unknown3;
	};

	struct unknown15_block
	{
		float unknown;
	};

	struct unknown17_block
	{
		char unknown[999]; // ???
	};

	struct unknown12_block
	{
		s_tag_block unknown13_block;
		s_tag_block unknown15_block;
		s_tag_block unknown17_block;
		char unknown[25]; // ???
	};

	struct unknown20_block
	{
		char unknown[4]; // ???
		s_data_reference unknown2;
		float unknown3;
	};

	struct unknown11_block
	{
		s_tag_block unknown12_block;
		s_tag_block unknown20_block;
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
		s_tag_block unknown11_block;
	};

	struct custom_playbacks_block
	{
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

	struct runtime_permutation_flags_block
	{
		char unknown;
	};

	struct permutation_chunks_block
	{
		char file_offset[4]; // ???
		char flags[2]; // ???
		char size[2]; // ???
		long runtime_index;
	};

	struct rules_block
	{
		short pitch_range_index;
		short maximum_playing_count;
		float suppression_time;
		long unknown;
		long unknown2;
	};

	struct runtime_timers_block
	{
		long unknown;
	};

	struct promotions_block
	{
		s_tag_block rules_block;
		s_tag_block runtime_timers_block;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
	};

	struct sound_dialogue_info_block
	{
		long mouth_data_offset;
		long mouth_data_length;
		long lipsync_data_offset;
		long lipsync_data_length;
	};

	struct encoded_permutation_section_block
	{
		s_data_reference encoded_data;
		s_tag_block sound_dialogue_info_block;
	};

	struct resources_block
	{
		char type;
		char unknown;
		short unknown2;
		short primary_locator;
		short secondary_locator;
		char resource_data_size[4]; // ???
		char resource_data_offset[4]; // ???
	};

	struct extra_info_block
	{
		s_tag_block encoded_permutation_section_block;
		long resource_block_offset;
		char resource_block_size[4]; // ???
		char section_data_size[4]; // ???
		char resource_data_size[4]; // ???
		s_tag_block resources_block;
		s_tag_reference owner_tag;
		short owner_tag_section_offset;
		short unknown;
		long unknown2;
	};

	struct group
	{
		s_tag_block playback_parameters_block;
		s_tag_block scales_block;
		s_tag_block import_names_block;
		s_tag_block pitch_range_parameters_block;
		s_tag_block pitch_ranges_block;
		s_tag_block permutations_block;
		s_tag_block custom_playbacks_block;
		s_tag_block runtime_permutation_flags_block;
		s_tag_block permutation_chunks_block;
		s_tag_block promotions_block;
		s_tag_block extra_info_block;
	};
}
