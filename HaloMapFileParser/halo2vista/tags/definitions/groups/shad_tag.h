#pragma once

#include "../tag_layouts.h"

namespace shad_tag
{
	struct runtime_properties_block
	{
		s_tag_reference diffuse_map;
		s_tag_reference lightmap_emissive_map;
		char lightmap_emissive_color[12]; // ???
		float lightmap_emissive_power;
		float lightmap_resolution_scale;
		float lightmap_half_life;
		float lightmap_diffuse_scale;
		s_tag_reference alpha_test_map;
		s_tag_reference translucent_map;
		char lightmap_transparent_color[12]; // ???
		float lightmap_transparent_alpha;
		float lightmap_foliage_scale;
	};

	struct animation_properties_block
	{
		short type;
		short unknown;
		char input_name[4]; // ???
		char range_name[4]; // ???
		float time_period;
		s_data_reference animation_function;
	};

	struct parameters_block
	{
		char name[4]; // ???
		short type;
		short unknown;
		s_tag_reference bitmap;
		float const_value;
		char const_color[12]; // ???
		s_tag_block animation_properties_block;
	};

	struct bitmaps_block
	{
		s_tag_reference bitmap_group;
		long bitmap_index;
		float log_bitmap_dimension;
	};

	struct pixel_constants_block
	{
		char color[999]; // ???
	};

	struct vertex_constants_block
	{
		s_vector3 vector;
		float w;
	};

	struct levels_of_detail_block
	{
		long available_layer_flags;
		short layers_block_index_data;
	};

	struct layers_block
	{
		short indices_block_index_data;
	};

	struct passes_block
	{
		short indices_block_index_data;
	};

	struct implementations_block
	{
		short bitmap_transforms_block_index_data;
		short render_states_block_index_data;
		short texture_states_block_index_data;
		short pixel_constants_block_index_data;
		short vertex_constants_block_index_data;
	};

	struct overlays_block
	{
		char input_name[4]; // ???
		char range_name[4]; // ???
		float time_period_in_seconds;
		s_data_reference function;
	};

	struct overlay_references_block
	{
		short overlay_index;
		short transform_index;
	};

	struct animated_parameters_block
	{
		short overlay_references_block_index_data;
	};

	struct animated_parameter_references_block
	{
		short unknown;
		char unknown2;
		char parameter_index;
	};

	struct bitmap_properties_block
	{
		short bitmap_index;
		short animated_parameter_index;
	};

	struct color_properties_block
	{
		char color[999]; // ???
	};

	struct value_properties_block
	{
		float value;
	};

	struct postprocess_definition_block
	{
		s_tag_reference shader_template;
		s_tag_block bitmaps_block;
		s_tag_block pixel_constants_block;
		s_tag_block vertex_constants_block;
		s_tag_block levels_of_detail_block;
		s_tag_block layers_block;
		s_tag_block passes_block;
		s_tag_block implementations_block;
		s_tag_block overlays_block;
		s_tag_block overlay_references_block;
		s_tag_block animated_parameters_block;
		s_tag_block animated_parameter_references_block;
		s_tag_block bitmap_properties_block;
		s_tag_block color_properties_block;
		s_tag_block value_properties_block;
		char unknown[4]; // ???
		char unknown2[4]; // ???
	};

	struct predicted_resources_block
	{
		short type;
		short resource_index;
		s_tag_reference tag_index;
	};

	struct postprocess_properties_block
	{
		long bitmap_group_index;
	};

	struct group
	{
		s_tag_reference template_;
		char material_name[4]; // ???
		s_tag_block runtime_properties_block;
		short type_;
		short flags;
		s_tag_block parameters_block;
		s_tag_block postprocess_definition_block;
		char unknown19[4]; // ???
		s_tag_block predicted_resources_block;
		s_tag_reference light_response;
		short shader_lod_bias;
		short specular_type;
		short lightmap_type;
		short unknown21;
		float lightmap_specular_brightness;
		float lightmap_ambient_bias;
		s_tag_block postprocess_properties_block;
		float added_depth_bias_offset;
		float added_depth_bias_slope_scale;
	};
}
