#pragma once

#include "../tag_layouts.h"

namespace weat_tag
{
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

	struct particle_system_block
	{
		s_tag_reference sprites;
		float view_box_width;
		float view_box_height;
		float view_box_depth;
		float exclusion_radius;
		float max_velocity;
		float min_mass;
		float max_mass;
		float min_size;
		float max_size;
		long maximum_number_of_particles;
		float initial_velocity_i;
		float initial_velocity_j;
		float initial_velocity_k;
		char unknown[4]; // ???
		long resource_block_offset;
		char resource_block_size[4]; // ???
		char section_data_size[4]; // ???
		char resource_data_size[4]; // ???
		s_tag_block resources_block;
		s_tag_reference owner_tag;
		short owner_tag_section_offset;
		short unknown2;
		long unknown3;
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char type[4]; // ???
		float minimum_opacity;
		float maximum_opacity;
		float rain_streak_scale;
		float rain_line_width;
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct background_plates_block
	{
		s_tag_reference texture_0;
		s_tag_reference texture_1;
		s_tag_reference texture_2;
		float plate_position_0;
		float plate_position_1;
		float plate_position_2;
		float move_speed_0_i;
		float move_speed_0_j;
		float move_speed_0_k;
		float move_speed_1_i;
		float move_speed_1_j;
		float move_speed_1_k;
		float move_speed_2_i;
		float move_speed_2_j;
		float move_speed_2_k;
		float texture_scale_0;
		float texture_scale_1;
		float texture_scale_2;
		float jitter_0_i;
		float jitter_0_j;
		float jitter_0_k;
		float jitter_1_i;
		float jitter_1_j;
		float jitter_1_k;
		float jitter_2_i;
		float jitter_2_j;
		float jitter_2_k;
		float plate_z_near;
		float plate_z_far;
		float depth_blend_z_near;
		float depth_blend_z_far;
		float opacity_0;
		float opacity_1;
		float opacity_2;
		char flags[4]; // ???
		float tint_color_0_r;
		float tint_color_0_g;
		float tint_color_0_b;
		float tint_color_1_r;
		float tint_color_1_g;
		float tint_color_1_b;
		float tint_color_2_r;
		float tint_color_2_g;
		float tint_color_2_b;
		float mass_1;
		float mass_2;
		float mass_3;
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
		char unknown61[4]; // ???
		char unknown62[4]; // ???
		char unknown63[4]; // ???
		char unknown64[4]; // ???
		char unknown65[4]; // ???
		char unknown66[4]; // ???
		char unknown67[4]; // ???
		char unknown68[4]; // ???
		char unknown69[4]; // ???
		char unknown70[4]; // ???
		char unknown71[4]; // ???
		char unknown72[4]; // ???
		char unknown73[4]; // ???
		char unknown74[4]; // ???
		char unknown75[4]; // ???
		char unknown76[4]; // ???
		char unknown77[4]; // ???
		char unknown78[4]; // ???
		char unknown79[4]; // ???
		char unknown80[4]; // ???
		char unknown81[4]; // ???
		char unknown82[4]; // ???
		char unknown83[4]; // ???
		char unknown84[4]; // ???
		char unknown85[4]; // ???
		char unknown86[4]; // ???
		char unknown87[4]; // ???
		char unknown88[4]; // ???
		char unknown89[4]; // ???
		char unknown90[4]; // ???
		char unknown91[4]; // ???
		char unknown92[4]; // ???
		char unknown93[4]; // ???
		char unknown94[4]; // ???
		char unknown95[4]; // ???
		char unknown96[4]; // ???
		char unknown97[4]; // ???
		char unknown98[4]; // ???
		char unknown99[4]; // ???
		char unknown100[4]; // ???
		char unknown101[4]; // ???
		char unknown102[4]; // ???
		char unknown103[4]; // ???
		char unknown104[4]; // ???
		char unknown105[4]; // ???
		char unknown106[4]; // ???
		char unknown107[4]; // ???
		char unknown108[4]; // ???
		char unknown109[4]; // ???
		char unknown110[4]; // ???
		char unknown111[4]; // ???
		char unknown112[4]; // ???
		char unknown113[4]; // ???
		char unknown114[4]; // ???
		char unknown115[4]; // ???
		char unknown116[4]; // ???
		char unknown117[4]; // ???
		char unknown118[4]; // ???
		char unknown119[4]; // ???
		char unknown120[4]; // ???
		char unknown121[4]; // ???
		char unknown122[4]; // ???
		char unknown123[4]; // ???
		char unknown124[4]; // ???
		char unknown125[4]; // ???
		char unknown126[4]; // ???
		char unknown127[4]; // ???
		char unknown128[4]; // ???
		char unknown129[4]; // ???
		char unknown130[4]; // ???
		char unknown131[4]; // ???
		char unknown132[4]; // ???
		char unknown133[4]; // ???
		char unknown134[4]; // ???
		char unknown135[4]; // ???
		char unknown136[4]; // ???
		char unknown137[4]; // ???
		char unknown138[4]; // ???
		char unknown139[4]; // ???
		char unknown140[4]; // ???
		char unknown141[4]; // ???
		char unknown142[4]; // ???
		char unknown143[4]; // ???
		char unknown144[4]; // ???
		char unknown145[4]; // ???
		char unknown146[4]; // ???
		char unknown147[4]; // ???
		char unknown148[4]; // ???
		char unknown149[4]; // ???
		char unknown150[4]; // ???
		char unknown151[4]; // ???
		char unknown152[4]; // ???
		char unknown153[4]; // ???
		char unknown154[4]; // ???
		char unknown155[4]; // ???
		char unknown156[4]; // ???
		char unknown157[4]; // ???
		char unknown158[4]; // ???
		char unknown159[4]; // ???
		char unknown160[4]; // ???
		char unknown161[4]; // ???
		char unknown162[4]; // ???
		char unknown163[4]; // ???
		char unknown164[4]; // ???
		char unknown165[4]; // ???
		char unknown166[4]; // ???
		char unknown167[4]; // ???
		char unknown168[4]; // ???
		char unknown169[4]; // ???
		char unknown170[4]; // ???
		char unknown171[4]; // ???
		char unknown172[4]; // ???
		char unknown173[4]; // ???
		char unknown174[4]; // ???
		char unknown175[4]; // ???
		char unknown176[4]; // ???
		char unknown177[4]; // ???
		char unknown178[4]; // ???
		char unknown179[4]; // ???
		char unknown180[4]; // ???
		char unknown181[4]; // ???
		char unknown182[4]; // ???
		char unknown183[4]; // ???
		char unknown184[4]; // ???
	};

	struct group
	{
		s_tag_block particle_system_block;
		s_tag_block background_plates_block;
		float wind_tiling_scale;
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		char unknown11[4]; // ???
		char unknown12[4]; // ???
		float wind_primary_heading_i;
		float wind_primary_heading_j;
		float wind_primary_heading_k;
		char unknown13[4]; // ???
		char unknown14[4]; // ???
		float primary_rate_of_change;
		float primary_min_strength;
		char unknown15[4]; // ???
		float wind_gusting_heading_i;
		float wind_gusting_heading_j;
		float wind_gusting_heading_k;
		char unknown16[4]; // ???
		char unknown17[4]; // ???
		char unknown18[4]; // ???
		float gust_directional_rate_of_change;
		float gust_strength_rate_of_change;
		float gust_cone_angle;
		char unknown19[4]; // ???
		char unknown20[4]; // ???
		char unknown21[4]; // ???
		char unknown22[4]; // ???
		float turbulance_rate_of_change;
		float turbulence_scale_x_y_z_i;
		float turbulence_scale_x_y_z_j;
		float turbulence_scale_x_y_z_k;
		float gravity_constant;
		char unknown23[4]; // ???
		char unknown24[4]; // ???
		char unknown25[4]; // ???
		float fade_radius;
	};
}
