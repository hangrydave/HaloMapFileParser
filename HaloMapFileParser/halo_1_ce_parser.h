#include "utilities.h"
#include <iostream>
#include <map>
#include <vector>

using namespace utilities;

#pragma once
class halo_1_ce_parser
{
public:
    halo_1_ce_parser(char* buffer)
    {
        this->buffer = buffer;
    }

    void print();

private:
    /*
     * The following 4 structs are pulled from (albeit with some slight changes) https://github.com/ChimpMods/Blam-Creation-Suite/blob/08037eba28885eb2c9a1e579ffdbab011e0e7257/Tags/MandrillLib/CacheInterface/CacheVersions/halo1/halo1_cache_file_types.h
     */

#pragma pack(push, 1)
    struct s_cache_file_header
    {
        unsigned long header_signature;     // 0x0
        long file_version;                  // 0x4
        long file_length;                   // 0x8
        long file_compressed_length;        // 0xC
        unsigned long tags_header_address;  // 0x10
        long tag_data_size;                 // 0x14
        char unused[8];                     // 0x18
        char name[32];                      // 0x20
        char build[32];                     // 0x40
        short scenario_type;                // 0x60
        short shared_type;                  // 0x62
        unsigned long __unknown64;          // 0x64
        char __unknown68[1940];             // 0x68
        unsigned long footer_signature;     // 0x7FC
    };
#pragma pack(pop)

#pragma pack(push, 1)
    struct datum_index
    {
        short index;
        short identifier;
    };
#pragma pack(pop)

#pragma pack(push, 1)
    struct s_cache_file_tag_instance
    {
        long tag_group_magic;
        long parent_group_magic;
        long grandparent_group_magic;
        datum_index handle = { -1, -1 };
        unsigned long name_offset;
        unsigned long offset;
        bool is_in_data_file;
        char : 8;
        char : 8;
        char : 8;

        long : 32;
    };
#pragma pack(pop)

#pragma pack(push, 1)
    struct s_cache_file_tags_header
    {
        unsigned long tags_address;
        unsigned long scenario_index;
        unsigned long checksum;
        unsigned long tag_count;
        unsigned long geometry_vertices_count;
        unsigned long geometry_vertices_offset;
        unsigned long geometry_indices_count;
        unsigned long geometry_indices_offset;
        unsigned long geometry_data_total_size;
        unsigned long signature;
    };
#pragma pack(pop)

    char* buffer;
    std::map<int, std::vector<s_cache_file_tag_instance>> tag_group_map;

    long header_size = sizeof(s_cache_file_header);
    long tag_header_size = sizeof(s_cache_file_tags_header);
    long tag_size = sizeof(s_cache_file_tag_instance);

    int tag_group_count;
    int tag_count;

    void print_header(s_cache_file_header* header);
    void print_tags_header(s_cache_file_tags_header* tags_header);
    void print_tags(s_cache_file_header* header, s_cache_file_tags_header* tags_header);
    void print_accel_scale(s_cache_file_header* header, s_cache_file_tags_header* tags_header);

    void parse_tags(s_cache_file_header* header, s_cache_file_tags_header* tags_header);

    std::string get_readable_file_version(long version);
    std::string get_readable_scenario_type(short type);
};

