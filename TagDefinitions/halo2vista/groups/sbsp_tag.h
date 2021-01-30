#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace sbsp_tag
{
	struct collision_materials_block
	{
		s_tag_reference old_shader;
		short global_material_index;
		short conveyor_surface_index;
		s_tag_reference new_shader;
	};

	struct _3d_nodes_block
	{
		short plane;
		short back_child;
		char flag_padding_unknown[1]; // ???
		short front_child;
		char flag_padding_unknown2[2]; // ???
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
		char breakable_surface_index[1]; // ???
		short material_index;
	};

	struct edges_block
	{
		short start_vertex;
		short end_vertex;
		short forward_edge;
		short backward_edge;
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

	struct collision_bsp_block
	{
		s_tag_block _3d_nodes_block;
		s_tag_block planes_block;
		s_tag_block leaves_block;
		s_tag_block bsp_2d_references_block;
		s_tag_block bsp_2d_nodes_block;
		s_tag_block surfaces_block;
		s_tag_block edges_block;
		s_tag_block vertices_block;
	};

	struct leaves2_block
	{
		short cluster;
		short surface_reference_count;
		long first_surface_refrence_index;
	};

	struct surface_references_block
	{
		short strip_index;
		short lightmap_triangle_index;
		long bsp_node_index;
	};

	struct vertices2_block
	{
		float point_x;
		float point_y;
		float point_z;
	};

	struct cluster_portals_block
	{
		short back_cluster;
		short front_cluster;
		long plane_index;
		float centroid_x;
		float centroid_y;
		float centroid_z;
		float bounding_radius;
		char flags[4]; // ???
		s_tag_block vertices2_block;
	};

	struct fog_planes_block
	{
		short scenario_planar_fog_index;
		short unknown;
		float plane_i;
		float plane_j;
		float plane_k;
		float plane_d;
		short flags;
		short priority;
	};

	struct weather_palette_block
	{
		char name[32];
		s_tag_reference weather_system;
		short unknown;
		short unknown2;
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		s_tag_reference wind;
		s_vector3 wind_direction;
		float wind_magnitude;
		char unknown11[4]; // ???
		char wind_scale_function[32];
	};

	struct planes2_block
	{
		char plane_i[4]; // ???
		char plane_j[4]; // ???
		char plane_k[4]; // ???
		char plane_d[4]; // ???
	};

	struct weather_polyhedra_block
	{
		float bounding_sphere_center_x;
		float bounding_sphere_center_y;
		float bounding_sphere_center_z;
		float bounding_sphere_radius;
		s_tag_block planes2_block;
	};

	struct cells_block
	{
		short unknown;
		short unknown2;
		short unknown3;
		short unknown4;
		long unknown5;
		long unknown6;
		long unknown7;
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
	};

	struct instances_block
	{
		char unknown;
		char unknown2;
		char unknown3;
		char unknown4;
		short unknown5;
	};

	struct counts_block
	{
		short unknown;
	};

	struct z_reference_vectors_block
	{
		float unknown;
		float unknown2;
		float unknown3;
		float unknown4;
	};

	struct detail_objects_block
	{
		s_tag_block cells_block;
		s_tag_block instances_block;
		s_tag_block counts_block;
		s_tag_block z_reference_vectors_block;
		char unknown;
		char unknown2;
		short unknown3;
	};

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

	struct parts_block
	{
		short type;
		short flags;
		short material_index;
		short strip_start_index;
		short strip_length;
		short first_subpart_index;
		short subpart_count;
		char max_nodes_vertex;
		char contributing_compound_node_count;
		float position_x;
		float position_y;
		float position_z;
		char node_index;
		char node_index2;
		char node_index3;
		char node_index4;
		float node_weight;
		float node_weight2;
		float node_weight3;
		float lod_mipmap_magic;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
	};

	struct subparts_block
	{
		short indices_start_index;
		short indices_length;
		short visibility_bounds_index;
		short part_index;
	};

	struct visibility_bounds_block
	{
		float position_x;
		float position_y;
		float position_z;
		float radius;
		char node_0;
		char unknown;
		char unknown2;
		char unknown3;
	};

	struct raw_vertices_block
	{
		float position_x;
		float position_y;
		float position_z;
		long node_index__old_;
		long node_index__old_2;
		long node_index__old_3;
		long node_index__old_4;
		float node_weight;
		float node_weight2;
		float node_weight3;
		float node_weight4;
		long node_index__new_;
		long node_index__new_2;
		long node_index__new_3;
		long node_index__new_4;
		long use_new_node_indices;
		long adjusted_compound_node_index;
		float texcoord_x;
		float texcoord_y;
		float normal_i;
		float normal_j;
		float normal_k;
		float binormal_i;
		float binormal_j;
		float binormal_k;
		float tangent_i;
		float tangent_j;
		float tangent_k;
		float anisotropic_binormal_i;
		float anisotropic_binormal_j;
		float anisotropic_binormal_k;
		float secondary_texcoord_x;
		float secondary_texcoord_y;
		char primary_lightmap_color[4]; // ???
		float primary_lightmap_texcoord_x;
		float primary_lightmap_texcoord_y;
		float primary_lightmap_incident_direction_i;
		float primary_lightmap_incident_direction_j;
		float primary_lightmap_incident_direction_k;
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
	};

	struct strip_indices_block
	{
		short index;
	};

	struct mopp_reorder_table_block
	{
		short index;
	};

	struct vertex_buffers_block
	{
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct cluster_data2_block
	{
		s_tag_block parts_block;
		s_tag_block subparts_block;
		s_tag_block visibility_bounds_block;
		s_tag_block raw_vertices_block;
		s_tag_block strip_indices_block;
		s_data_reference visibility_mopp_codes;
		s_tag_block mopp_reorder_table_block;
		s_tag_block vertex_buffers_block;
		char unknown[65]; // ???
	};

	struct predicted_resources_block
	{
		short type;
		short resource_index;
		s_tag_reference tag_index;
	};

	struct portals_block
	{
		short portal_index;
	};

	struct instanced_geometry_indeces_block
	{
		short instanced_geometry_index;
	};

	struct index_reorder_table_block
	{
		short index;
	};

	struct clusters_block
	{
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
		s_tag_block compression_info_block;
		char hardware_node_count[1]; // ???
		char node_map_size[1]; // ???
		char software_plane_sount[2]; // ???
		char total_subpart_count[2]; // ???
		short section_lighting_flags;
		long resource_block_offset;
		char resource_block_size[4]; // ???
		char section_data_size[4]; // ???
		char resource_data_size[4]; // ???
		s_tag_block resources_block;
		s_tag_reference owner_tag;
		short owner_tag_section_offset;
		short unknown;
		long unknown2;
		s_tag_block cluster_data2_block;
		float bounds_x_min;
		float bounds_x_max;
		float bounds_y_min;
		float bounds_y_max;
		float bounds_z_min;
		float bounds_z_max;
		char scenario_sky_index;
		char media_index;
		char scenario_visible_sky_index;
		char scenario_atmospheric_fog_index;
		char planar_fog_designator;
		char visible_fog_plane_index;
		short background_sound_index;
		short sound_environment_index;
		short weather_index;
		short transition_structure_bsp;
		short unknown3;
		short unknown4;
		short unknown5;
		short flags;
		short unknown6;
		s_tag_block predicted_resources_block;
		s_tag_block portals_block;
		long checksum_from_structure;
		s_tag_block instanced_geometry_indeces_block;
		s_tag_block index_reorder_table_block;
		s_data_reference collision_mopp_codes;
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

	struct sky_owner_cluster_block
	{
		short cluster_owner;
	};

	struct conveyor_surfaces_block
	{
		float u_i;
		float u_j;
		float u_k;
		float v_i;
		float v_j;
		float v_k;
	};

	struct breakable_surfaces_block
	{
		short instanced_geometry_instance;
		short breakable_surface_index;
		float centroid_x;
		float centroid_y;
		float centroid_z;
		float radius;
		long collision_surface_index;
	};

	struct sectors_block
	{
		short pathfinding_sector_flags;
		short hint_index;
		long first_link;
	};

	struct links_block
	{
		short vertex_1;
		short vertex_2;
		short link_flags;
		short hint_index;
		short forward_link;
		short reverse_link;
		short left_sector;
		short right_sector;
	};

	struct refs_block
	{
		long node_ref_or_sector_ref;
	};

	struct bsp_2d_nodes2_block
	{
		float plane_i;
		float plane_j;
		float plane_d;
		short left_child;
		short right_child;
		short unknown;
		short unknown2;
	};

	struct surface_flags_block
	{
		long flags;
	};

	struct vertices3_block
	{
		float point_x;
		float point_y;
		float point_z;
	};

	struct bsps_block
	{
		long bsp_reference;
		long first_sector;
		long last_sector;
		short node_index;
		short unknown;
	};

	struct nodes_block
	{
		short reference_frame_index;
		char projection_axis[1]; // ???
		char projection_sign;
	};

	struct object_refs_block
	{
		short flags;
		short unknown;
		long first_sector;
		long last_sector;
		s_tag_block bsps_block;
		s_tag_block nodes_block;
	};

	struct pathfinding_hints_block
	{
		short hint_type;
		short next_hint_index;
		short hint_data_0;
		short hint_data_1;
		short hint_data_2;
		short hint_data_3;
		short hint_data_4;
		short hint_data_5;
		short hint_data_6;
		short hint_data_7;
	};

	struct instanced_geometry_refs_block
	{
		short pathfinding_object_index;
		short unknown;
	};

	struct point_geometry_block
	{
		float point_x;
		float point_y;
		float point_z;
		short reference_frame;
		short unknown;
	};

	struct ray_geometry_block
	{
		float point_x;
		float point_y;
		float point_z;
		short reference_frame;
		short unknown;
		char vector_i[4]; // ???
		char vector_j[4]; // ???
		char vector_k[4]; // ???
	};

	struct line_segment_geometry_block
	{
		char flags[4]; // ???
		float point_0_x;
		float point_0_y;
		float point_0_z;
		short reference_frame;
		short unknown;
		float point_1_x;
		float point_1_y;
		float point_1_z;
		short reference_frame2;
		short unknown2;
	};

	struct parallelogram_geometry_block
	{
		char flags[4]; // ???
		float point_0_x;
		float point_0_y;
		float point_0_z;
		short reference_frame;
		short unknown;
		float point_1_x;
		float point_1_y;
		float point_1_z;
		short reference_frame2;
		short unknown2;
		float point_2_x;
		float point_2_y;
		float point_2_z;
		short reference_frame3;
		short unknown3;
		float point_3_x;
		float point_3_y;
		float point_3_z;
		short reference_frame4;
		short unknown4;
	};

	struct points_block
	{
		float point_x;
		float point_y;
		float point_z;
		short reference_frame;
		short unknown;
	};

	struct polygon_geometry_block
	{
		char flags[4]; // ???
		s_tag_block points_block;
		char unknown[13]; // ???
	};

	struct jump_hints_block
	{
		short flags;
		short geometry_index;
		short force_jump_height;
		short control_flags;
	};

	struct climb_hints_block
	{
		short flags;
		short geometry_index;
	};

	struct points2_block
	{
		short type;
		short unknown;
		s_vector3 point;
		short reference_frame;
		short unknown2;
		long sector_index;
		char normal[4]; // ???
	};

	struct well_hints_block
	{
		char flags[4]; // ???
		s_tag_block points2_block;
	};

	struct points3_block
	{
		s_vector3 point;
	};

	struct flight_hints_block
	{
		s_tag_block points3_block;
	};

	struct user_placed_hints_block
	{
		s_tag_block point_geometry_block;
		s_tag_block ray_geometry_block;
		s_tag_block line_segment_geometry_block;
		s_tag_block parallelogram_geometry_block;
		s_tag_block polygon_geometry_block;
		s_tag_block jump_hints_block;
		s_tag_block climb_hints_block;
		s_tag_block well_hints_block;
		s_tag_block flight_hints_block;
	};

	struct pathfinding_data_block
	{
		s_tag_block sectors_block;
		s_tag_block links_block;
		s_tag_block refs_block;
		s_tag_block bsp_2d_nodes2_block;
		s_tag_block surface_flags_block;
		s_tag_block vertices3_block;
		s_tag_block object_refs_block;
		s_tag_block pathfinding_hints_block;
		s_tag_block instanced_geometry_refs_block;
		long structure_checksum;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		s_tag_block user_placed_hints_block;
	};

	struct pathfinding_edges_block
	{
		char midpoint;
	};

	struct background_sound_palette_block
	{
		char name[32];
		s_tag_reference background_sound;
		s_tag_reference inside_cluster_sound;
		float cutoff_distance;
		char scale_flags[4]; // ???
		float interior_scale;
		float portal_scale;
		float exterior_scale;
		float interpolation_speed;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		float unknown5;
		char unknown6[4]; // ???
		char unknown7[4]; // ???
	};

	struct sound_environment_palette_block
	{
		char name[32];
		s_tag_reference sound_environment;
		float cutoff_distance;
		float interpolation_speed;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
	};

	struct markers_block
	{
		char name[32];
		float rotation_i;
		float rotation_j;
		float rotation_k;
		float rotation_w;
		float position_x;
		float position_y;
		float position_z;
	};

	struct runtime_decals_block
	{
		float unknown;
		float unknown2;
		float unknown3;
		char unknown4[4]; // ???
	};

	struct environment_object_palette_block
	{
		s_tag_reference definition;
		s_tag_reference model;
		char object_type[8]; // ???
	};

	struct environment_objects_block
	{
		char name[32];
		float rotation_i;
		float rotation_j;
		float rotation_k;
		float rotation_w;
		float translation_x;
		float translation_y;
		float translation_z;
		short palette_index;
		short unknown;
		long unique_id;
		char exported_object_type[4];
		char scenario_object_name[32];
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

	struct parts2_block
	{
		short type;
		short flags;
		short material_index;
		short strip_start_index;
		short strip_length;
		short first_subpart_index;
		short subpart_count;
		char max_nodes_vertex;
		char contributing_compound_node_count;
		float position_x;
		float position_y;
		float position_z;
		char node_index;
		char node_index2;
		char node_index3;
		char node_index4;
		float node_weight;
		float node_weight2;
		float node_weight3;
		float lod_mipmap_magic;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
	};

	struct subparts2_block
	{
		short indices_start_index;
		short indices_length;
		short visibility_bounds_index;
		short part_index;
	};

	struct visibility_bounds2_block
	{
		float position_x;
		float position_y;
		float position_z;
		float radius;
		char node_0;
		char unknown;
		char unknown2;
		char unknown3;
	};

	struct raw_vertices2_block
	{
		float position_x;
		float position_y;
		float position_z;
		long node_index__old_;
		long node_index__old_2;
		long node_index__old_3;
		long node_index__old_4;
		float node_weight;
		float node_weight2;
		float node_weight3;
		float node_weight4;
		long node_index__new_;
		long node_index__new_2;
		long node_index__new_3;
		long node_index__new_4;
		long use_new_node_indices;
		long adjusted_compound_node_index;
		float texcoord_x;
		float texcoord_y;
		float normal_i;
		float normal_j;
		float normal_k;
		float binormal_i;
		float binormal_j;
		float binormal_k;
		float tangent_i;
		float tangent_j;
		float tangent_k;
		float anisotropic_binormal_i;
		float anisotropic_binormal_j;
		float anisotropic_binormal_k;
		float secondary_texcoord_x;
		float secondary_texcoord_y;
		char primary_lightmap_color[4]; // ???
		float primary_lightmap_texcoord_x;
		float primary_lightmap_texcoord_y;
		float primary_lightmap_incident_direction_i;
		float primary_lightmap_incident_direction_j;
		float primary_lightmap_incident_direction_k;
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
	};

	struct strip_indices2_block
	{
		short index;
	};

	struct mopp_reorder_table2_block
	{
		short index;
	};

	struct vertex_buffers2_block
	{
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct render_data_block
	{
		s_tag_block parts2_block;
		s_tag_block subparts2_block;
		s_tag_block visibility_bounds2_block;
		s_tag_block raw_vertices2_block;
		s_tag_block strip_indices2_block;
		s_data_reference visibility_mopp_codes;
		s_tag_block mopp_reorder_table2_block;
		s_tag_block vertex_buffers2_block;
		char unknown[65]; // ???
	};

	struct index_reorder_table2_block
	{
		short index;
	};

	struct bsp_3d_nodes_block
	{
		char unknown[4]; // ???
		char unknown2[4]; // ???
	};

	struct planes3_block
	{
		float plane_i;
		float plane_j;
		float plane_k;
		float plane_d;
	};

	struct leaves3_block
	{
		char flags[1]; // ???
		char bsp_2d_reference_count[1]; // ???
		short first_bsp_2d_reference;
	};

	struct bsp_2d_references2_block
	{
		short plane;
		short bsp_2d_node;
	};

	struct bsp_2d_nodes3_block
	{
		float plane_i;
		float plane_j;
		float plane_d;
		short left_child;
		short right_child;
	};

	struct surfaces2_block
	{
		short plane;
		short first_edge;
		char flags[1]; // ???
		char breakable_surface_index[1]; // ???
		short material_index;
	};

	struct edges2_block
	{
		short start_vertex;
		short end_vertex;
		short forward_edge;
		short backward_edge;
		short left_surface;
		short right_surface;
	};

	struct vertices4_block
	{
		float point_x;
		float point_y;
		float point_z;
		short first_edge;
		short unknown;
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

	struct render_leaves_block
	{
		short cluster;
		short surface_reference_count;
		long first_surface_reference_index;
	};

	struct surface_references2_block
	{
		short strip_index;
		short lightmap_triangle;
		long bsp_node_index;
	};

	struct instanced_geometry_definitions_block
	{
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
		long resource_block_offset;
		char resource_block_size[4]; // ???
		char section_data_size[4]; // ???
		char resource_data_size[4]; // ???
		s_tag_block resources2_block;
		s_tag_reference owner_tag;
		short owner_tag_section_offset;
		short unknown;
		long unknown2;
		s_tag_block render_data_block;
		s_tag_block index_reorder_table2_block;
		long checksum;
		float bounding_sphere_x;
		float bounding_sphere_y;
		float bounding_sphere_z;
		float bounding_sphere_radius;
		s_tag_block bsp_3d_nodes_block;
		s_tag_block planes3_block;
		s_tag_block leaves3_block;
		s_tag_block bsp_2d_references2_block;
		s_tag_block bsp_2d_nodes3_block;
		s_tag_block surfaces2_block;
		s_tag_block edges2_block;
		s_tag_block vertices4_block;
		s_tag_block bsp_physics_block;
		s_tag_block render_leaves_block;
		s_tag_block surface_references2_block;
	};

	struct instanced_geometry_instances_block
	{
		float scale;
		float forward_i;
		float forward_j;
		float forward_k;
		float left_i;
		float left_j;
		float left_k;
		float up_i;
		float up_j;
		float up_k;
		float position_x;
		float position_y;
		float position_z;
		short instance_definition_index;
		short flags;
		long checksum;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char name[4]; // ???
		short pathfinding_policy;
		short lightmapping_policy;
	};

	struct enclosing_portal_designators_block
	{
		short portal_designator;
	};

	struct interior_cluster_indices_block
	{
		short interior_cluster_index;
	};

	struct ambience_sound_clusters_block
	{
		short unknown;
		short unknown2;
		s_tag_block enclosing_portal_designators_block;
		s_tag_block interior_cluster_indices_block;
	};

	struct enclosing_portal_designators2_block
	{
		short portal_designator;
	};

	struct interior_cluster_indices2_block
	{
		short interior_cluster_index;
	};

	struct reverb_sound_clusters_block
	{
		short unknown;
		short unknown2;
		s_tag_block enclosing_portal_designators2_block;
		s_tag_block interior_cluster_indices2_block;
	};

	struct transparent_planes_block
	{
		short section_index;
		short part_index;
		float plane_i;
		float plane_j;
		float plane_k;
		float plane_d;
	};

	struct lines_block
	{
		short type;
		short code;
		short pad_thai;
		short unknown;
		float point_0_x;
		float point_0_y;
		float point_0_z;
		float point_1_x;
		float point_1_y;
		float point_1_z;
	};

	struct fog_plane_indices_block
	{
		long index;
	};

	struct visible_fog_plane_indices_block
	{
		long index;
	};

	struct visible_fog_omission_cluster_indices_block
	{
		long index;
	};

	struct containing_fog_zone_indices_block
	{
		long index;
	};

	struct clusters2_block
	{
		short errors;
		short warnings;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		s_tag_block lines_block;
		s_tag_block fog_plane_indices_block;
		s_tag_block visible_fog_plane_indices_block;
		s_tag_block visible_fog_omission_cluster_indices_block;
		s_tag_block containing_fog_zone_indices_block;
	};

	struct lines2_block
	{
		short type;
		short code;
		short pad_thai;
		short unknown;
		float point_0_x;
		float point_0_y;
		float point_0_z;
		float point_1_x;
		float point_1_y;
		float point_1_z;
	};

	struct intersected_cluster_indices_block
	{
		long index;
	};

	struct infinite_extent_cluster_indices_block
	{
		long index;
	};

	struct fog_planes2_block
	{
		long fog_zone_index;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		long connected_plane_designator;
		s_tag_block lines2_block;
		s_tag_block intersected_cluster_indices_block;
		s_tag_block infinite_extent_cluster_indices_block;
	};

	struct lines3_block
	{
		short type;
		short code;
		short pad_thai;
		short unknown;
		float point_0_x;
		float point_0_y;
		float point_0_z;
		float point_1_x;
		float point_1_y;
		float point_1_z;
	};

	struct immersed_cluster_indices_block
	{
		long index;
	};

	struct bounding_fog_plane_indices_block
	{
		long index;
	};

	struct collision_fog_plane_indices_block
	{
		long index;
	};

	struct fog_zones_block
	{
		long media_index__scenario_fog_plane;
		long base_fog_plane_index;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		s_tag_block lines3_block;
		s_tag_block immersed_cluster_indices_block;
		s_tag_block bounding_fog_plane_indices_block;
		s_tag_block collision_fog_plane_indices_block;
	};

	struct debug_info_block
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
		s_tag_block clusters2_block;
		s_tag_block fog_planes2_block;
		s_tag_block fog_zones_block;
	};

	struct breakable_surface_key_table_block
	{
		short instance_geometry_index;
		short breakable_surface_index;
		long seed_surface_index;
		float x0;
		float x1;
		float y0;
		float y1;
		float z0;
		float z1;
	};

	struct parts3_block
	{
		short type;
		short flags;
		short material_index;
		short strip_start_index;
		short strip_length;
		short first_subpart_index;
		short subpart_count;
		char max_nodes_vertex;
		char contributing_compound_node_count;
		float position_x;
		float position_y;
		float position_z;
		char node_index;
		char node_index2;
		char node_index3;
		char node_index4;
		float node_weight;
		float node_weight2;
		float node_weight3;
		float lod_mipmap_magic;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
	};

	struct subparts3_block
	{
		short indices_start_index;
		short indices_length;
		short visibility_bounds_index;
		short part_index;
	};

	struct visibility_bounds3_block
	{
		float position_x;
		float position_y;
		float position_z;
		float radius;
		char node_0;
		char unknown;
		char unknown2;
		char unknown3;
	};

	struct raw_vertices3_block
	{
		float position_x;
		float position_y;
		float position_z;
		long node_index__old_;
		long node_index__old_2;
		long node_index__old_3;
		long node_index__old_4;
		float node_weight;
		float node_weight2;
		float node_weight3;
		float node_weight4;
		long node_index__new_;
		long node_index__new_2;
		long node_index__new_3;
		long node_index__new_4;
		long use_new_node_indices;
		long adjusted_compound_node_index;
		float texcoord_x;
		float texcoord_y;
		float normal_i;
		float normal_j;
		float normal_k;
		float binormal_i;
		float binormal_j;
		float binormal_k;
		float tangent_i;
		float tangent_j;
		float tangent_k;
		float anisotropic_binormal_i;
		float anisotropic_binormal_j;
		float anisotropic_binormal_k;
		float secondary_texcoord_x;
		float secondary_texcoord_y;
		char primary_lightmap_color[4]; // ???
		float primary_lightmap_texcoord_x;
		float primary_lightmap_texcoord_y;
		float primary_lightmap_incident_direction_i;
		float primary_lightmap_incident_direction_j;
		float primary_lightmap_incident_direction_k;
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
	};

	struct strip_indices3_block
	{
		short index;
	};

	struct mopp_reorder_table3_block
	{
		short index;
	};

	struct vertex_buffers3_block
	{
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct section_block
	{
		s_tag_block parts3_block;
		s_tag_block subparts3_block;
		s_tag_block visibility_bounds3_block;
		s_tag_block raw_vertices3_block;
		s_tag_block strip_indices3_block;
		s_data_reference visibility_mopp_codes;
		s_tag_block mopp_reorder_table3_block;
		s_tag_block vertex_buffers3_block;
		char unknown[65]; // ???
	};

	struct resources3_block
	{
		char type;
		char unknown;
		short unknown2;
		short primary_locator;
		short secondary_locator;
		char resource_data_size[4]; // ???
		char resource_data_offset[4]; // ???
	};

	struct water_definitions_block
	{
		s_tag_reference shader;
		s_tag_block section_block;
		long resource_block_offset;
		char resource_block_size[4]; // ???
		char section_data_size[4]; // ???
		char resource_data_size[4]; // ???
		s_tag_block resources3_block;
		s_tag_reference owner_tag;
		short owner_tag_section_offset;
		short unknown;
		long unknown2;
		char sun_spot_color[12]; // ???
		char reflection_tint[12]; // ???
		char refraction_tint[12]; // ???
		char horizon_color[12]; // ???
		float sun_specular_power;
		float reflection_bump_scale;
		float refraction_bump_scale;
		float fresnel_scale;
		float sun_dir_heading;
		float sun_dir_pitch;
		float fov;
		float aspect;
		float height;
		float farz;
		float rotate_offset;
		float center_i;
		float center_j;
		float extents_i;
		float extents_j;
		float fog_near;
		float fog_far;
		float dynamic_height_bias;
	};

	struct device_portal_association_block
	{
		long unique_id;
		short origin_bsp_index;
		char type;
		char source;
		short first_game_potal_index;
		short game_portal_count;
	};

	struct game_portal_to_portal_map_block
	{
		short portal_index;
	};

	struct portal_device_mapping_block
	{
		s_tag_block device_portal_association_block;
		s_tag_block game_portal_to_portal_map_block;
	};

	struct encoded_door_pas_block
	{
		long unknown;
	};

	struct cluster_door_portal_encoded_pas_block
	{
		long unknown;
	};

	struct ai_deafening_pas_block
	{
		long unknown;
	};

	struct cluster_distances_block
	{
		char unknown;
	};

	struct machine_door_mapping_block
	{
		char machine_door_index;
	};

	struct audibility_block
	{
		long door_portal_count;
		float cluster_distance_bounds_min;
		float cluster_distance_bounds_max;
		s_tag_block encoded_door_pas_block;
		s_tag_block cluster_door_portal_encoded_pas_block;
		s_tag_block ai_deafening_pas_block;
		s_tag_block cluster_distances_block;
		s_tag_block machine_door_mapping_block;
	};

	struct object_fake_lightprobes_block
	{
		long unique_id;
		short origin_bsp_index;
		char type;
		char source;
		char ambient[12]; // ???
		float shadow_direction_i;
		float shadow_direction_j;
		float shadow_direction_k;
		float lighting_accuracy;
		float shadow_opacity;
		char primary_direction_color[12]; // ???
		float primary_direction_i;
		float primary_direction_j;
		float primary_direction_k;
		char secondary_direction_color[12]; // ???
		float secondary_direction_i;
		float secondary_direction_j;
		float secondary_direction_k;
		short sh_index;
		short unknown;
	};

	struct resources4_block
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
		char position[12]; // ???
		s_vector3 offset;
		s_vector3 axis;
		char texcoord[8]; // ???
		char color[8]; // ???
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
		s_tag_block resources4_block;
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
		char decorator_set;
		char decorator_type;
		char shader_index;
		char compressed_radius;
		short cluster_index;
		short cache_block_index;
		short decorator_start_index;
		short decorator_count;
		short vertex_start_offset;
		short vertex_count;
		short index_start_offset;
		short index_count;
		float compressed_bounding_center;
	};

	struct cells2_block
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

	struct decorators2_block
	{
		float grid_origin_x;
		float grid_origin_y;
		float grid_origin_z;
		long cell_count_per_dimension;
		s_tag_block cache_blocks_block;
		s_tag_block groups_block;
		s_tag_block cells2_block;
		s_tag_block decals_block;
	};

	struct group
	{
		char import_info[4]; // ???
		char import_info2[4]; // ???
		long bsp_checksum;
		s_tag_block collision_materials_block;
		s_tag_block collision_bsp_block;
		float vehicle_floor;
		float vehicle_ceiling;
		char unused_nodes[4]; // ???
		char unused_nodes2[4]; // ???
		s_tag_block leaves2_block;
		float world_bounds_x_min;
		float world_bounds_x_max;
		float world_bounds_y_min;
		float world_bounds_y_max;
		float world_bounds_z_min;
		float world_bounds_z_max;
		s_tag_block surface_references_block;
		s_data_reference cluster_data;
		s_tag_block cluster_portals_block;
		s_tag_block fog_planes_block;
		char unknown16[4]; // ???
		char unknown17[4]; // ???
		char unknown18[4]; // ???
		char unknown19[4]; // ???
		char unknown20[4]; // ???
		char unknown21[4]; // ???
		s_tag_block weather_palette_block;
		s_tag_block weather_polyhedra_block;
		s_tag_block detail_objects_block;
		s_tag_block clusters_block;
		s_tag_block materials_block;
		s_tag_block sky_owner_cluster_block;
		s_tag_block conveyor_surfaces_block;
		s_tag_block breakable_surfaces_block;
		s_tag_block pathfinding_data_block;
		s_tag_block pathfinding_edges_block;
		s_tag_block background_sound_palette_block;
		s_tag_block sound_environment_palette_block;
		s_data_reference sound_pas_data;
		s_tag_block markers_block;
		s_tag_block runtime_decals_block;
		s_tag_block environment_object_palette_block;
		s_tag_block environment_objects_block;
		char lightmaps[4]; // ???
		char lightmaps2[4]; // ???
		char unknown82[4]; // ???
		char leaf_map_leaves[4]; // ???
		char leaf_map_leaves2[4]; // ???
		char leaf_map_connections[4]; // ???
		char leaf_map_connections2[4]; // ???
		char errors[4]; // ???
		char errors2[4]; // ???
		char precomputed_lighting[4]; // ???
		char precomputed_lighting2[4]; // ???
		s_tag_block instanced_geometry_definitions_block;
		s_tag_block instanced_geometry_instances_block;
		s_tag_block ambience_sound_clusters_block;
		s_tag_block reverb_sound_clusters_block;
		s_tag_block transparent_planes_block;
		char unknown114[4]; // ???
		char unknown115[4]; // ???
		char unknown116[4]; // ???
		char unknown117[4]; // ???
		char unknown118[4]; // ???
		char unknown119[4]; // ???
		char unknown120[4]; // ???
		char unknown121[4]; // ???
		char unknown122[4]; // ???
		char unknown123[4]; // ???
		char unknown124[4]; // ???
		char unknown125[4]; // ???
		char unknown126[4]; // ???
		char unknown127[4]; // ???
		char unknown128[4]; // ???
		char unknown129[4]; // ???
		char unknown130[4]; // ???
		char unknown131[4]; // ???
		char unknown132[4]; // ???
		char unknown133[4]; // ???
		char unknown134[4]; // ???
		char unknown135[4]; // ???
		char unknown136[4]; // ???
		char unknown137[4]; // ???
		float vehicle_sperical_limit_radius;
		float vehicle_sperical_limit_x;
		float vehicle_sperical_limit_y;
		float vehicle_sperical_limit_z;
		s_tag_block debug_info_block;
		s_tag_reference decorators;
		s_data_reference mopp_codes;
		char unknown154[4]; // ???
		float mopp_bounds_min_x;
		float mopp_bounds_min_y;
		float mopp_bounds_min_z;
		float mopp_bounds_max_x;
		float mopp_bounds_max_y;
		float mopp_bounds_max_z;
		s_data_reference breakable_surface_mopp_codes;
		s_tag_block breakable_surface_key_table_block;
		s_tag_block water_definitions_block;
		s_tag_block portal_device_mapping_block;
		s_tag_block audibility_block;
		s_tag_block object_fake_lightprobes_block;
		s_tag_block decorators2_block;
	};
}
