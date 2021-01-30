#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace weap_tag
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

	struct predicted_bitmaps_block
	{
		s_tag_reference bitmap;
	};

	struct first_person_block
	{
		s_tag_reference first_person_model;
		s_tag_reference first_person_animations;
	};

	struct predicted_resource_block
	{
		short type;
		short resource_index;
		s_tag_reference tag_index;
	};

	struct magazine_equipment_block
	{
		short rounds__0_for_max_;
		short unknown;
		s_tag_reference equipment;
	};

	struct magazines_block
	{
		char flags[4]; // ???
		short rounds_recharged;
		short rounds_total_initial;
		short rounds_total_maximum;
		short rounds_loaded_maximum;
		short runtime_rounds_inventory_maximum;
		short unknown;
		float reload_time;
		short rounds_reloaded;
		short unknown2;
		float chamber_time;
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		s_tag_reference reloading_effect;
		s_tag_reference reloading_damage_effect;
		s_tag_reference chambering_effect;
		s_tag_reference chambering_damage_effect;
		s_tag_block magazine_equipment_block;
	};

	struct new_triggers_block
	{
		char flags[4]; // ???
		short input;
		short behavior;
		short primary_barrel;
		short secondary_barrel;
		short prediction;
		short unknown;
		float autofire_time;
		float autofire_throw;
		short secondary_action;
		short primary_action;
		float charging_time;
		float charged_time;
		short overcharged_action;
		short unknown2;
		float charged_illumination;
		float spew_time;
		s_tag_reference charging_effect;
		s_tag_reference charging_damage_effect;
	};

	struct firing_effects_block
	{
		short shot_count_lower_bound;
		short shot_count_upper_bound;
		s_tag_reference firing_effect;
		s_tag_reference misfire_effect;
		s_tag_reference empty_effect;
		s_tag_reference firing_damage;
		s_tag_reference misfire_damage;
		s_tag_reference empty_damage;
	};

	struct barrels_block
	{
		char flags[4]; // ???
		char rounds_per_second[8]; // ???
		float acceleration_time;
		float deceleration_time;
		float barrel_spin_scale;
		float blurred_rate_of_fire;
		char shots_per_fire[4]; // ???
		float fire_recovery_time;
		float soft_recovery_fraction;
		short magazine;
		short rounds_per_shot;
		short minimum_rounds_loaded;
		short rounds_between_tracers;
		char optional_barrel_marker_name[4]; // ???
		short prediction_type;
		short firing_noise;
		float acceleration_time2;
		float deceleration_time2;
		char damage_error[8]; // ???
		float acceleration_time3;
		float deceleration_time3;
		float runtime_dual_error_acceleration_rate;
		float runtime_dual_error_deceleration_rate;
		char minimum_error[4]; // ???
		char error_angle[8]; // ???
		float dual_wield_damage_scale;
		short distribution_function;
		short projectiles_per_shot;
		char distribution_angle[4]; // ???
		char minimum_error2[4]; // ???
		char error_angle2[8]; // ???
		char first_person_offset[12]; // ???
		char damage_reporting_type;
		char unknown;
		short unknown2;
		s_tag_reference projectile;
		s_tag_reference damage_effect;
		float ejection_port_recovery_time;
		float illumination_recovery_time;
		float heat_generated_per_round;
		float age_generated_per_round;
		float overload_time;
		char angle_change_per_shot[8]; // ???
		float angle_change_acceleration_time;
		float angle_change_deceleration_time;
		short angle_change_function;
		short unknown3;
		float runtime_angle_change_acceleration_rate;
		float runtime_angle_change_deceleration_rate;
		float runtime_illumination_recovery_rate;
		float runtime_ejection_port_recovery_rate;
		float runtime_rate_of_fire_acceleration_rate;
		float runtime_rate_of_fire_deceleration_rate;
		float runtime_error_acceleration_rate;
		float runtime_error_deceleration_rate;
		s_tag_block firing_effects_block;
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
		short old_message_index;
		short sort_order;
		float multiplayer_on_ground_scale;
		float campaign_on_ground_scale;
		char pickup_message[4]; // ???
		char swap_message[4]; // ???
		char pickup_or_dual_wield_message[4]; // ???
		char swap_or_dual_wield_message[4]; // ???
		char dual_wield_only_message[4]; // ???
		char picked_up_message[4]; // ???
		char singular_quantity_message[4]; // ???
		char plural_quantity_message[4]; // ???
		char switch_to_message[4]; // ???
		char switch_to_from_ai_message[4]; // ???
		s_tag_reference unused;
		s_tag_reference collision_sound;
		s_tag_block predicted_bitmaps_block;
		s_tag_reference detonation_damage_effect;
		char detonation_delay[8]; // ???
		s_tag_reference detonating_effect;
		s_tag_reference detonation_effect;
		char flags3[4]; // ???
		char unknown13[4]; // ???
		short secondary_trigger_mode;
		short maximum_alternate_shots_loaded;
		float turn_on_time;
		float ready_time;
		s_tag_reference ready_effect;
		s_tag_reference ready_damage_effect;
		float heat_recovery_threshold;
		float overheated_threshold;
		float heat_detonation_threshold;
		float heat_detonation_fraction;
		float heat_loss_per_second;
		float heat_illumination;
		float overheated_heat_loss_per_second;
		s_tag_reference overheated;
		s_tag_reference overheated_damage_effect;
		s_tag_reference detonation;
		s_tag_reference detonation_damage_effect2;
		s_tag_reference player_melee_damage;
		s_tag_reference player_melee_response;
		char magnetism_angle[4]; // ???
		float magnetism_range;
		float throttle_magnitude;
		float throttle_minimum_distance;
		char throttle_maximum_adjustment_angle[4]; // ???
		char damage_pyramid_angles[8]; // ???
		float damage_pyramid_depth;
		s_tag_reference _1st_hit_melee_damage;
		s_tag_reference _1st_hit_melee_response;
		s_tag_reference _2nd_hit_melee_damage;
		s_tag_reference _2nd_hit_melee_response;
		s_tag_reference _3rd_hit_melee_damage;
		s_tag_reference _3rd_hit_melee_response;
		s_tag_reference lunge_melee_damage;
		s_tag_reference lunge_melee_response;
		char melee_damage_reporting_type;
		char unknown14;
		short magnification_levels;
		char magnification_range[8]; // ???
		char autoaim_angle[4]; // ???
		float autoaim_range;
		char magnetism_angle2[4]; // ???
		float magnetism_range2;
		char deviation_angle[4]; // ???
		char unknown15[4]; // ???
		char unknown16[4]; // ???
		char unknown17[4]; // ???
		char unknown18[4]; // ???
		short movement_penalized;
		short unknown19;
		float forwards_movement_penalty;
		float sideways_movement_penalty;
		float ai_scariness;
		float weapon_power_on_time;
		float weapon_power_off_time;
		s_tag_reference weapon_power_on_effect;
		s_tag_reference weapon_power_off_effect;
		float age_heat_recovery_penalty;
		float age_rate_of_fire_penalty;
		float age_misfire_start;
		float age_misfire_chance;
		s_tag_reference pickup_sound;
		s_tag_reference zoom_in_sound;
		s_tag_reference zoom_out_sound;
		float active_camo_ding;
		float active_camo_regrowth_rate;
		char handle_node[4]; // ???
		char weapon_class[4]; // ???
		char weapon_name[4]; // ???
		short multiplayer_weapon_type;
		short weapon_type;
		short tracking_type;
		short unknown20;
		char unknown21[4]; // ???
		char unknown22[4]; // ???
		char unknown23[4]; // ???
		char unknown24[4]; // ???
		s_tag_block first_person_block;
		s_tag_reference new_hud_interface;
		s_tag_block predicted_resource_block;
		s_tag_block magazines_block;
		s_tag_block new_triggers_block;
		s_tag_block barrels_block;
		float weapon_power_on_velocity;
		float weapon_power_off_velocity;
		float maximum_movement_acceleration;
		float maximum_movement_velocity;
		float maximum_turning_acceleration;
		float maximum_turning_velocity;
		s_tag_reference deployed_vehicle;
		s_tag_reference age_effect;
		s_tag_reference aged_weapon;
		s_vector3 first_person_weapon_offset;
		char first_person_scope_size[12]; // ???
	};
}
