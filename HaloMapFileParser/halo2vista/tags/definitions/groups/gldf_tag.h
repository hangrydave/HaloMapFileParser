#pragma once

#include "../tag_layouts.h"

namespace gldf_tag
{
	struct light_variables_block
	{
		char objects_affected[4]; // ???
		float lightmap_brightness_offset;
		char minimum_lightmap_color[12]; // ???
		char maximum_lightmap_color[12]; // ???
		float exclusion_angle_from_up;
		s_data_reference primary_light_function;
		char minimum_lightmap_color2[12]; // ???
		char maximum_lightmap_color2[12]; // ???
		char minimum_diffuse_sample[12]; // ???
		char maximum_diffuse_sample[12]; // ???
		float z_axis_rotation;
		s_data_reference secondary_light_function;
		char minimum_lightmap_sample[12]; // ???
		char maximum_lightmap_sample[12]; // ???
		s_data_reference ambient_light_function;
		s_data_reference lightmap_shadows_function;
	};

	struct group
	{
		s_tag_block light_variables_block;
	};
}
