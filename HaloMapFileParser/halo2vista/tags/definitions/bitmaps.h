#include "fields/tag_collection.h"

namespace tag_definitions
{
    extern tag_collection* bitmap_group;
}


/*
struct s_bitm
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
    char unknown0[4];
    long processed_pixel_data;
    char unknown1[4];
    float blur_filter_size;
    float alpha_bias;
    short mipmap_count;
    short sprite_usage;
    short sprite_spacing;
    short force_format;                 // 0x3A
    s_tag_block sequences;
    s_tag_block bitmaps;
    uint8_t color_compression_quality;    // 0x4C
    uint8_t alpha_compression_quality;
    uint8_t overlap;
    uint8_t color_subsampling;
};
*/