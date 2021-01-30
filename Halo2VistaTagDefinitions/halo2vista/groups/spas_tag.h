#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace spas_tag
{
	struct parameters_block
	{
		char name[4]; // ???
		s_data_reference explanation;
		short type;
		short flags;
		s_tag_reference default_bitmap;
		float default_constant_value;
		char default_constant_color[12]; // ???
		short source_extern;
		short unknown;
	};

	struct address_state_block
	{
		short u_address_mode;
		short v_address_mode;
		short w_address_mode;
		short unknown;
	};

	struct filter_state_block
	{
		short mag_filter;
		short min_filter;
		short mip_filter;
		short unknown;
		float mipmap_bias;
		short max_mipmap_index;
		short anisotropy;
	};

	struct kill_state_block
	{
		short flags;
		short unknown;
		short colorkey_mode;
		short unknown2;
		char colorkey_color[2]; // ???
	};

	struct misc_state_block
	{
		short component_sign_flags;
		short unknown;
		char border_color[2]; // ???
	};

	struct constants_block
	{
		char source_parameter[4]; // ???
		short unknown;
		short constant;
	};

	struct textures_block
	{
		char source_parameter[4]; // ???
		short source_extern;
		short unknown;
		short unknown2;
		short mode;
		short unknown3;
		short dot_mapping;
		short input_stage;
		short unknown4;
		s_tag_block address_state_block;
		s_tag_block filter_state_block;
		s_tag_block kill_state_block;
		s_tag_block misc_state_block;
		s_tag_block constants_block;
	};

	struct vs_constants_block
	{
		char source_parameter[4]; // ???
		short scale_by_texture_stage;
		short register_bank;
		short register_index;
		short component_mask;
	};

	struct channel_state_block
	{
		short flags;
		short unknown;
	};

	struct alpha_blend_state_block
	{
		short blend_function;
		short blend_src_factor;
		short blend_dst_factor;
		short unknown;
		char blend_color[4]; // ???
		short logic_op_flags;
		short unknown2;
	};

	struct alpha_test_state_block
	{
		short flags;
		short alpha_compare_function;
		short alpha_test_ref;
		short unknown;
	};

	struct depth_state_block
	{
		short mode;
		short depth_compare_function;
		short flags;
		short unknown;
		float depth_bias_slope_scale;
		float depth_bias;
	};

	struct cull_state_block
	{
		short mode;
		short front_face;
	};

	struct fill_state_block
	{
		short flags;
		short fill_mode;
		short back_fill_mode;
		short unknown;
		float line_width;
	};

	struct misc_state2_block
	{
		short flags;
		short unknown;
		char fog_color[2]; // ???
	};

	struct constants2_block
	{
		char source_parameter[4]; // ???
		short unknown;
		short constant;
	};

	struct implementations_block
	{
		short flags;
		short unknown;
		s_tag_block textures_block;
		s_tag_reference vertex_shader;
		s_tag_block vs_constants_block;
		s_data_reference pixel_shader_code;
		short channels;
		short alpha_blend;
		short depth;
		short unknown2;
		s_tag_block channel_state_block;
		s_tag_block alpha_blend_state_block;
		s_tag_block alpha_test_state_block;
		s_tag_block depth_state_block;
		s_tag_block cull_state_block;
		s_tag_block fill_state_block;
		s_tag_block misc_state2_block;
		s_tag_block constants2_block;
		s_tag_reference pixel_shader;
	};

	struct constant_register_defaults_block
	{
		long defaults;
	};

	struct pixel_shader_block
	{
		long pixel_shader_handle__runtime_;
		long pixel_shader_handle__runtime_2;
		long pixel_shader_handle__runtime_3;
		s_tag_block constant_register_defaults_block;
		s_data_reference compiled_shader;
		s_data_reference compiled_shader2;
		s_data_reference compiled_shader3;
	};

	struct pixel_shader_switch_extern_map_block
	{
		char switch_parameter;
		char case_scalar;
	};

	struct pixel_shader_index_block_block
	{
		char pixel_shader_index;
	};

	struct implementations2_block
	{
		short textures_block_index_data;
		short render_states_block_index_data;
		short texture_states_block_index_data;
		short unknown;
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
		char unknown56[4]; // ???
		char unknown57[4]; // ???
		char unknown58[4]; // ???
		char unknown59[4]; // ???
		char unknown60[4]; // ???
		short unknown61;
		short ps_fragments_block_index_data;
		short ps_permutations_block_index_data;
		short ps_combiners_block_index_data;
		s_tag_reference vertex_shader;
		char unknown62[4]; // ???
		char unknown63[4]; // ???
		char unknown64[4]; // ???
		char unknown65[4]; // ???
		char unknown66[4]; // ???
		char unknown67[4]; // ???
		short default_render_states_block_index_data;
		short render_state_externs_block_index_data;
		short state_externs_block_index_data;
		short constant_externs_block_index_data;
		short constant_externs_block_index_data2;
		short ps_constants_block_index_data;
		short vs_constants_block_index_data;
		short pixel_constant_info_block_index_data;
		short vertex_constant_info_block_index_data;
		short render_state_info_block_index_data;
		short texture_state_info_block_index_data;
		s_tag_block pixel_shader_block;
		s_tag_block pixel_shader_switch_extern_map_block;
		s_tag_block pixel_shader_index_block_block;
	};

	struct textures2_block
	{
		char bitmap_parameter_index;
		char bitmap_extern_index;
		char texture_stage_index;
		char flags;
	};

	struct render_states_block
	{
		char state_index;
		long state_value;
	};

	struct texture_states_block
	{
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
	};

	struct ps_fragments_block
	{
		char switch_parameter_index;
		short permutations_index_block_index_data;
	};

	struct ps_permutations_block
	{
		short enum_index;
		short flags;
		short combiners_block_index_data;
	};

	struct ps_combiners_block
	{
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char constant_color0[4]; // ???
		char constant_color1[4]; // ???
		char color_a_register_ptr_index;
		char color_b_register_ptr_index;
		char color_c_register_ptr_index;
		char color_d_register_ptr_index;
		char alpha_a_register_ptr_index;
		char alpha_b_register_ptr_index;
		char alpha_c_register_ptr_index;
		char alpha_d_register_ptr_index;
	};

	struct externs_block
	{
		short unknown;
		char unknown2;
		char extern_index;
	};

	struct constants3_block
	{
		char parameter_name[4]; // ???
		char component_mask;
		char scale_by_texture_stage;
		char function_index;
	};

	struct constant_info_block
	{
		char parameter_name[4]; // ???
		short unknown;
		char unknown2;
	};

	struct postprocess_definition_block
	{
		s_tag_block implementations2_block;
		s_tag_block textures2_block;
		s_tag_block render_states_block;
		s_tag_block texture_states_block;
		s_tag_block ps_fragments_block;
		s_tag_block ps_permutations_block;
		s_tag_block ps_combiners_block;
		s_tag_block externs_block;
		s_tag_block constants3_block;
		s_tag_block constant_info_block;
		char unknown[4]; // ???
		char unknown2[4]; // ???
	};

	struct group
	{
		s_data_reference documentation;
		s_tag_block parameters_block;
		short unknown2;
		short unknown3;
		s_tag_block implementations_block;
		s_tag_block postprocess_definition_block;
	};
}
