#pragma once

#include "../tag_layouts.h"

namespace stem_tag
{
	struct properties_block
	{
		short property;
		short unknown;
		char parameter_name[2]; // ???
	};

	struct parameters_block
	{
		char name[4]; // ???
		s_data_reference explanation;
		short type;
		short flags;
		s_tag_reference default_bitmap;
		float default_const_value;
		char default_const_color[12]; // ???
		short bitmap_type;
		short unknown;
		short bitmap_animation_flags;
		short unknown2;
		float bitmap_scale;
	};

	struct categories_block
	{
		char name[4]; // ???
		s_tag_block parameters_block;
	};

	struct pass_block
	{
		short layer;
		short unknown;
		s_tag_reference pass;
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
	};

	struct lods_block
	{
		float projected_diameter;
		s_tag_block pass_block;
	};

	struct unknown7_block
	{
		long unknown;
	};

	struct unknown9_block
	{
		long unknown;
	};

	struct levels_of_detail_block
	{
		short layers_block_index_data;
		long available_layers;
		float projected_height_percentage;
	};

	struct layers_block
	{
		short indices_block_index_data;
	};

	struct passes_block
	{
		s_tag_reference pass;
		short implementation_block_index_data;
	};

	struct implementations_block
	{
		short bitmap_block_index_data;
		short pixel_constants_block_index_data;
		short vertex_constants_block_index_data;
	};

	struct remappings_block
	{
		short unknown;
		char unknown2;
		char source_index;
	};

	struct postprocess_definition_block
	{
		s_tag_block levels_of_detail_block;
		s_tag_block layers_block;
		s_tag_block passes_block;
		s_tag_block implementations_block;
		s_tag_block remappings_block;
	};

	struct group
	{
		s_data_reference documentation;
		char default_material_name[4]; // ???
		short unknown;
		short flags;
		s_tag_block properties_block;
		s_tag_block categories_block;
		s_tag_reference light_response;
		s_tag_block lods_block;
		s_tag_block unknown7_block;
		s_tag_block unknown9_block;
		s_tag_reference aux_1_shader;
		short aux_1_layer;
		short unknown11;
		s_tag_reference aux_2_shader;
		short aux_2_layer;
		short unknown12;
		s_tag_block postprocess_definition_block;
	};
}
