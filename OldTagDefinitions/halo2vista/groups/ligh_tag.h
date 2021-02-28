#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace ligh_tag
{
	struct brightness_animation_block
	{
		s_data_reference function;
	};

	struct color_animation_block
	{
		s_data_reference function;
	};

	struct gel_animation_block
	{
		s_data_reference dx_function;
		s_data_reference dy_function;
	};

	struct group
	{
		char flags[4]; // ???
		short type;
		short unknown;
		char size_modifer[8]; // ???
		float shadow_quality_bias;
		short shadow_tap_bias;
		short unknown2;
		float radius;
		float specular_radius;
		float near_width;
		float height_stretch;
		float field_of_view;
		float falloff_distance;
		float cutoff_distance;
		char interpolation_flags[4]; // ???
		char bloom_bounds[8]; // ???
		char specular_lower_bound[12]; // ???
		char specular_upper_bound[12]; // ???
		char diffuse_lower_bound[12]; // ???
		char diffuse_upper_bound[12]; // ???
		char brightness_bounds[8]; // ???
		s_tag_reference gel_map;
		short specular_mask;
		short unknown3;
		char unknown4[4]; // ???
		short falloff_function;
		short diffuse_contrast;
		short specular_contrast;
		short falloff_geometry;
		s_tag_reference lens_flare;
		float bounding_radius;
		s_tag_reference light_volume;
		short default_lightmap_setting;
		short unknown5;
		float lightmap_half_life;
		float lightmap_light_scale;
		float duration;
		short unknown6;
		short falloff_function2;
		short illumination_fade;
		short shadow_fade;
		short specular_fade;
		short unknown7;
		char flags2[4]; // ???
		s_tag_block brightness_animation_block;
		s_tag_block color_animation_block;
		s_tag_block gel_animation_block;
		s_tag_reference shader;
	};
}
