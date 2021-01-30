#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace dc_s_tag
{
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

	struct placements_block
	{
		long internal_data_1;
		long compressed_position;
		char tint_color[4]; // ???
		char lightmap_color[4]; // ???
		long compressed_light_direction;
		long compressed_light_2_direction;
	};

	struct decal_vertices_block
	{
		float position_x;
		float position_y;
		float position_z;
		float texcoord_0_x;
		float texcoord_0_y;
		float texcoord_1_x;
		float texcoord_1_y;
		char color[4]; // ???
	};

	struct decal_indices_block
	{
		short index;
	};

	struct sprite_vertices_block
	{
		float position_x;
		float position_y;
		float position_z;
		float offset_i;
		float offset_j;
		float offset_k;
		float axis_i;
		float axis_j;
		float axis_k;
		float texcoord_x;
		float texcoord_y;
		char color[4]; // ???
	};

	struct sprite_indices_block
	{
		short index;
	};

	struct cache_block_data_block
	{
		s_tag_block placements_block;
		s_tag_block decal_vertices_block;
		s_tag_block decal_indices_block;
		char decal_vertex_buffer[4]; // ???
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		s_tag_block sprite_vertices_block;
		s_tag_block sprite_indices_block;
		char sprite_vertex_buffer[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct cache_blocks_block
	{
		long resource_block_offset;
		char resource_block_size[4]; // ???
		char section_data_size[4]; // ???
		char resource_data_size[4]; // ???
		s_tag_block resources_block;
		s_tag_reference owner_tag;
		short owner_tag_section_offset;
		short unknown;
		long unknown2;
		s_tag_block cache_block_data_block;
		char unknown3[4]; // ???
		char unknown4[4]; // ???
	};

	struct groups_block
	{
		char decorator_set_index;
		char decorator_type;
		char shader_index;
		char compressed_radius;
		short cluster;
		short cache_block_index;
		short decorator_start_index;
		short decorator_count;
		short vertex_start_offset;
		short vertex_count;
		short index_start_offset;
		short index_count;
		long compressed_bounding_center;
	};

	struct cells_block
	{
		short child_index;
		short child_index2;
		short child_index3;
		short child_index4;
		short child_index5;
		short child_index6;
		short child_index7;
		short child_index8;
		short cache_block_index;
		short group_count;
		long group_start_index;
	};

	struct decals_block
	{
		char decorator_set_index;
		char decorator_class;
		char decorator_permutation;
		char sprite_index;
		float position_x;
		float position_y;
		float position_z;
		float left_i;
		float left_j;
		float left_k;
		float up_i;
		float up_j;
		float up_k;
		float extents_i;
		float extents_j;
		float extents_k;
		float previous_position_x;
		float previous_position_y;
		float previous_position_z;
	};

	struct decorator_block
	{
		float grid_origin_x;
		float grid_origin_y;
		float grid_origin_z;
		long cell_count_per_dimension;
		s_tag_block cache_blocks_block;
		s_tag_block groups_block;
		s_tag_block cells_block;
		s_tag_block decals_block;
	};

	struct decorator_palette_block
	{
		s_tag_reference decorator_set;
	};

	struct group
	{
		s_tag_block decorator_block;
		s_tag_block decorator_palette_block;
	};
}
