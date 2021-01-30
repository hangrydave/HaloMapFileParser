#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace char_tag
{
	struct variants_block
	{
		char variant_name[4]; // ???
		short variant_index;
		short unknown;
		char variant_designator[2]; // ???
	};

	struct general_properties_block
	{
		char general_flags[4]; // ???
		short type;
		short unknown;
		float scariness;
	};

	struct vitality_properties_block
	{
		char vitality_flags[4]; // ???
		float normal_body_vitality;
		float normal_shield_vitality;
		float legendary_body_vitality;
		float legendary_shield_vitality;
		float body_recharge_fraction;
		float soft_ping_threshold__with_shields_;
		float soft_ping_threshold__no_shields_;
		float soft_ping_min_interrupt_time;
		float hard_ping_threshold__with_shields_;
		float hard_ping_threshold__no_shields_;
		float hard_ping_min_interrupt_time;
		float current_damage_decay_delay;
		float current_damage_decay_time;
		float recent_damage_decay_delay;
		float recent_damage_decay_time;
		float body_recharge_delay_time;
		float body_recharge_time;
		float shield_recharge_delay_time;
		float shield_recharge_time;
		float stun_threshold;
		char stun_time_bounds[8]; // ???
		float extended_shield_damage_threshold__;
		float extended_body_damage_threshold__;
		float suicide_radius;
		float runtime_body_recharge_velocity;
		float runtime_shield_recharge_velocity;
	};

	struct placement_properties_block
	{
		char placement_flags[4]; // ???
		float few_upgrade_chance__easy_;
		float few_upgrade_chance__normal_;
		float few_upgrade_chance__heroic_;
		float few_upgrade_chance__legendary_;
		float normal_upgrade_chance__easy_;
		float normal_upgrade_chance__normal_;
		float normal_upgrade_chance__heroic_;
		float normal_upgrade_chance__legendary_;
		float many_upgrade_chance__easy_;
		float many_upgrade_chance__normal_;
		float many_upgrade_chance__heroic_;
		float many_upgrade_chance__legendary_;
	};

	struct perception_properties_block
	{
		char perception_flags[4]; // ???
		float max_vision_distance;
		char central_vision_angle[4]; // ???
		char max_vision_angle[4]; // ???
		char peripheral_vision_angle[4]; // ???
		float peripheral_distance;
		float hearing_distance;
		float notice_projectile_chance;
		float notice_vehicle_chance;
		float combat_perception_time;
		float guard_perception_time;
		float non_combat_perception_time;
		float first_ack__surprise_distance;
	};

	struct look_properties_block
	{
		char maximum_aiming_deviation[8]; // ???
		char maximum_looking_deviation[8]; // ???
		char runtime_aiming_deviation_cosines[8]; // ???
		char runtime_looking_deviation_cosines[8]; // ???
		char non_combat_look_delta_l[4]; // ???
		char non_combat_look_delta_r[4]; // ???
		char combat_look_delta_l[4]; // ???
		char combat_look_delta_r[4]; // ???
		char noncombat_idle_looking[8]; // ???
		char noncombat_idle_aiming[8]; // ???
		char combat_idle_looking[8]; // ???
		char combat_idle_aiming[8]; // ???
	};

	struct movement_properties_block
	{
		char flags[4]; // ???
		float pathfinding_radius;
		float destination_radius;
		float dive_grenade_chance;
		short obstacle_leap_min_size;
		short obstacle_leap_max_size;
		short obstacle_ignore_size;
		short obstacle_smashable_size;
		short unknown;
		short jump_height;
		char movement_hint_flags[4]; // ???
		float throttle_scale;
	};

	struct swarm_properties_block
	{
		short scatter_killed_count;
		short unknown;
		float scatter_radius;
		float scatter_time;
		float hound_min_distance;
		float hound_max_distance;
		float perlin_offset_scale;
		char offset_period[8]; // ???
		float perlin_idle_movement_threshold;
		float perlin_combat_movement_threshold;
	};

	struct ready_properties_block
	{
		char ready_time_bounds[999]; // ???
	};

	struct engage_properties_block
	{
		char flags[4]; // ???
		float crouch_danger_threshold;
		float stand_danger_threshold;
		float fight_danger_move_threshold;
	};

	struct charge_properties_block
	{
		char charge_flags[4]; // ???
		float melee_consider_range;
		float melee_chance;
		float melee_attack_range;
		float melee_abort_range;
		float melee_attack_timeout;
		float melee_attack_delay_timer;
		char melee_leap_range[8]; // ???
		float melee_leap_chance;
		float ideal_leap_velocity;
		float max_leap_velocity;
		float melee_leap_ballistic;
		float melee_delay_timer;
		s_tag_reference berserk_weapon;
	};

	struct evasion_properties_block
	{
		float evasion_danger_threshold;
		float evasion_delay_timer;
		float evasion_chance;
		float evasion_proximity_threshold;
		float dive_retreat_chance;
	};

	struct cover_properties_block
	{
		char cover_flags[4]; // ???
		char hide_behind_cover_time[8]; // ???
		float cover_vitality_threshold;
		float cover_shield_fraction;
		float cover_check_delay;
		float emerge_from_cover_when_shielded;
		float cover_danger_threshold;
		float danger_upper_threshold;
		char cover_chance[8]; // ???
		float proximity_self_preserve;
		float disallow_cover_distance;
		float proximity_melee_distance;
		float unreachable_enemy_danger_threshold;
		float scary_target_threshold;
	};

	struct retreat_properties_block
	{
		char retreat_flags[4]; // ???
		float shield_threshold;
		float scary_target_threshold;
		float danger_threshold;
		float proximity_threshold;
		char min_max_forced_cower_time_bounds[8]; // ???
		char min_max_cower_time_bounds[8]; // ???
		float proximity_ambush_threshold;
		float awareness_ambush_threshold;
		float leader_dead_retreat_chance;
		float peer_dead_retreat_chance;
		float second_peer_dead_retreat_chance;
		char zigzag_angle[4]; // ???
		float zigzag_period;
		float retreat_grenade_chance;
		s_tag_reference backup_weapon;
	};

	struct search_properties_block
	{
		char search_flags[4]; // ???
		char search_time[8]; // ???
		char uncover_distance_bounds[8]; // ???
	};

	struct pre_search_properties_block
	{
		char pre_search_flags[4]; // ???
		char min_presearch_time[8]; // ???
		char max_presearch_time[8]; // ???
		float min_certainty_radius;
		float deprecated;
		char min_suppressing_time[4]; // ???
	};

	struct idle_properties_block
	{
		char idle_flags[4]; // ???
		char idle_pose_delay_time[4]; // ???
	};

	struct vocalization_properties_block
	{
		float look_comment_time;
		float look_long_comment_time;
	};

	struct boarding_properties_block
	{
		char flags[4]; // ???
		float max_distance;
		float abort_distance;
		float max_speed;
	};

	struct boss_properties_block
	{
		char boss_flags[4]; // ???
		float flurry_damage_threshold;
		float flurry_time;
	};

	struct firing_patterns_block
	{
		float rate_of_fire;
		float target_tracking;
		float target_leading;
		char unknown[4]; // ???
		char unknown2[13]; // ???
		float burst_origin_radius;
		char burst_origin_angle[4]; // ???
		char burst_return_length[8]; // ???
		char burst_return_angle[4]; // ???
		char burst_duration[8]; // ???
		char burst_separation[8]; // ???
		float weapon_damage_modifier;
		char projectile_error[4]; // ???
		char burst_angular_velocity[4]; // ???
		char maximum_error_angle[4]; // ???
	};

	struct weapons_properties_block
	{
		char weapons_flags[4]; // ???
		s_tag_reference weapon;
		float maximum_firing_range;
		float minimum_firing_range;
		char normal_combat_range[8]; // ???
		float bombardment_range;
		float max_special_target_distance;
		char timid_combat_range[8]; // ???
		char aggressive_combat_range[8]; // ???
		float super_ballistic_range;
		char ballistic_firing_bounds[8]; // ???
		char ballistic_fraction_bounds[8]; // ???
		char first_burst_delay_time[8]; // ???
		float surprise_delay_time;
		float surprise_fire_wildly_time;
		float death_fire_wildly_chance;
		float death_fire_wildly_time;
		s_vector3 custom_stand_gun_offset;
		s_vector3 custom_crouch_gun_offset;
		short special_fire_mode;
		short special_fire_situation;
		float special_fire_chance;
		float special_fire_delay;
		float special_damage_modifier;
		char special_projectile_error[4]; // ???
		char drop_weapon_loaded[8]; // ???
		char drop_weapon_ammo[4]; // ???
		char normal_accuracy_bounds[8]; // ???
		float normal_accuracy_time;
		char heroic_accuracy_bounds[8]; // ???
		float heroic_accuracy_time;
		char legendary_accuracy_bounds[8]; // ???
		float legendary_accuracy_time;
		s_tag_block firing_patterns_block;
		s_tag_reference weapon_melee_damage;
	};

	struct firing_patterns2_block
	{
		float rate_of_fire;
		float target_tracking;
		float target_leading;
		char unknown[4]; // ???
		char unknown2[13]; // ???
		float burst_origin_radius;
		char burst_origin_angle[4]; // ???
		char burst_return_length[8]; // ???
		char burst_return_angle[4]; // ???
		char burst_duration[8]; // ???
		char burst_separation[8]; // ???
		float weapon_damage_modifier;
		char projectile_error[4]; // ???
		char burst_angular_velocity[4]; // ???
		char maximum_error_angle[4]; // ???
	};

	struct firing_pattern_properties_block
	{
		s_tag_reference weapon;
		s_tag_block firing_patterns2_block;
	};

	struct grenades_properties_block
	{
		char grenades_flags[4]; // ???
		short grenade_type;
		short trajectory_type;
		short unknown;
		short minimum_enemy_count;
		float enemy_radius;
		float grenade_ideal_velocity;
		float grenade_velocity;
		char grenade_ranges[8]; // ???
		float collateral_damage_radius;
		float grenade_chance;
		float grenade_throw_delay;
		float grenade_uncover_chance;
		float anti_vehicle_grenade_chance;
		char grenade_count[4]; // ???
		float don_t_drop_grenades_chance;
	};

	struct vehicle_associations_block
	{
		s_tag_reference vehicle;
		s_tag_reference style;
		char vehicle_flags[4]; // ???
		float ai_pathfinding_radius;
		float ai_destination_radius;
		float ai_deceleration_distance;
		float ai_turning_radius;
		float ai_inner_turning_radius;
		float ai_ideal_turning_radius;
		char ai_banshee_steering_maximum[4]; // ???
		float ai_max_steering_angle;
		float ai_max_steering_delta;
		float ai_oversteering_scale;
		char ai_oversteering_bounds[8]; // ???
		float ai_side_slip_distance;
		float ai_avoidance_distance;
		float ai_min_urgency;
		float ai_throttle_maximum;
		float ai_goal_min_throttle_scale;
		float ai_turn_min_throttle_scale;
		float ai_direction_min_throttle_scale;
		float ai_acceleration_scale;
		float ai_throttle_blend;
		float theoretical_max_speed;
		float error_scale;
		char ai_allowable_aim_deviation_angle[4]; // ???
		float ai_charge_tight_angle_distance;
		float ai_charge_tight_angle;
		float ai_charge_repeat_timeout;
		float ai_charge_look_ahead_time;
		float ai_consider_distance;
		float ai_charge_abort_distance;
		float vehicle_ram_timeout;
		float ram_paralysis_time;
		float ai_cover_damage_threshold;
		float ai_cover_min_distance;
		float ai_cover_time;
		float ai_cover_min_boost_distance;
		float turtling_recent_damage_threshold;
		float turtling_min_time;
		float turtling_timeout;
		short obstacle_ignore_size;
		short unknown;
	};

	struct group
	{
		char character_flags[4]; // ???
		s_tag_reference parent_character;
		s_tag_reference unit;
		s_tag_reference creature;
		s_tag_reference style;
		s_tag_reference major_character;
		s_tag_block variants_block;
		s_tag_block general_properties_block;
		s_tag_block vitality_properties_block;
		s_tag_block placement_properties_block;
		s_tag_block perception_properties_block;
		s_tag_block look_properties_block;
		s_tag_block movement_properties_block;
		s_tag_block swarm_properties_block;
		s_tag_block ready_properties_block;
		s_tag_block engage_properties_block;
		s_tag_block charge_properties_block;
		s_tag_block evasion_properties_block;
		s_tag_block cover_properties_block;
		s_tag_block retreat_properties_block;
		s_tag_block search_properties_block;
		s_tag_block pre_search_properties_block;
		s_tag_block idle_properties_block;
		s_tag_block vocalization_properties_block;
		s_tag_block boarding_properties_block;
		s_tag_block boss_properties_block;
		s_tag_block weapons_properties_block;
		s_tag_block firing_pattern_properties_block;
		s_tag_block grenades_properties_block;
		s_tag_block vehicle_associations_block;
	};
}
