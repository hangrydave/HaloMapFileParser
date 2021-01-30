#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace dgr__tag
{
	struct object_names_block
	{
		char name[32];
		short type;
		short placement_index;
	};

	struct unknown2_block
	{
		short bsp_index;
		short unknown;
		long unique_id;
		char unknown2[4]; // ???
		char object_definition_tag[4];
		long object;
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
	};

	struct structure_references_block
	{
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		s_tag_reference structure_bsp;
		s_tag_reference structure_lightmap;
		char unknown5[4]; // ???
		float radiance_est__search_distance;
		char unknown6[4]; // ???
		float luminels_per_world_unit;
		float output_white_reference;
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		short flags;
		short unknown9;
		short default_sky_index;
		short unknown10;
	};

	struct device_groups_block
	{
		char name[32];
		float initial_value;
		char flags[4]; // ???
	};

	struct pathfinding_references_block
	{
		short bsp_index;
		short pathfinding_object_index;
	};

	struct machines_block
	{
		short type_index;
		short name_index;
		char placement_flags[4]; // ???
		float position_x;
		float position_y;
		float position_z;
		char rotation_y[4]; // ???
		char rotation_p[4]; // ???
		char rotation_r[4]; // ???
		float scale;
		short transform_flags;
		short manual_bsp_flags;
		long unique_id;
		short origin_bsp_index;
		char type;
		char source;
		char bsp_policy;
		char unknown;
		short editor_folder_index;
		short power_group_index;
		short position_group_index;
		char flags[4]; // ???
		char flags2[4]; // ???
		s_tag_block pathfinding_references_block;
	};

	struct machines_palette_block
	{
		s_tag_reference name;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct controls_block
	{
		short type_index;
		short name_index;
		char placement_flags[4]; // ???
		float position_x;
		float position_y;
		float position_z;
		char rotation_y[4]; // ???
		char rotation_p[4]; // ???
		char rotation_r[4]; // ???
		float scale;
		short transform_flags;
		short manual_bsp_flags;
		long unique_id;
		short origin_bsp_index;
		char type;
		char source;
		char bsp_policy;
		char unknown;
		short editor_folder_index;
		short power_group_index;
		short position_group_index;
		char flags[4]; // ???
		char flags2[4]; // ???
		short unknown2;
		short unknown3;
	};

	struct controls_palette_block
	{
		s_tag_reference name;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct light_fixtures_block
	{
		short type_index;
		short name_index;
		char placement_flags[4]; // ???
		float position_x;
		float position_y;
		float position_z;
		char rotation_y[4]; // ???
		char rotation_p[4]; // ???
		char rotation_r[4]; // ???
		float scale;
		short transform_flags;
		short manual_bsp_flags;
		long unique_id;
		short origin_bsp_index;
		char type;
		char source;
		char bsp_policy;
		char unknown;
		short editor_folder_index;
		short power_group_index;
		short position_group_index;
		char flags[4]; // ???
		char color[12]; // ???
		float intensity;
		char falloff_angle[4]; // ???
		char cutoff_angle[4]; // ???
	};

	struct light_fixtures_palette_block
	{
		s_tag_reference name;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		char unknown8[4]; // ???
	};

	struct editor_folders_block
	{
		long parent_folder_index;
		char name[256];
	};

	struct group
	{
		s_tag_block object_names_block;
		s_tag_block unknown2_block;
		s_tag_block structure_references_block;
		s_tag_block device_groups_block;
		s_tag_block machines_block;
		s_tag_block machines_palette_block;
		s_tag_block controls_block;
		s_tag_block controls_palette_block;
		s_tag_block light_fixtures_block;
		s_tag_block light_fixtures_palette_block;
		long next_machine_id_salt;
		long next_control_id_salt;
		long next_light_fixture_id_salt;
		s_tag_block editor_folders_block;
	};
}
