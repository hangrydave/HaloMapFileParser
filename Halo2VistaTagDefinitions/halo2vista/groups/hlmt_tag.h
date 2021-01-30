#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace hlmt_tag
{
	struct states_block
	{
		char permutation_name[4]; // ???
		char permutation_index;
		char property_flags[1]; // ???
		short state;
		s_tag_reference looping_effect;
		char looping_effect_marker_name[4]; // ???
		float initial_probability;
	};

	struct permutations_block
	{
		char permutation_name[4]; // ???
		char model_permutation_index;
		char flags[1]; // ???
		short unknown;
		float probability;
		s_tag_block states_block;
		char runtime_permutation_index;
		char runtime_permutation_index2;
		char runtime_permutation_index3;
		char runtime_permutation_index4;
		char runtime_permutation_index5;
		char unknown2;
		short unknown3;
		char unknown4[2]; // ???
	};

	struct regions_block
	{
		char region_name[4]; // ???
		char runtime_model_region_index;
		char runtime_flags[1]; // ???
		short parent_variant_index;
		s_tag_block permutations_block;
		short sort_order;
		short unknown;
	};

	struct objects_block
	{
		char parent_marker[4]; // ???
		char child_marker[4]; // ???
		s_tag_reference child_object;
	};

	struct variants_block
	{
		char name[4]; // ???
		char runtime_model_region_0_index;
		char runtime_model_region_1_index;
		char runtime_model_region_2_index;
		char runtime_model_region_3_index;
		char runtime_model_region_4_index;
		char runtime_model_region_5_index;
		char runtime_model_region_6_index;
		char runtime_model_region_7_index;
		char runtime_model_region_8_index;
		char runtime_model_region_9_index;
		char runtime_model_region_10_index;
		char runtime_model_region_11_index;
		char runtime_model_region_12_index;
		char runtime_model_region_13_index;
		char runtime_model_region_14_index;
		char runtime_model_region_15_index;
		s_tag_block regions_block;
		s_tag_block objects_block;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char dialogue_sound_effect[4]; // ???
		s_tag_reference dialogue;
	};

	struct materials_block
	{
		char material_name[4]; // ???
		short material_type;
		short damage_section_index;
		short collision_material_index;
		short damager_material_index;
		char global_material_name[4]; // ???
		short global_material_index;
		short unknown;
	};

	struct instant_responses_block
	{
		short response_type;
		short constraint_damage_type;
		char flags[4]; // ???
		float damage_threshold;
		s_tag_reference transition_effect;
		s_tag_reference transition_damage_effect;
		char region[4]; // ???
		short new_state;
		short runtime_region_index;
		char effect_marker_name[4]; // ???
		char damage_effect_marker_name[4]; // ???
		float response_delay;
		s_tag_reference delay_effect;
		char delay_effect_marker_name[4]; // ???
		char constraint_group_name[4]; // ???
		char ejecting_seat_label[4]; // ???
		float skip_fraction;
		char destroyed_child_object_marker_name[4]; // ???
		float total_damage_threshold;
	};

	struct damage_sections_block
	{
		char name[4]; // ???
		char flags[4]; // ???
		float vitality_percentage;
		s_tag_block instant_responses_block;
		char null_block_here_1[4]; // ???
		char null_block_here_12[4]; // ???
		char null_block_here_2[4]; // ???
		char null_block_here_22[4]; // ???
		float stun_time;
		float recharge_time;
		float runtime_recharge_velocity;
		char resurrection_restored_region_name[4]; // ???
		short ressurection_region_runtime_index;
		short unknown;
	};

	struct nodes_block
	{
		short runtime_damage_part;
		short unknown;
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
	};

	struct damage_seats_block
	{
		char seat_label[4]; // ???
		float direct_damage_scale;
		float damage_transfer_fall_off_radius;
		float maximum_transfer_damage_scale;
		float minimum_transfer_damage_scale;
	};

	struct damage_constraints_block
	{
		char physics_model_constraint_name[4]; // ???
		char damage_constraint_name[4]; // ???
		char damage_constraint_group_name[4]; // ???
		float group_probability_scale;
		short constraint_type;
		short constraint_index;
	};

	struct new_damage_info_block
	{
		char flags[4]; // ???
		char global_indirect_material_name[4]; // ???
		short indirect_damage_section_index;
		short unknown;
		char unknown2[4]; // ???
		char collision_damage_reporting_type;
		char response_damage_reporting_type;
		short unknown3;
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		float maximum_vitality;
		float minimum_stun_damage;
		float stun_time;
		float recharge_time;
		float recharge_fraction;
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		char unknown16[4]; // ???
		char unknown17[4]; // ???
		char unknown18[4]; // ???
		char unknown19[4]; // ???
		char unknown20[4]; // ???
		char unknown21[4]; // ???
		char unknown22[4]; // ???
		char unknown23[4]; // ???
		char unknown24[4]; // ???
		s_tag_reference shield_damaged_first_person_shader;
		s_tag_reference shield_damaged_shader;
		float maximum_shield_vitality;
		char global_shield_material_name[4]; // ???
		float minimum_stun_damage2;
		float stun_time2;
		float recharge_time2;
		float shield_damaged_threshold;
		s_tag_reference shield_damaged_effect;
		s_tag_reference shield_depleted_effect;
		s_tag_reference shield_recharging_effect;
		s_tag_block damage_sections_block;
		s_tag_block nodes_block;
		short global_shield_material_index;
		short global_indirect_material_index;
		float shield_recharge_velocity;
		float health_recharge_velocity;
		s_tag_block damage_seats_block;
		s_tag_block damage_constraints_block;
		s_tag_reference overshield_first_person_shader;
		s_tag_reference overshield_shader;
	};

	struct targets_block
	{
		char marker_name[4]; // ???
		float size;
		char cone_angle[4]; // ???
		short damage_section_index;
		short variant_index;
		float targeting_relevance;
		char lock_on_flags[4]; // ???
		float lock_on_distance;
	};

	struct permutations2_block
	{
		char name[4]; // ???
		char flags[1]; // ???
		char collision_permutation_index;
		char physics_permutation_index;
		char unknown;
	};

	struct collision_regions_block
	{
		char name[4]; // ???
		char collision_region_index;
		char physics_region_index;
		short unknown;
		s_tag_block permutations2_block;
	};

	struct nodes2_block
	{
		char name[4]; // ???
		short parent_node_index;
		short first_child_node_index;
		short next_sibling_node_index;
		short unknown;
		char default_translation[12]; // ???
		s_vector4 default_rotation;
		float default_inverse_scale;
		s_vector3 default_inverse_forward;
		s_vector3 default_inverse_left;
		s_vector3 default_inverse_up;
		char default_inverse_position[12]; // ???
	};

	struct model_object_data_block
	{
		short type;
		short unknown;
		char offset[12]; // ???
		float radius;
	};

	struct scenario_load_parameters_block
	{
		s_tag_reference scenario;
		s_data_reference parameters;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct group
	{
		s_tag_reference render_model;
		s_tag_reference collision_model;
		s_tag_reference animation;
		s_tag_reference physics;
		s_tag_reference physics_model;
		char unknown[8]; // ???
		char unknown2[41]; // ???
		float disappear_distance;
		float begin_fade_distance;
		char unknown3[4]; // ???
		float reduce_to_l1;
		float reduce_to_l2;
		float reduce_to_l3;
		float reduce_to_l4;
		float reduce_to_l5;
		char unknown4[4]; // ???
		short shadow_fade_distance;
		short unknown5;
		s_tag_block variants_block;
		s_tag_block materials_block;
		s_tag_block new_damage_info_block;
		s_tag_block targets_block;
		s_tag_block collision_regions_block;
		s_tag_block nodes2_block;
		char node_list_checksum[4]; // ???
		s_tag_block model_object_data_block;
		s_tag_reference default_dialogue;
		s_tag_reference active_camo_shader;
		char flags[4]; // ???
		char default_dialogue_effect[4]; // ???
		char render_only_node_flags_1[4]; // ???
		char render_only_node_flags_2[4]; // ???
		char render_only_node_flags_3[4]; // ???
		char render_only_node_flags_4[4]; // ???
		char render_only_node_flags_5[4]; // ???
		char render_only_node_flags_6[4]; // ???
		char render_only_node_flags_7[4]; // ???
		char render_only_node_flags_8[4]; // ???
		char render_only_section_flags_1[4]; // ???
		char render_only_section_flags_2[4]; // ???
		char render_only_section_flags_3[4]; // ???
		char render_only_section_flags_4[4]; // ???
		char render_only_section_flags_5[4]; // ???
		char render_only_section_flags_6[4]; // ???
		char render_only_section_flags_7[4]; // ???
		char render_only_section_flags_8[4]; // ???
		char runtime_flags[4]; // ???
		s_tag_block scenario_load_parameters_block;
		s_tag_reference hologram_shader;
		char hologram_control_function[8]; // ???
	};
}
