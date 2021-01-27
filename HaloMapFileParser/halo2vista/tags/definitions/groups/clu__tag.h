#pragma once

#include "../tag_layouts.h"

namespace clu__tag
{
	struct background_sounds_block
	{
		short type_index;
		short unknown;
	};

	struct sound_environments_block
	{
		short type_index;
		short unknown;
	};

	struct cluster_centroids_block
	{
		float centroid_x;
		float centroid_y;
		float centroid_z;
	};

	struct weather_properties_block
	{
		short type_index;
		short unknown;
	};

	struct atmospheric_fog_properties_block
	{
		short type_index;
		short unknown;
	};

	struct cluster_data_block
	{
		s_tag_reference bsp;
		s_tag_block background_sounds_block;
		s_tag_block sound_environments_block;
		long bsp_checksum;
		s_tag_block cluster_centroids_block;
		s_tag_block weather_properties_block;
		s_tag_block atmospheric_fog_properties_block;
	};

	struct background_sound_palette_block
	{
		char name[32];
		s_tag_reference background_sound;
		s_tag_reference inside_cluster_sound;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		float cutoff_distance;
		char scale_flags[4]; // ???
		float interior_scale;
		float portal_scale;
		float exterior_scale;
		float interpolation_speed;
		char unknown6[4]; // ???
		char unknown7[4]; // ???
	};

	struct sound_environment_palette_block
	{
		char name[32];
		s_tag_reference sound_environment;
		float cutoff_distance;
		float interpolation_speed;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
	};

	struct weather_palette_block
	{
		char name[32];
		s_tag_reference weather_system;
		short unknown;
		short unknown2;
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		s_tag_reference wind;
		float wind_direction_i;
		float wind_direction_j;
		float wind_direction_k;
		float wind_magnitude;
		char unknown11[4]; // ???
		char wind_scale_function[32];
	};

	struct mixers_block
	{
		char unknown[4]; // ???
		char atmospheric_fog_source[4]; // ???
		char interpolator[4]; // ???
		short unknown2;
		short unknown3;
	};

	struct atmospheric_fog_palette_block
	{
		char name[4]; // ???
		char color[12]; // ???
		float spread_distance;
		char unknown[4]; // ???
		float maximum_density;
		float start_distance;
		float opaque_distance;
		char color2[12]; // ???
		char unknown2[4]; // ???
		float maximum_density2;
		float start_distance2;
		float opaque_distance2;
		char unknown3[4]; // ???
		char planar_color[12]; // ???
		float planar_max_density;
		float planar_override_amount;
		float planar_min_distance_bias;
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
		char patchy_color[12]; // ???
		char unknown15[4]; // ???
		char unknown16[4]; // ???
		char unknown17[4]; // ???
		float patchy_density_min;
		float patchy_density_max;
		float patchy_distance_min;
		float patchy_distance_max;
		char unknown18[4]; // ???
		char unknown19[4]; // ???
		char unknown20[4]; // ???
		char unknown21[4]; // ???
		char unknown22[4]; // ???
		char unknown23[4]; // ???
		char unknown24[4]; // ???
		char unknown25[4]; // ???
		s_tag_reference patchy_fog;
		s_tag_block mixers_block;
		float amount;
		float threshold;
		float brightness;
		float gamma_power;
		short camera_immersion_flags;
		short unknown26;
	};

	struct group
	{
		s_tag_block cluster_data_block;
		s_tag_block background_sound_palette_block;
		s_tag_block sound_environment_palette_block;
		s_tag_block weather_palette_block;
		s_tag_block atmospheric_fog_palette_block;
	};
}
