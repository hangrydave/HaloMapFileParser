#pragma once

#include "../tag_layouts.h"

namespace coll_tag
{
	struct materials_block
	{
		char name[999]; // ???
	};

	struct bsp_3d_nodes_block
	{
		short plane;
		char front_child_lower[1]; // ???
		char front_child_mid[1]; // ???
		char front_child_upper[1]; // ???
		char back_child_lower[1]; // ???
		char back_child_mid[1]; // ???
		char back_child_upper[1]; // ???
	};

	struct planes_block
	{
		float plane_i;
		float plane_j;
		float plane_k;
		float plane_d;
	};

	struct leaves_block
	{
		char flags[1]; // ???
		char bsp_2d_reference_count[1]; // ???
		short first_bsp_2d_reference;
	};

	struct bsp_2d_references_block
	{
		short plane;
		short bsp_2d_node;
	};

	struct bsp_2d_nodes_block
	{
		float plane_i;
		float plane_j;
		float plane_d;
		short left_child;
		short right_child;
	};

	struct surfaces_block
	{
		short plane;
		short first_edge;
		char flags[1]; // ???
		char breakable_surface[1]; // ???
		short material;
	};

	struct edges_block
	{
		short start_vertex;
		short end_vertex;
		short forward_edge;
		short reverse_edge;
		short left_surface;
		short right_surface;
	};

	struct vertices_block
	{
		float point_x;
		float point_y;
		float point_z;
		short first_edge;
		short unknown;
	};

	struct bsps_block
	{
		short node_index;
		short unknown;
		s_tag_block bsp_3d_nodes_block;
		s_tag_block planes_block;
		s_tag_block leaves_block;
		s_tag_block bsp_2d_references_block;
		s_tag_block bsp_2d_nodes_block;
		s_tag_block surfaces_block;
		s_tag_block edges_block;
		s_tag_block vertices_block;
	};

	struct bsp_physics_block
	{
		char runtime_code_pointer[4]; // ???
		short size;
		short count;
		char user_data[4]; // ???
		char unknown[4]; // ???
		s_vector3 center;
		float w_center;
		s_vector3 half_extent;
		float w_half_extent;
		s_tag_reference runtime_model_tag;
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char runtime_code_pointer2[4]; // ???
		short size2;
		short count2;
		char user_data2[4]; // ???
		char unknown5[4]; // ???
		char runtime_code_pointer3[4]; // ???
		short size3;
		short count3;
		char user_data3[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		s_data_reference mopp_code_data;
		char unknown8[8]; // ???
	};

	struct permutations_block
	{
		char name[4]; // ???
		s_tag_block bsps_block;
		s_tag_block bsp_physics_block;
	};

	struct regions_block
	{
		char name[4]; // ???
		s_tag_block permutations_block;
	};

	struct pathfinding_spheres_block
	{
		short node;
		short flags;
		float center_x;
		float center_y;
		float center_z;
		float radius;
	};

	struct nodes_block
	{
		char name[4]; // ???
		short unknown;
		short parent_node;
		short next_sibling_node;
		short first_child_node;
	};

	struct group
	{
		char import_info_block[4]; // ???
		char import_info_block2[4]; // ???
		char errors_block[4]; // ???
		char errors_block2[4]; // ???
		char flags[4]; // ???
		s_tag_block materials_block;
		s_tag_block regions_block;
		s_tag_block pathfinding_spheres_block;
		s_tag_block nodes_block;
	};
}
