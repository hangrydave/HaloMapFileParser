#pragma once

#include "../tag_layouts.h"

namespace mode_tag
{
	struct compression_info_block
	{
		float position_bounds_x_min;
		float position_bounds_x_max;
		float position_bounds_y_min;
		float position_bounds_y_max;
		float position_bounds_z_min;
		float position_bounds_z_max;
		float texcoord_bounds_x_min;
		float texcoord_bounds_x_max;
		float texcoord_bounds_y_min;
		float texcoord_bounds_y_max;
		float secondary_texcoord_bounds_x_min;
		float secondary_texcoord_bounds_x_max;
		float secondary_texcoord_bounds_y_min;
		float secondary_texcoord_bounds_y_max;
	};

	struct permutations_block
	{
		char name[4]; // ???
		short l1_section_index__super_low_;
		short l2_section_index__low_;
		short l3_section_index__medium_;
		short l4_section_index__high_;
		short l5_section_index__super_high_;
		short l6_section_index__hollywood_;
	};

	struct regions_block
	{
		char name[4]; // ???
		short old_node_map_offset;
		short old_node_map_size;
		s_tag_block permutations_block;
	};

	struct compression_info2_block
	{
		float position_bounds_x_min;
		float position_bounds_x_max;
		float position_bounds_y_min;
		float position_bounds_y_max;
		float position_bounds_z_min;
		float position_bounds_z_max;
		float texcoord_bounds_x_min;
		float texcoord_bounds_x_max;
		float texcoord_bounds_y_min;
		float texcoord_bounds_y_max;
		float secondary_texcoord_bounds_x_min;
		float secondary_texcoord_bounds_x_max;
		float secondary_texcoord_bounds_y_min;
		float secondary_texcoord_bounds_y_max;
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

	struct sections_block
	{
		short global_geometry_classification;
		short unknown;
		char total_vertex_count[2]; // ???
		char total_triangle_count[2]; // ???
		char total_part_count[2]; // ???
		char shadow_casting_triangle_count[2]; // ???
		char shadow_casting_part_count[2]; // ???
		char opaque_point_count[2]; // ???
		char opaque_vertex_count[2]; // ???
		char opaque_part_count[2]; // ???
		char opaque_max_nodes_vertex[2]; // ???
		char shadow_casting_rigid_triangle_count[2]; // ???
		short geometry_classification;
		short geometry_compression_flags;
		s_tag_block compression_info2_block;
		char hardware_node_count[1]; // ???
		char node_map_size[1]; // ???
		char software_plane_sount[2]; // ???
		char total_subpart_count[2]; // ???
		short section_lighting_flags;
		short rigid_node;
		short flags;
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		long resource_block_offset;
		char resource_block_size[4]; // ???
		char section_data_size[4]; // ???
		char resource_data_size[4]; // ???
		s_tag_block resources_block;
		s_tag_reference owner_tag;
		short owner_tag_section_offset;
		short unknown4;
		long unknown5;
	};

	struct invalid_section_pair_bits_block
	{
		long bits;
	};

	struct compound_nodes_block
	{
		char node_index;
		char node_index2;
		char node_index3;
		char node_index4;
		float node_weight;
		float node_weight2;
		float node_weight3;
	};

	struct section_groups_block
	{
		short detail_levels;
		short unknown;
		s_tag_block compound_nodes_block;
	};

	struct nodes_block
	{
		char name[4]; // ???
		short parent_node;
		short first_child_node;
		short next_sibling_node;
		short import_node_index;
		float default_translation_x;
		float default_translation_y;
		float default_translation_z;
		float default_rotation_i;
		float default_rotation_j;
		float default_rotation_k;
		float default_rotation_w;
		float default_scale;
		float inverse_forward_i;
		float inverse_forward_j;
		float inverse_forward_k;
		float inverse_left_i;
		float inverse_left_j;
		float inverse_left_k;
		float inverse_up_i;
		float inverse_up_j;
		float inverse_up_k;
		float inverse_position_x;
		float inverse_position_y;
		float inverse_position_z;
		float distance_from_parent;
	};

	struct markers_block
	{
		char region_index;
		char permutation_index;
		char node_index;
		char unknown;
		float translation_x;
		float translation_y;
		float translation_z;
		float rotation_i;
		float rotation_j;
		float rotation_k;
		float rotation_w;
		float scale;
	};

	struct marker_groups_block
	{
		char name[4]; // ???
		s_tag_block markers_block;
	};

	struct properties_block
	{
		short type;
		short int_value;
		float real_value;
	};

	struct materials_block
	{
		s_tag_reference old_shader;
		s_tag_reference shader;
		s_tag_block properties_block;
		char unknown[4]; // ???
		char breakable_surface_index;
		char unknown2;
		char unknown3;
		char unknown4;
	};

	struct section_info_block
	{
		long section_index;
		char pca_data_offset[4]; // ???
	};

	struct lod_info_block
	{
		char cluster_offset[4]; // ???
		s_tag_block section_info_block;
	};

	struct cluster_basis_block
	{
		float basis_data;
	};

	struct resources2_block
	{
		char type;
		char unknown;
		short unknown2;
		short primary_locator;
		short secondary_locator;
		char resource_data_size[4]; // ???
		char resource_data_offset[4]; // ???
	};

	struct prt_info_block
	{
		char sh_order[2]; // ???
		char number_of_clusters[2]; // ???
		char pca_vectors_per_cluster[2]; // ???
		char number_of_rays[2]; // ???
		char number_of_bounces[2]; // ???
		char material_index_for_sbsfc_scattering[2]; // ???
		float length_scale;
		char number_of_lods_in_model[2]; // ???
		char unknown[2]; // ???
		s_tag_block lod_info_block;
		s_tag_block cluster_basis_block;
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		long resource_block_offset;
		char resource_block_size[4]; // ???
		char section_data_size[4]; // ???
		char resource_data_size[4]; // ???
		s_tag_block resources2_block;
		s_tag_reference owner_tag;
		short owner_tag_section_offset;
		short unknown6;
		long unknown7;
	};

	struct collision_leaves_block
	{
		short cluster;
		short surface_reference_count;
		long first_surface_reference_index;
	};

	struct surface_references_block
	{
		short strip_index;
		short lightmap_triangle_index;
		long bsp_node_index;
	};

	struct node_render_leaves_block
	{
		s_tag_block collision_leaves_block;
		s_tag_block surface_references_block;
	};

	struct section_render_leaves_block
	{
		s_tag_block node_render_leaves_block;
	};

	struct group
	{
		char name[4]; // ???
		short flags;
		short unknown;
		long model_checksum;
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		s_tag_block compression_info_block;
		s_tag_block regions_block;
		s_tag_block sections_block;
		s_tag_block invalid_section_pair_bits_block;
		s_tag_block section_groups_block;
		char l1_section_index__super_low_;
		char l2_section_index__low_;
		char l3_section_index__medium_;
		char l4_section_index__high_;
		char l5_section_index__super_high_;
		char l6_section_index__hollywood_;
		short unknown13;
		long node_list_checksum;
		s_tag_block nodes_block;
		char unknown15[4]; // ???
		char unknown16[4]; // ???
		s_tag_block marker_groups_block;
		s_tag_block materials_block;
		char unknown21[4]; // ???
		char unknown22[4]; // ???
		float don_t_draw_over_camera_cosine_angle;
		s_tag_block prt_info_block;
		s_tag_block section_render_leaves_block;
	};
}
