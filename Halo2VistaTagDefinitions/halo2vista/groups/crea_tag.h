#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace crea_tag
{
	struct ai_properties_block
	{
		char flags[4]; // ???
		char ai_type_name[4]; // ???
		char unknown[4]; // ???
		short ai_size;
		short leap_jump_speed;
	};

	struct functions_block
	{
		char flags[4]; // ???
		char import_name[4]; // ???
		char export_name[4]; // ???
		char turn_off_with[4]; // ???
		float minimum_value;
		s_data_reference default_function;
		char scale_by[8]; // ???
	};

	struct attachments_block
	{
		s_tag_reference type;
		char marker[4]; // ???
		short change_color;
		short unknown;
		char primary_scale[4]; // ???
		char secondary_scale[4]; // ???
	};

	struct widgets_block
	{
		s_tag_reference type;
	};

	struct old_functions_block
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
		char unknown17[4]; // ???
		char unknown18[4]; // ???
		char unknown19[4]; // ???
		char unknown20[4]; // ???
	};

	struct initial_permutations_block
	{
		float weight;
		char color_lower_bound[12]; // ???
		char color_upper_bound[12]; // ???
		char variant_name[12]; // ???
	};

	struct functions2_block
	{
		char unknown[4]; // ???
		char scale_flags[4]; // ???
		char color_lower_bound[12]; // ???
		char color_upper_bound[12]; // ???
		char darken_by[4]; // ???
		char scale_by[4]; // ???
	};

	struct change_colors_block
	{
		s_tag_block initial_permutations_block;
		s_tag_block functions2_block;
	};

	struct predicted_resources_block
	{
		short type;
		short resource_index;
		s_tag_reference tag_index;
	};

	struct dead_sphere_shapes_block
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

	struct pill_shapes_block
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

	struct sphere_shapes_block
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

	struct group
	{
		short object_type;
		short flags;
		float bounding_radius;
		char bounding_offset[12]; // ???
		float acceleration_scale;
		short lightmap_shadow_mode;
		char sweetener_size;
		char unknown;
		char runtime_flags[4]; // ???
		float dynamic_light_sphere_radius;
		char dynamic_light_sphere_offset[12]; // ???
		char default_model_variant[4]; // ???
		s_tag_reference model;
		s_tag_reference crate_object;
		s_tag_reference modifier_shader;
		s_tag_reference creation_effect;
		s_tag_reference material_effects;
		s_tag_block ai_properties_block;
		s_tag_block functions_block;
		float apply_collision_damage_scale;
		char game_acceleration[8]; // ???
		char game_scale[8]; // ???
		char absolute_acceleration[8]; // ???
		char absolute_scale[8]; // ???
		short hud_text_message_index;
		short unknown4;
		s_tag_block attachments_block;
		s_tag_block widgets_block;
		s_tag_block old_functions_block;
		s_tag_block change_colors_block;
		s_tag_block predicted_resources_block;
		char flags2[4]; // ???
		short default_team;
		short motion_sensor_blip_size;
		char turning_velocity_maximum[4]; // ???
		char turning_acceleration_maximum[4]; // ???
		float casual_turning_modifier;
		float autoaim_width;
		char flags3[4]; // ???
		float height_standing;
		float height_crouching;
		float radius;
		float mass;
		char living_material_name[4]; // ???
		char dead_material_name[4]; // ???
		short living_material_global_index;
		short dead_material_global_index;
		s_tag_block dead_sphere_shapes_block;
		s_tag_block pill_shapes_block;
		s_tag_block sphere_shapes_block;
		char maximum_slope_angle[4]; // ???
		char downhill_falloff_angle[4]; // ???
		char downhill_cutoff_angle[4]; // ???
		char uphill_falloff_angle[4]; // ???
		char uphill_cutoff_angle[4]; // ???
		float downhill_velocity_scale;
		float uphill_velocity_scale;
		float minimum_normal_k;
		float downhill_k0;
		float downhill_k1;
		float uphill_k0;
		float uphill_k1;
		char bank_angle[4]; // ???
		float bank_apply_time;
		float bank_decay_time;
		float pitch_ratio;
		float maximum_velocity;
		float maximum_sidestep_velocity;
		float acceleration;
		float deceleration;
		char angular_velocity_maximum[4]; // ???
		char angular_acceleration_maximum[4]; // ???
		float crouch_velocity_modifier;
		s_tag_reference impact_damage;
		s_tag_reference impact_shield_damage;
		char destroy_after_death_time[8]; // ???
	};
}
