#include "../../pch.h"

#pragma once

#include "../structures.h"

namespace prt3_tag
{
	struct animation_properties_block
	{
		short type;
		short unknown;
		char input_name[4]; // ???
		char range_name[4]; // ???
		float time_period;
		s_data_reference animation_function;
	};

	struct shader_block
	{
		char name[4]; // ???
		short type;
		short unknown;
		s_tag_reference bitmap;
		float constant_value;
		char constant_color[12]; // ???
		s_tag_block animation_properties_block;
	};

	struct locations_block
	{
		char unknown[8]; // ???
		char unknown2[8]; // ???
		char unknown3[8]; // ???
		char unknown4[8]; // ???
		char unknown5[8]; // ???
		char unknown6[8]; // ???
		char unknown7[8]; // ???
		char unknown8[1]; // ???
		char marker_name[1]; // ???
	};

	struct emitters_block
	{
		s_tag_reference particle_physics;
		short input_variable;
		short range_variable;
		short output_modifier;
		short output_modifier_input;
		s_data_reference function;
		short input_variable2;
		short range_variable2;
		short output_modifier2;
		short output_modifier_input2;
		s_data_reference function2;
		short input_variable3;
		short range_variable3;
		short output_modifier3;
		short output_modifier_input3;
		s_data_reference function3;
		short input_variable4;
		short range_variable4;
		short output_modifier4;
		short output_modifier_input4;
		s_data_reference function4;
		short input_variable5;
		short range_variable5;
		short output_modifier5;
		short output_modifier_input5;
		s_data_reference function5;
		short input_variable6;
		short range_variable6;
		short output_modifier6;
		short output_modifier_input6;
		s_data_reference function6;
		short input_variable7;
		short range_variable7;
		short output_modifier7;
		short output_modifier_input7;
		s_data_reference function7;
		char emission_shape[4]; // ???
		short input_variable8;
		short range_variable8;
		short output_modifier8;
		short output_modifier_input8;
		s_data_reference function8;
		short input_variable9;
		short range_variable9;
		short output_modifier9;
		short output_modifier_input9;
		s_data_reference function9;
		char translational_offset[12]; // ???
		char relative_direction[8]; // ???
		float unknown;
		float unknown2;
	};

	struct attached_particle_systems_block
	{
		s_tag_reference particle;
		long location_index;
		short coordinate_system;
		short environment;
		short disposition;
		short camera_mode;
		short sort_bias;
		short flags;
		float lod_in_distance;
		float lod_feather_in_delta;
		char unknown[4]; // ???
		float lod_out_distance;
		float lod_feather_out_delta;
		char unknown2[4]; // ???
		s_tag_block emitters_block;
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

	struct group
	{
		char flags[4]; // ???
		char particle_billboard_style[4]; // ???
		short first_billboard_style;
		short sequence_count;
		s_tag_reference shader_template;
		s_tag_block shader_block;
		short input_variable;
		short range_variable;
		short output_modifier;
		short output_modifier_input;
		s_data_reference function;
		short input_variable2;
		short range_variable2;
		short output_modifier2;
		short output_modifier_input2;
		s_data_reference function2;
		short input_variable3;
		short range_variable3;
		short output_modifier3;
		short output_modifier_input3;
		s_data_reference function3;
		short input_variable4;
		short range_variable4;
		short output_modifier4;
		short output_modifier_input4;
		s_data_reference function4;
		short input_variable5;
		short range_variable5;
		short output_modifier5;
		short output_modifier_input5;
		s_data_reference function5;
		s_tag_reference collision_effect;
		s_tag_reference death_effect;
		s_tag_block locations_block;
		s_tag_block attached_particle_systems_block;
		s_tag_block postprocess_definition_block;
		char unknown21[4]; // ???
		char unknown22[4]; // ???
		char unknown23[4]; // ???
		char unknown24[4]; // ???
		float unknown25;
		float unknown26;
		float unknown27;
		float unknown28;
		float unknown29;
		float unknown30;
	};
}
