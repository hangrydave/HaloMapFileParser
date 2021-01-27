#pragma once

#include "../tag_layouts.h"

namespace prtm_tag
{
	struct locations_block
	{
		char marker_name[999]; // ???
	};

	struct emitters_block
	{
		s_tag_reference particle_physics;
		short input;
		short range;
		short output_modifier_kind;
		short output_modifier;
		s_data_reference particle_emission_rate;
		short input2;
		short range2;
		short output_modifier_kind2;
		short output_modifier2;
		s_data_reference particle_lifespan__sec_;
		char output_modifier3[4]; // ???
		char output_modifier4[4]; // ???
		s_data_reference particle_velocity__world_units_per_sec_;
		char output_modifier5[4]; // ???
		char output_modifier6[4]; // ???
		s_data_reference particle_angular_velocity__degrees_per_sec_;
		char output_modifier7[4]; // ???
		char output_modifier8[4]; // ???
		s_data_reference particle_size__world_units_;
		char output_modifier9[4]; // ???
		char output_modifier10[4]; // ???
		s_data_reference particle_tint;
		char output_modifier11[4]; // ???
		char output_modifier12[4]; // ???
		s_data_reference particle_alpha;
		char emission_shape[4]; // ???
		char output_modifier13[4]; // ???
		char output_modifier14[4]; // ???
		s_data_reference emission_radius__world_units_;
		char output_modifier15[4]; // ???
		char output_modifier16[4]; // ???
		s_data_reference emission_angle__degrees_;
		float translation_offset_x;
		float translation_offset_y;
		float translation_offset_z;
		float relative_direction_yaw;
		float relative_direction_pitch;
		float unknown;
		float unknown2;
	};

	struct attached_particle_system_block
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

	struct models_block
	{
		char model_name[4]; // ???
		short index_start;
		short index_count;
	};

	struct raw_vertices_block
	{
		float pos_x;
		float pos_y;
		float pos_z;
		char normal_i[4]; // ???
		char normal_j[4]; // ???
		char normal_k[4]; // ???
		char tangent_i[4]; // ???
		char tangent_j[4]; // ???
		char tangent_k[4]; // ???
		char binormal_i[4]; // ???
		char binormal_j[4]; // ???
		char binormal_k[4]; // ???
		float texture_coord_x;
		float texture_coord_y;
	};

	struct indices_block
	{
		short index;
	};

	struct cached_data_block
	{
		char vertex_buffer[999]; // ???
	};

	struct resources_block
	{
		char type;
		char unknown;
		short unknown2;
		short primary_locator;
		short secondary_locator;
		char resource_data_size[4]; // ???
		char resource_data_offset[4]; // ???
	};

	struct group
	{
		char flags[4]; // ???
		char orientation[4]; // ???
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		s_tag_reference shader;
		short input_variable;
		short range_variable;
		short output_modifier;
		short output_modifier_input;
		s_data_reference scale_x;
		short input_variable2;
		short range_variable2;
		short output_modifier2;
		short output_modifier_input2;
		s_data_reference scale_y;
		short input_variable3;
		short range_variable3;
		short output_modifier3;
		short output_modifier_input3;
		s_data_reference scale_z;
		short input_variable4;
		short range_variable4;
		short output_modifier4;
		short output_modifier_input4;
		s_data_reference rotation;
		s_tag_reference collision_effect;
		s_tag_reference death_effect;
		s_tag_block locations_block;
		s_tag_block attached_particle_system_block;
		s_tag_block models_block;
		s_tag_block raw_vertices_block;
		s_tag_block indices_block;
		s_tag_block cached_data_block;
		long resource_block_offset;
		char resource_block_size[4]; // ???
		char section_data_size[4]; // ???
		char resource_data_size[4]; // ???
		s_tag_block resources_block;
		s_tag_reference owner_tag;
		short owner_tag_section_offset;
		short unknown13;
		long unknown14;
		char unknown15[4]; // ???
		char unknown16[4]; // ???
		char unknown17[4]; // ???
		char unknown18[4]; // ???
		char unknown19[4]; // ???
		char unknown20[4]; // ???
		char unknown21[4]; // ???
	};
}
