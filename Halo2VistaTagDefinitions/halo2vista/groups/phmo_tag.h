#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace phmo_tag
{
	struct phantom_types_block
	{
		char flags[4]; // ???
		char minimum_size;
		char maximum_size;
		short unknown;
		char marker_name[4]; // ???
		char alignment_marker_name[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		float hooke_s_law_e;
		float linear_dead_radius;
		float center_acceleration;
		float center_maximum_velocity;
		float axis_acceleration;
		float axis_maximum_velocity;
		float direction_acceleration;
		float direction_maximum_velocity;
		float orbit_acceleration;
		float orbit_maximum_velocity;
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		float alignment_hooke_s_law_e;
		float alignment_acceleration;
		float alignment_maximum_velocity;
		char unknown9[4]; // ???
		char unknown10[4]; // ???
	};

	struct constraints_block
	{
		short type;
		short index;
		char flags[4]; // ???
		float friction;
	};

	struct node_edges_block
	{
		short node_a_material_global_index;
		short node_b_material_global_index;
		short node_a_index;
		short node_b_index;
		s_tag_block constraints_block;
		char node_a_material_name[4]; // ???
		char node_b_material_name[4]; // ???
	};

	struct rigid_bodies_block
	{
		short node_index;
		short region_index;
		short permutation_index;
		short unknown;
		char bounding_sphere_offset[12]; // ???
		float bounding_sphere_radius;
		short flags;
		short motion_type;
		short no_phantom_power_alternative_rigid_body_index;
		short size;
		float inertia_tensor_scale;
		float linear_damping;
		float angular_damping;
		s_vector3 center_of_mass_offset;
		short shape_type;
		short shape_index;
		float mass;
		s_vector3 center_of_mass;
		float w_center_of_mass;
		s_vector3 inertia_tensor_x;
		float w_inertia_tensor_x;
		s_vector3 inertia_tensor_y;
		float w_inertia_tensor_y;
		s_vector3 inertia_tensor_z;
		float w_inertia_tensor_z;
		float bounding_sphere_pad;
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char collision_quality_override_type;
		char unknown4;
		short runtime_flags;
	};

	struct materials_block
	{
		char name[4]; // ???
		char global_material_name[4]; // ???
		short phantom_type_index;
		short flags;
	};

	struct spheres_block
	{
		char name[4]; // ???
		short material_index;
		short flags;
		float relative_mass_scale;
		float friction;
		float restitution;
		float volume;
		float mass;
		short mass_distribution_index;
		char phantom_type_index;
		char collision_group;
		char runtime_code_pointer[4]; // ???
		short size;
		short count;
		char user_data[4]; // ???
		float radius;
		char runtime_code_pointer2[4]; // ???
		short size2;
		short count2;
		char unknown[4]; // ???
		char user_data2[4]; // ???
		s_vector3 rotation_i;
		float w_rotation_i;
		s_vector3 rotation_j;
		float w_rotation_j;
		s_vector3 rotation_k;
		float w_rotation_k;
		s_vector3 translation;
		float w_translation;
	};

	struct multi_spheres_block
	{
		char name[4]; // ???
		short material_index;
		short flags;
		float relative_mass_scale;
		float friction;
		float restitution;
		float volume;
		float mass;
		short mass_distribution_index;
		char phantom_type_index;
		char collision_group;
		char runtime_code_pointer[4]; // ???
		short size;
		short count;
		char user_data[4]; // ???
		long number_of_spheres;
		s_vector3 sphere_0;
		float w_sphere_0;
		s_vector3 sphere_1;
		float w_sphere_1;
		s_vector3 sphere_2;
		float w_sphere_2;
		s_vector3 sphere_3;
		float w_sphere_3;
		s_vector3 sphere_4;
		float w_sphere_4;
		s_vector3 sphere_5;
		float w_sphere_5;
		s_vector3 sphere_6;
		float w_sphere_6;
		s_vector3 sphere_7;
		float w_sphere_7;
	};

	struct pills_block
	{
		char name[4]; // ???
		short material_index;
		short flags;
		float relative_mass_scale;
		float friction;
		float restitution;
		float volume;
		float mass;
		short mass_distribution_index;
		char phantom_type_index;
		char collision_group;
		char runtime_code_pointer[4]; // ???
		short size;
		short count;
		char user_data[4]; // ???
		float radius;
		s_vector3 bottom;
		float w_bottom;
		s_vector3 top;
		float w_top;
	};

	struct boxes_block
	{
		char name[4]; // ???
		short material_index;
		short flags;
		float relative_mass_scale;
		float friction;
		float restitution;
		float volume;
		float mass;
		short mass_distribution_index;
		char phantom_type_index;
		char collision_group;
		char runtime_code_pointer[4]; // ???
		short size;
		short count;
		char user_data[4]; // ???
		float radius;
		s_vector3 half_extents;
		float w_half_extents;
		char runtime_code_pointer2[4]; // ???
		short size2;
		short count2;
		char unknown[4]; // ???
		char user_data2[4]; // ???
		s_vector3 rotation_i;
		float w_rotation_i;
		s_vector3 rotation_j;
		float w_rotation_j;
		s_vector3 rotation_k;
		float w_rotation_k;
		s_vector3 translation;
		float w_translation;
	};

	struct triangles_block
	{
		char name[4]; // ???
		short material_index;
		short flags;
		float relative_mass_scale;
		float friction;
		float restitution;
		float volume;
		float mass;
		short mass_distribution_index;
		char phantom_type_index;
		char collision_group;
		char runtime_code_pointer[4]; // ???
		short size;
		short count;
		char user_data[4]; // ???
		float radius;
		s_vector3 point_a;
		float w_point_a;
		s_vector3 point_b;
		float w_point_b;
		s_vector3 point_c;
		float w_point_c;
	};

	struct polyhedra_block
	{
		char name[4]; // ???
		short material_index;
		short flags;
		float relative_mass_scale;
		float friction;
		float restitution;
		float volume;
		float mass;
		short mass_distribution_index;
		char phantom_type_index;
		char collision_group;
		char runtime_code_pointer[4]; // ???
		short size;
		short count;
		char user_data[4]; // ???
		float radius;
		s_vector3 axis_aligned_bounding_box_half_extents;
		float w_axis_aligned_bounding_box_half_extents;
		s_vector3 axis_aligned_bounding_box_center;
		float w_axis_aligned_bounding_box_center;
		char runtime_four_vectors_pointer[4]; // ???
		long four_vectors_size;
		char four_vectors_capacity[4]; // ???
		char unknown[4]; // ???
		s_vector3 four_vectors_0_x;
		float w_four_vectors_0_x;
		s_vector3 four_vectors_0_y;
		float w_four_vectors_0_y;
		s_vector3 four_vectors_0_z;
		float w_four_vectors_0_z;
		s_vector3 four_vectors_1_x;
		float w_four_vectors_1_x;
		s_vector3 four_vectors_1_y;
		float w_four_vectors_1_y;
		s_vector3 four_vectors_1_z;
		float w_four_vectors_1_z;
		s_vector3 four_vectors_2_x;
		float w_four_vectors_2_x;
		s_vector3 four_vectors_2_y;
		float w_four_vectors_2_y;
		s_vector3 four_vectors_2_z;
		float w_four_vectors_2_z;
		long number_of_vertices;
		char runtime_plane_equations_pointer[4]; // ???
		long plane_equations_size;
		char plane_equations_capacity[4]; // ???
	};

	struct polyhedron_four_vectors_block
	{
		s_vector3 four_vectors_x;
		float w_four_vectors_x;
		s_vector3 four_vectors_y;
		float w_four_vectors_y;
		s_vector3 four_vectors_z;
		float w_four_vectors_z;
	};

	struct polyhedron_plane_equations_block
	{
		s_vector3 plane_equations;
		float w_plane_equations;
	};

	struct mass_distributions_block
	{
		s_vector3 center_of_mass;
		float w_center_of_mass;
		s_vector3 inertia_tensor_i;
		float w_inertia_tensor_i;
		s_vector3 inertia_tensor_j;
		float w_inertia_tensor_j;
		s_vector3 inertia_tensor_k;
		float w_inertia_tensor_k;
	};

	struct lists_block
	{
		char runtime_code_pointer[4]; // ???
		short size;
		short count;
		char unknown[4]; // ???
		char user_data[4]; // ???
		long child_shapes_size;
		char child_shapes_capacity[4]; // ???
		short shape_type_0;
		short shape_index_0;
		long collision_filter_0;
		short shape_type_1;
		short shape_index_1;
		long collision_filter_1;
		short shape_type_2;
		short shape_index_2;
		long collision_filter_2;
		short shape_type_3;
		short shape_index_3;
		long collision_filter_3;
	};

	struct list_shapes_block
	{
		short shape_type;
		short shape_index;
		long collision_filter;
	};

	struct mopps_block
	{
		char runtime_code_pointer[4]; // ???
		short size;
		short count;
		char user_data[4]; // ???
		short shape_type;
		short shape_index;
		char runtime_mopp_code_pointer[2]; // ???
	};

	struct hinge_constraints_block
	{
		char name[4]; // ???
		short node_a_index;
		short node_b_index;
		float a_scale;
		s_vector3 a_forward;
		s_vector3 a_left;
		s_vector3 a_up;
		char a_position[12]; // ???
		float b_scale;
		s_vector3 b_forward;
		s_vector3 b_left;
		s_vector3 b_up;
		char b_position[12]; // ???
		short edge_index;
		short unknown;
		char unknown2[2]; // ???
	};

	struct ragdoll_constraints_block
	{
		char name[4]; // ???
		short node_a_index;
		short node_b_index;
		float a_scale;
		s_vector3 a_forward;
		s_vector3 a_left;
		s_vector3 a_up;
		char a_position[12]; // ???
		float b_scale;
		s_vector3 b_forward;
		s_vector3 b_left;
		s_vector3 b_up;
		char b_position[12]; // ???
		short edge_index;
		short unknown;
		char unknown2[4]; // ???
		char twist[8]; // ???
		char cone[8]; // ???
		char plane[8]; // ???
		float maximum_friciton_torque;
	};

	struct rigid_bodies2_block
	{
		short rigid_body_index;
	};

	struct permutations_block
	{
		char name[4]; // ???
		s_tag_block rigid_bodies2_block;
	};

	struct regions_block
	{
		char name[4]; // ???
		s_tag_block permutations_block;
	};

	struct nodes_block
	{
		char name[4]; // ???
		short flags;
		short parent_index;
		short sibling_index;
		short child_index;
	};

	struct points_block
	{
		char position[12]; // ???
		float t_value;
	};

	struct point_to_path_curves_block
	{
		char name[4]; // ???
		short node_index;
		short unknown;
		s_tag_block points_block;
	};

	struct limited_hinge_constraints_block
	{
		char name[4]; // ???
		short node_a_index;
		short node_b_index;
		float a_scale;
		s_vector3 a_forward;
		s_vector3 a_left;
		s_vector3 a_up;
		char a_position[12]; // ???
		float b_scale;
		s_vector3 b_forward;
		s_vector3 b_left;
		s_vector3 b_up;
		char b_position[12]; // ???
		short edge_index;
		short unknown;
		char unknown2[4]; // ???
		float limit_friction;
		char limit_angle[4]; // ???
	};

	struct ball_and_socket_constraints_block
	{
		char name[4]; // ???
		short node_a_index;
		short node_b_index;
		float a_scale;
		s_vector3 a_forward;
		s_vector3 a_left;
		s_vector3 a_up;
		char a_position[12]; // ???
		float b_scale;
		s_vector3 b_forward;
		s_vector3 b_left;
		s_vector3 b_up;
		char b_position[12]; // ???
		short edge_index;
		short unknown;
		char unknown2[2]; // ???
	};

	struct stiff_spring_constraints_block
	{
		char name[4]; // ???
		short node_a_index;
		short node_b_index;
		float a_scale;
		s_vector3 a_forward;
		s_vector3 a_left;
		s_vector3 a_up;
		char a_position[12]; // ???
		float b_scale;
		s_vector3 b_forward;
		s_vector3 b_left;
		s_vector3 b_up;
		char b_position[12]; // ???
		short edge_index;
		short unknown;
		char unknown2[4]; // ???
		float spring_length;
	};

	struct prismatic_constraints_block
	{
		char name[4]; // ???
		short node_a_index;
		short node_b_index;
		float a_scale;
		s_vector3 a_forward;
		s_vector3 a_left;
		s_vector3 a_up;
		char a_position[12]; // ???
		float b_scale;
		s_vector3 b_forward;
		s_vector3 b_left;
		s_vector3 b_up;
		char b_position[12]; // ???
		short edge_index;
		short unknown;
		char unknown2[4]; // ???
		char limit_angle[8]; // ???
		float maximum_friction_force;
	};

	struct phantoms_block
	{
		char runtime_code_pointer[4]; // ???
		short size;
		short count;
		char user_data[4]; // ???
		short shape_type;
		short shape_index;
		long collision_filter;
		char runtime_code_pointer2[4]; // ???
		short size2;
		short count2;
		char user_data2[2]; // ???
	};

	struct group
	{
		char flags[4]; // ???
		float mass;
		float low_frequency_deactivation_scale;
		float high_frequency_deactivation_scale;
		float unknown;
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		s_tag_block phantom_types_block;
		s_tag_block node_edges_block;
		s_tag_block rigid_bodies_block;
		s_tag_block materials_block;
		s_tag_block spheres_block;
		s_tag_block multi_spheres_block;
		s_tag_block pills_block;
		s_tag_block boxes_block;
		s_tag_block triangles_block;
		s_tag_block polyhedra_block;
		s_tag_block polyhedron_four_vectors_block;
		s_tag_block polyhedron_plane_equations_block;
		s_tag_block mass_distributions_block;
		s_tag_block lists_block;
		s_tag_block list_shapes_block;
		s_tag_block mopps_block;
		s_data_reference mopp_codes;
		s_tag_block hinge_constraints_block;
		s_tag_block ragdoll_constraints_block;
		s_tag_block regions_block;
		s_tag_block nodes_block;
		char unknown30[4]; // ???
		char unknown31[4]; // ???
		char unknown32[4]; // ???
		char unknown33[4]; // ???
		s_tag_block point_to_path_curves_block;
		s_tag_block limited_hinge_constraints_block;
		s_tag_block ball_and_socket_constraints_block;
		s_tag_block stiff_spring_constraints_block;
		s_tag_block prismatic_constraints_block;
		s_tag_block phantoms_block;
	};
}
