#pragma once

#include "../tag_layouts.h"

namespace garb_tag
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
		s_tag_reference unknown12;
		s_tag_reference collision_sound;
		s_tag_block predicted_bitmaps_block;
		s_tag_reference detonation_damage_effect;
		char detonation_delay[8]; // ???
		s_tag_reference detonating_effect;
		s_tag_reference detonation_effect;
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
		char unknown25[4]; // ???
		char unknown26[4]; // ???
		char unknown27[4]; // ???
		char unknown28[4]; // ???
		char unknown29[4]; // ???
		char unknown30[4]; // ???
		char unknown31[4]; // ???
		char unknown32[4]; // ???
		char unknown33[4]; // ???
		char unknown34[4]; // ???
		char unknown35[4]; // ???
		char unknown36[4]; // ???
		char unknown37[4]; // ???
		char unknown38[4]; // ???
		char unknown39[4]; // ???
		char unknown40[4]; // ???
		char unknown41[4]; // ???
		char unknown42[4]; // ???
		char unknown43[4]; // ???
		char unknown44[4]; // ???
		char unknown45[4]; // ???
		char unknown46[4]; // ???
		char unknown47[4]; // ???
		char unknown48[4]; // ???
		char unknown49[4]; // ???
		char unknown50[4]; // ???
		char unknown51[4]; // ???
		char unknown52[4]; // ???
		char unknown53[4]; // ???
		char unknown54[4]; // ???
		char unknown55[4]; // ???
	};
}
