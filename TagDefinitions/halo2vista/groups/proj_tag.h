#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace proj_tag
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

	struct material_responses_block
	{
		short flags;
		short default_response;
		s_tag_reference do_not_use__old_effect_;
		char material_name[4]; // ???
		short global_material_index;
		short unknown;
		short potential_response;
		short response_flags;
		float chance_fraction;
		char between_angle[8]; // ???
		char and_velocity[8]; // ???
		s_tag_reference old_effect;
		short scale_effects_by;
		short unknown2;
		char angular_noise[4]; // ???
		float velocity_noise;
		s_tag_reference old_effect2;
		float initial_friction;
		float maximum_distance;
		float parallel_friction;
		float perpendicular_friction;
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
		short detonation_timer_starts;
		short impact_noise;
		float ai_perception_radius;
		float collision_radius;
		float arming_time;
		float danger_radius;
		char timer[8]; // ???
		float minimum_velocity;
		float maximum_range;
		short detonation_noise;
		short super_detonation_projectile_count;
		s_tag_reference detonation_started;
		s_tag_reference airborne_detonation_effect;
		s_tag_reference ground_detonation_effect;
		s_tag_reference detonation_damage;
		s_tag_reference attached_detonation_damage;
		s_tag_reference super_detonation;
		s_tag_reference super_detonation_damage;
		s_tag_reference detonation_sound;
		char damage_reporting_type;
		char unknown12;
		short unknown13;
		s_tag_reference attached_super_detonation_damage;
		float material_effect_radius;
		s_tag_reference flyby_sound;
		s_tag_reference impact_effect;
		s_tag_reference impact_damage;
		float boarding_detonation_time;
		s_tag_reference boarding_detonation_damage;
		s_tag_reference boarding_attached_detonation_damage;
		float air_gravity_scale;
		char air_damage_range[8]; // ???
		float water_gravity_scale;
		char water_damage_range[8]; // ???
		float initial_velocity;
		float final_velocity;
		char guided_angular_velocity_lower[4]; // ???
		char guided_angular_velocity_upper[4]; // ???
		char acceleration_range[8]; // ???
		float runtime_acceleration_bound_inverse;
		float targeted_leading_fraction;
		s_tag_block material_responses_block;
	};
}
