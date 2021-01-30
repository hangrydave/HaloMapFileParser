#include "../pch.h"

#pragma once

struct s_datum_index
{
    short index;
    short identifier;
};

struct s_file_header
{
    unsigned long header_signature;             // 0x0
    long file_version;                          // 0x4
    long file_length;                           // 0x8

    char unknown0[4];                           // 0xC

    unsigned long meta_offset;                  // 0x10 meta offset
    unsigned long tag_data_offset;              // 0x14 tag data offset
    long tag_data_size;                         // 0x18
    long meta_size;                             // 0x1C meta size
    long meta_offset_mask;                      // 0x20 meta offset mask

    char unknown1[264];                              // 0x20

    char build_string[24];                      // 0x12C
    char unknown2[8];                           // 0x144

    long type;                                  // 0x14C type

    char unknown3[28];                          // 0x150

    long string_block_offset;                   // 0x16C string block offset
    long string_table_count;                    // 0x170 string table count
    long string_table_size;                     // 0x174 string table size
    unsigned long string_table_index_offset;    // 0x178 string index table offset
    unsigned long string_table_offset;          // 0x17C string table offset

    char unknown4[36];                           // 0x180

    char internal_name[36];                     // 0x1A4 internal_name
    char scenario_name[100];                     // 0x1C8 scenario_name

    char unknown5[160];                         // 0x210

    long file_table_count;                      // 0x2CC file table count
    unsigned long file_table_offset;            // 0x2D0 file table offset
    long file_table_size;                       // 0x2D4 file table size
    unsigned long file_table_index_offset;      // 0x2D8 file index table offset

    char unknown6[12];                          // 0x2DC

    unsigned long raw_table_offset;             // 0x2E8 raw table offset
    long raw_table_size;                        // 0x2EC raw table size

    unsigned long checksum;                     // 0x2F0 checksum
};

struct s_tag_header
{
    long tag_group_table_offset;                // 0x0
    long number_of_tag_groups;                  // 0x4;
    long tag_table_offset;                      // 0x8;
    s_datum_index scenario_datum_index;           // 0xC
    s_datum_index map_globals_datum_index;        // 0x10
    char unknown0[4];                           // 0x14
    long number_of_tags;                        // 0x18
    long magic;                                 // 0x1C
};

struct s_tag_group_element
{
    long magic;                 // 0x0
    long parent_magic;          // 0x4
    long grandparent_magic;     // 0x8
};

struct s_tag_element
{
    long tag_group_magic;       // 0x0
    s_datum_index datum_index;    // 0x4
    long offset;                // 0x8
    long data_size;             // 0xC
};

struct s_tag_block
{
    long entry_count;
    unsigned long pointer;
};

struct s_tag_reference
{
    long group_magic;
    s_datum_index datum_index;
};

struct s_data_reference
{
    long size;
    long stream_flags;
    long stream_offset;
    unsigned long address;
    long definition;
};

struct s_point16
{
    short x;
    short y;
};

struct s_vector3
{
    float x;
    float y;
    float z;
};

struct s_vector4
{
    float i;
    float j;
    float k;
    float w;
};

