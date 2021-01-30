#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace bitm_tag
{
	struct sprites_block
	{
		short bitmap_index;
		short unknown;
		char unknown2[4]; // ???
		float left;
		float right;
		float top;
		float bottom;
		char registration_point[4]; // ???
	};

	struct squences_block
	{
		char name[32];
		short first_bitmap_index;
		short bitmap_count;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		s_tag_block sprites_block;
	};

	struct bitmaps_block
	{
		char signature[4];
		short width;
		short height;
		char depth;
		char more_flags[1]; // ???
		short type;
		short format;
		short flags;
		s_point16 registration_point;
		short mipmap_count;
		short low_detail_mipmap_count;
		long pixels_offset;
		long lod1_offset;
		long lod2_offset;
		long lod3_offset;
		long unknown;
		long unknown2;
		long unknown3;
		long lod1_size;
		long lod2_size;
		long lod3_size;
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		s_tag_reference datum;
		char unknown7[4]; // ???
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
		long unknown11;
		long unknown12;
		long unknown13;
		long unknown14;
		char unknown15[4]; // ???
	};

	struct group
	{
		short type;
		short format;
		short usage;
		short flags;
		float detail_fade_factor;
		float sharpen_amount;
		float bump_height;
		short sprite_budget_size;
		short sprite_budget_count;
		short color_plate_width;
		short color_plate_height;
		long compressed_color_plate_data;
		char unknown[4]; // ???
		long processed_pixel_data;
		char unknown2[4]; // ???
		float blur_filter_size;
		float alpha_bias;
		short mipmap_count;
		short sprite_usage;
		short sprite_spacing;
		short force_format;
		s_tag_block squences_block;
		s_tag_block bitmaps_block;
		char color_compression_quality;
		char alpha_compression_quality;
		char overlap;
		char color_subsampling;
	};
}
