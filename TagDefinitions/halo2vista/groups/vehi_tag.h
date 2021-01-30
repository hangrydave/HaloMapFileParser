#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace vehi_tag
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

	struct gears_block
	{
		float minimum_torque;
		float maximum_torque;
		float peak_torque_scale;
		float past_peak_torque_exponent;
		float torque_at_maximum_angular_velocity;
		float torque_at_2x_maximum_angular_velocity;
		float minimum_torque2;
		float maximum_torque2;
		float peak_torque_scale2;
		float past_peak_torque_exponent2;
		float torque_at_maximum_angular_velocity2;
		float torque_at_2x_maximum_angular_velocity2;
		float minimum_time_to_up_shift;
		float engine_up_shift_scale;
		float gear_ratio;
		float minimum_time_to_down_shift;
		float engine_down_shift_scale;
	};

	struct anti_gravity_points_block
	{
		char marker_name[4]; // ???
		char flags[4]; // ???
		float antigrav_strength;
		float antigrav_offset;
		float antigrav_height;
		float antigrav_damp_factor;
		float antigrav_normal_k1;
		float antigrav_normal_k0;
		float radius;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		short unknown4;
		short damage_source_region_index;
		char damage_source_region_name[4]; // ???
		float default_state_error;
		float minor_damage_error;
		float medium_damage_error;
		float major_damage_error;
		float destroyed_state_error;
	};

	struct friction_points_block
	{
		char marker_name[4]; // ???
		char flags[4]; // ???
		float fraction_of_total_mass;
		float radius;
		float damaged_radius;
		short friction_type;
		short unknown;
		float moving_friction_velocity_differential;
		float e_brake_moving_friction;
		float e_brake_friction;
		float e_brake_moving_friction_velocity_differential;
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char collision_material_name[4]; // ???
		short collision_global_material_index;
		short model_state_destroyed;
		char region_name[4]; // ???
		short region_index;
		short unknown7;
	};

	struct phantom_shapes_block
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
		char multisphere_count[4]; // ???
		char flags[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		float x0;
		float x1;
		float y0;
		float y1;
		float z0;
		float z1;
		char runtime_code_pointer2[4]; // ???
		short size2;
		short count2;
		char user_data2[4]; // ???
		char number_of_spheres[4]; // ???
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
		char runtime_code_pointer3[4]; // ???
		short size3;
		short count3;
		char user_data3[4]; // ???
		char number_of_spheres2[4]; // ???
		s_vector3 sphere_02;
		float w_sphere_02;
		s_vector3 sphere_12;
		float w_sphere_12;
		s_vector3 sphere_22;
		float w_sphere_22;
		s_vector3 sphere_32;
		float w_sphere_32;
		s_vector3 sphere_42;
		float w_sphere_42;
		s_vector3 sphere_52;
		float w_sphere_52;
		s_vector3 sphere_62;
		float w_sphere_62;
		s_vector3 sphere_72;
		float w_sphere_72;
		char runtime_code_pointer4[4]; // ???
		short size4;
		short count4;
		char user_data4[4]; // ???
		char number_of_spheres3[4]; // ???
		s_vector3 sphere_03;
		float w_sphere_03;
		s_vector3 sphere_13;
		float w_sphere_13;
		s_vector3 sphere_23;
		float w_sphere_23;
		s_vector3 sphere_33;
		float w_sphere_33;
		s_vector3 sphere_43;
		float w_sphere_43;
		s_vector3 sphere_53;
		float w_sphere_53;
		s_vector3 sphere_63;
		float w_sphere_63;
		s_vector3 sphere_73;
		float w_sphere_73;
		char runtime_code_pointer5[4]; // ???
		short size5;
		short count5;
		char user_data5[4]; // ???
		char number_of_spheres4[4]; // ???
		s_vector3 sphere_04;
		float w_sphere_04;
		s_vector3 sphere_14;
		float w_sphere_14;
		s_vector3 sphere_24;
		float w_sphere_24;
		s_vector3 sphere_34;
		float w_sphere_34;
		s_vector3 sphere_44;
		float w_sphere_44;
		s_vector3 sphere_54;
		float w_sphere_54;
		s_vector3 sphere_64;
		float w_sphere_64;
		s_vector3 sphere_74;
		float w_sphere_74;
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
		char flags3[4]; // ???
		short type;
		short control;
		float maximum_forward_speed;
		float maximum_reverse_speed;
		float speed_acceleration;
		float speed_deceleration;
		float maximum_left_turn;
		float maximum_right_turn__negative_;
		float wheel_circumference;
		float turn_rate;
		float blur_speed;
		short specific_type;
		short player_training_vehicle_type;
		char flip_message[4]; // ???
		float turn_scale;
		float speed_turn_penalty_power;
		float speed_turn_penalty;
		float maximum_left_slide;
		float maximum_right_slide;
		float slide_acceleration;
		float slide_deceleration;
		float minimum_flipping_angular_velocity;
		float maximum_flipping_angular_velocity;
		short vehicle_size;
		short unknown22;
		float fixed_gun_yaw;
		float fixed_gun_pitch;
		float overdampen_cusp_angle;
		float overdampen_exponent;
		float crouch_transition_time;
		float unknown23;
		float engine_moment;
		float engine_max_angular_velocity;
		s_tag_block gears_block;
		float flying_torque_scale;
		float seat_entrance_acceleration_scale;
		float seat_exit_acceleration_scale;
		float air_friction_deceleration;
		float thrust_scale;
		s_tag_reference suspension_sound;
		s_tag_reference crash_sound;
		s_tag_reference unknown25;
		s_tag_reference special_effect;
		s_tag_reference unknown_effect;
		char flags4[4]; // ???
		float ground_friction;
		float ground_depth;
		float ground_damp_factor;
		float ground_moving_friction;
		float ground_maximum_slope_0;
		float ground_maximum_slope_1;
		char unknown26[4]; // ???
		char unknown27[4]; // ???
		char unknown28[4]; // ???
		char unknown29[4]; // ???
		float anti_gravity_bank_lift;
		float steering_bank_reaction_scale;
		float gravity_scale;
		float radius;
		s_tag_block anti_gravity_points_block;
		s_tag_block friction_points_block;
		s_tag_block phantom_shapes_block;
	};
}
