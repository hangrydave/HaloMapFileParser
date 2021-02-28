#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace decr_tag
{
	struct shaders_block
	{
		s_tag_reference shader;
	};

	struct permutations_block
	{
		char name[4]; // ???
		short shader_index;
		char flags[1]; // ???
		char fade_distance;
		short index;
		short distribution_weight;
		float scale;
		float ___to;
		char tint_1_a[1]; // ???
		char tint_1_r[1]; // ???
		char tint_1_g[1]; // ???
		char tint_1_b[1]; // ???
		char tint_2_a[1]; // ???
		char tint_2_r[1]; // ???
		char tint_2_g[1]; // ???
		char tint_2_b[1]; // ???
		float base_map_tint_percentage;
		float lightmap_tint_percentage;
		float wind_scale;
	};

	struct classes_block
	{
		char name[4]; // ???
		char type[4]; // ???
		float scale;
		s_tag_block permutations_block;
	};

	struct models_block
	{
		char model_name[4]; // ???
		short index_start;
		short index_count;
	};

	struct raw_vertices_block
	{
		float x;
		float y;
		float z;
		char normal_i[4]; // ???
		char normal_j[4]; // ???
		char normal_k[4]; // ???
		char tangent_i[4]; // ???
		char tangent_j[4]; // ???
		char tangent_k[4]; // ???
		char binormal_i[4]; // ???
		char binormal_j[4]; // ???
		char binormal_k[4]; // ???
		float u;
		float v;
	};

	struct indices_block
	{
		short index;
	};

	struct cached_data_block
	{
		char vertex_buffer[999]; // ???
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

	struct group
	{
		s_tag_block shaders_block;
		float lighting_min_scale;
		float lighting_max_scale;
		s_tag_block classes_block;
		s_tag_block models_block;
		s_tag_block raw_vertices_block;
		s_tag_block indices_block;
		s_tag_block cached_data_block;
		long resource_block_offset;
		char resource_block_size[4]; // ???
		char section_data_size[4]; // ???
		char resource_data_size[4]; // ???
		s_tag_block resources_block;
		s_tag_reference owner_tag;
		short owner_tag_section_offset;
		short unknown9;
		long unknown10;
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
	};
}
