#include "../utilities.h"
#include <iostream>
#include <map>
#include <vector>

using namespace utilities;

#pragma once
class halo_2_vista_parser
{
public:
    halo_2_vista_parser(char* buffer)
    {
        this->buffer = buffer;
    }

    void print();

private:
    char* buffer;

#pragma pack(push, 1)
    struct datum_index
    {
        short index;
        short identifier;
    };
#pragma pack(pop)

#pragma pack(push, 1)
    struct s_cache_file_header
    {
        unsigned long header_signature;             // 0x0
        long file_version;                          // 0x4
        long file_length;                           // 0x8

        long unknown0;                              // 0xC

        unsigned long meta_offset;                  // 0x10 meta offset
        unsigned long tag_data_offset;              // 0x14 tag data offset
        long tag_data_size;                         // 0x18
        long meta_size;                             // 0x1C meta size

        char eee[268];                              // 0x20

        /*char unknown1[2];                           // 0x20
        // 0x40, 0x01 on multiplayer maps and 0x00, 0x00 on campaign maps
        char unknown2[2];                           // 0x22
        // always FFFFFFFF
        char unknown3[4];                           // 0x24
        char unknown4[104];                         // 0x28*/

        char build_string[24];                      // 0x12C
        char unknown5[8];                           // 0x144

        long type;                                  // 0x14C type

        char unknown6[28];                          // 0x150

        long string_block_offset;                   // 0x16C string block offset
        long string_table_count;                    // 0x170 string table count
        long string_table_size;                     // 0x174 string table size
        unsigned long string_index_table_offset;    // 0x178 string index table offset
        unsigned long string_table_offset;          // 0x17C string table offset

        char unknown7[36];                           // 0x180

        char internal_name[36];                     // 0x1A4 internal_name
        // 44 is not set in stone
        char scenario_name[72];                     // 0x1C8 scenario_name

        char unknown8[188];                         // 0x210

        long file_table_count;                      // 0x2CC file table count
        unsigned long file_table_offset;            // 0x2D0 file table offset
        long file_table_size;                       // 0x2D4 file table size
        unsigned long file_table_index_offset;      // 0x2D8 file index table offset

        char unknown9[12];                          // 0x2DC

        unsigned long raw_table_offset;             // 0x2E8 raw table offset
        long raw_table_size;                        // 0x2EC raw table size

        unsigned long checksum;                     // 0x2F0 checksum
    };
#pragma pack(pop)

#pragma pack(push, 1)
    struct s_cache_file_meta_header
    {
        long tag_group_table_offset;                // 0x0
        long number_of_tag_groups;                  // 0x4;
        long tag_table_offset;                      // 0x8;
        datum_index scenario_datum_index;           // 0xC
        datum_index map_globals_datum_index;        // 0x10
        char unknown0[4];                           // 0x14
        long number_of_tags;                        // 0x18
        long magic;                                 // 0x1C
    };
#pragma pack(pop)

#pragma pack(push, 1)
    struct s_cache_file_tag_group_element
    {
        long magic;                 // 0x0
        long parent_magic;          // 0x4
        long grandparent_magic;     // 0x8
    };
#pragma pack(pop)

#pragma pack(push, 1)
    struct s_cache_file_tag_element
    {
        long tag_group_magic;       // 0x0
        datum_index datum_index;    // 0x4
        long offset;                // 0x8
        long data_size;             // 0xC
    };
#pragma pack(pop)

    void print_header(s_cache_file_header* header);
    void print_tags_header(s_cache_file_meta_header* meta_header);
    void print_tag_groups(s_cache_file_header* header, s_cache_file_meta_header* meta_header);
    void print_tag_elements(s_cache_file_header* header, s_cache_file_meta_header* meta_header);
};

