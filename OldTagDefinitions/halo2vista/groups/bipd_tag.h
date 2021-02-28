#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace bipd_tag
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

	struct camera_tracks_block
	{
		s_tag_reference track;
	};

	struct postures_block
	{
		char name[4]; // ???
		s_vector3 pill_offset;
	};

	struct new_hud_interfaces_block
	{
		s_tag_reference new_unit_hud_interface;
	};

	struct dialogue_variants_block
	{
		short variant_number;
		short unknown;
		s_tag_reference dialogue;
	};

	struct powered_seats_block
	{
		float driver_powerup_time;
		float driver_powerdown_time;
	};

	struct weapons_block
	{
		s_tag_reference weapon;
	};

	struct camera_tracks2_block
	{
		s_tag_reference track;
	};

	struct unit_hud_interface_block
	{
		s_tag_reference new_unit_hud_interface;
	};

	struct seats_block
	{
		char flags[4]; // ???
		char seat_animation[4]; // ???
		char seat_marker_name[4]; // ???
		char entry_marker_s__name[4]; // ???
		char boarding_grenade_marker[4]; // ???
		char boarding_grenade_string[4]; // ???
		char boarding_melee_string[4]; // ???
		float ping_scale;
		float turnover_time;
		s_vector3 acceleration_range;
		float acceleration_action_scale;
		float acceleration_attach_scale;
		float ai_scariness;
		short ai_seat_type;
		short boarding_seat_index;
		float listener_interpolation_factor;
		char yaw_rate_bounds[8]; // ???
		char pitch_rate_bounds[8]; // ???
		float minimum_speed_reference;
		float maximum_speed_reference;
		float speed_exponent;
		char camera_marker_name[4]; // ???
		char camera_submerged_marker_name[4]; // ???
		char pitch_auto_level[4]; // ???
		char pitch_range[8]; // ???
		s_tag_block camera_tracks2_block;
		s_tag_block unit_hud_interface_block;
		char enter_seat_string[4]; // ???
		char yaw[8]; // ???
		s_tag_reference built_in_gunner;
		float entry_radius;
		char entry_marker_cone_angle[4]; // ???
		char entry_marker_facing_angle[4]; // ???
		float maximum_relative_velocity;
		char invisible_seat_region[4]; // ???
		long invisible_seat_region_index;
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

	struct contact_points_block
	{
		char marker_name[999]; // ???
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
		short constant_sound_volume;
		s_tag_reference integrated_light_toggle;
		char camera_field_of_view[4]; // ???
		float camera_stiffness;
		char camera_marker_name[4]; // ???
		char camera_submerged_marker_name[4]; // ???
		char pitch_auto_level[4]; // ???
		char pitch_range[8]; // ???
		s_tag_block camera_tracks_block;
		s_vector3 acceleration_range;
		float acceleration_action_scale;
		float acceleration_attach_scale;
		float soft_ping_threshold;
		float soft_ping_interrupt_time;
		float hard_ping_threshold;
		float hard_ping_interrupt_time;
		float hard_death_threshold;
		float feign_death_threshold;
		float feign_death_time;
		float distance_of_evade_animation;
		float distance_of_dive_animation;
		float stunned_movement_threshold;
		float feign_death_chance;
		float feign_repeat_chance;
		s_tag_reference spawned_turret_character;
		char spawned_actor_count[4]; // ???
		float spawned_velocity;
		char aiming_velocity_maximum[4]; // ???
		char aiming_acceleration_maximum[4]; // ???
		float casual_aiming_modifier;
		char looking_velocity_maximum[4]; // ???
		char looking_acceleration_maximum[4]; // ???
		char right_hand_node[4]; // ???
		char left_hand_node[4]; // ???
		char preferred_gun_node[4]; // ???
		s_tag_reference melee_damage;
		s_tag_reference boarding_melee_damage;
		s_tag_reference boarding_melee_response;
		s_tag_reference landing_melee_damage;
		s_tag_reference flurry_melee_damage;
		s_tag_reference obstacle_smash_damage;
		short motion_sensor_blip_size;
		short unknown13;
		s_tag_block postures_block;
		s_tag_block new_hud_interfaces_block;
		s_tag_block dialogue_variants_block;
		float grenade_velocity;
		short grenade_type;
		short grenade_count;
		s_tag_block powered_seats_block;
		s_tag_block weapons_block;
		s_tag_block seats_block;
		float boost_peak_power;
		float boost_rise_power;
		float boost_peak_time;
		float boost_fall_power;
		float boost_dead_time;
		float lipsync_attack_weight;
		float lipsync_decay_weight;
		char moving_turning_speed[4]; // ???
		char flags3[4]; // ???
		char stationary_turning_threshold[4]; // ???
		float jump_velocity;
		float maximum_soft_landing_time;
		float maximum_hard_landing_time;
		float minimum_soft_landing_velocity;
		float minimum_hard_landing_velocity;
		float maximum_hard_landing_velocity;
		float death_hard_landing_velocity;
		float stun_duration;
		float standing_camera_height;
		float crouching_camera_height;
		float crouch_transition_time;
		char camera_interpolation_start[4]; // ???
		char camera_interpolation_end[4]; // ???
		float camera_forward_movement_scale;
		float camera_side_movement_scale;
		float camera_vertical_movement_scale;
		float camera_exclusion_distance;
		float autoaim_width;
		char lock_on_flags[4]; // ???
		float lock_on_distance;
		short physics_control_node_index;
		short unknown22;
		float cosine_stationary_turning_threshold;
		float crouch_transition_velocity;
		short pelvis_node_index;
		short head_node_index;
		float headshot_acceleration_scale;
		s_tag_reference area_damage_effect;
		char flags4[4]; // ???
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
		s_tag_block contact_points_block;
		s_tag_reference reanimation_character;
		s_tag_reference death_spawn_character;
		short death_spawn_count;
		short unknown27;
	};
}
