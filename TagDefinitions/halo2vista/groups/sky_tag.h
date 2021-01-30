#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace sky_tag
{
	struct cube_map_block
	{
		s_tag_reference cube_map_reference;
		float power_scale;
	};

	struct atmospheric_fog_block
	{
		float color_r;
		float color_g;
		float color_b;
		float maximum_density;
		float start_distance;
		float opaque_distnace;
	};

	struct secondary_fog_block
	{
		float color_r;
		float color_g;
		float color_b;
		float maximum_density;
		float start_distance;
		float opaque_distance;
	};

	struct sky_fog_block
	{
		float color_r;
		float color_g;
		float color_b;
		float density;
	};

	struct patchy_fog_block
	{
		float color_r;
		float color_g;
		float color_b;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		float density_min;
		float density_max;
		float distance_max;
		float distance_max2;
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		char unknown11[4]; // ???
		s_tag_reference patchy_fog;
	};

	struct fog_block
	{
		float color_r;
		float color_g;
		float color_b;
		float maximum_density;
		float start_distnace;
		float opaque_distnace;
		char cone_min[4]; // ???
		char cone_max[4]; // ???
		float atmospheroc_fog_influence;
		float secondary_fog_influence;
		float sky_fog_influence;
	};

	struct fog_opposite_block
	{
		float color_r;
		float color_g;
		float color_b;
		float maximum_density;
		float start_distnace;
		float opaque_distnace;
		char cone_min[4]; // ???
		char cone_max[4]; // ???
		float atmospheroc_fog_influence;
		float secondary_fog_influence;
		float sky_fog_influence;
	};

	struct radiosity_block
	{
		char flags[4]; // ???
		float color_r;
		float color_g;
		float color_b;
		float power;
		float test_distance;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char diameter[4]; // ???
	};

	struct lights_block
	{
		float direction_vector_i;
		float direction_vector_j;
		float direction_vector_k;
		char direction_y[4]; // ???
		char direction_p[4]; // ???
		s_tag_reference lens_flare;
		s_tag_block fog_block;
		s_tag_block fog_opposite_block;
		s_tag_block radiosity_block;
	};

	struct shader_functions_block
	{
		char unknown[4]; // ???
		char global_functions_name[32];
	};

	struct animations_block
	{
		short animation_index;
		short unknown;
		float period;
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
		s_tag_reference animation_graph;
		char flags[4]; // ???
		float render_model_scale;
		float movement_scale;
		s_tag_block cube_map_block;
		float indoor_ambient_color_r;
		float indoor_ambient_color_g;
		float indoor_ambient_color_b;
		char unknown2[4]; // ???
		float outdoor_ambient_color_r;
		float outdoor_ambient_color_g;
		float outdoor_ambient_color_b;
		char unknown3[4]; // ???
		float fog_spread_distance;
		s_tag_block atmospheric_fog_block;
		s_tag_block secondary_fog_block;
		s_tag_block sky_fog_block;
		s_tag_block patchy_fog_block;
		float bloom_override_amount;
		float bloom_override_threshold;
		float bloom_override_brightness;
		float bloom_override_gamma_power;
		s_tag_block lights_block;
		char global_sky_rotation[4]; // ???
		s_tag_block shader_functions_block;
		s_tag_block animations_block;
		char unknown14[4]; // ???
		char unknown15[4]; // ???
		char unknown16[4]; // ???
		float clear_color_r;
		float clear_color_g;
		float clear_color_b;
	};
}
