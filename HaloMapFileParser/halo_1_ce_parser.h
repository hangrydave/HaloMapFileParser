#include "utilities.h"

using namespace utilities;

#pragma once
class halo_1_ce_parser
{
public:
    halo_1_ce_parser(std::fstream& reader, char* buffer);
    ~halo_1_ce_parser();

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

    std::fstream& cache_reader;
    char* cache_buffer;

    s_cache_file_header* header;
    s_cache_file_tags_header* tags_header;
    std::map<int, std::vector<s_cache_file_tag_instance*>> tag_group_map;

    const long header_size = sizeof(s_cache_file_header);
    const long tag_header_size = sizeof(s_cache_file_tags_header);
    const long tag_size = sizeof(s_cache_file_tag_instance);

    long tag_table_offset = 0;
    int tag_group_count = 0;
    int tag_count = 0;

    void print_header();
    void print_tags_header();
    void print_tags();
    void print_accel_scale();

    void parse_tags();

    void export_tags();

    string get_readable_file_version(long version);
    string get_readable_scenario_type(short type);

    // the following numbers were taken from Assembly's tag definitions
    std::map<string, unsigned int> tag_size_map
    {
        { "actr", 1272 },
        { "actv", 568 },
        { "ant!", 208 },
        { "antr", 128 },
        { "bipd", 1268 },
        { "bitm", 108 },
        { "boom", 4 },
        { "cdmg", 512 },
        { "coll", 664 },
        { "colo", 12 },
        { "cont", 324 },
        { "ctrl", 792 },
        { "deca", 268 },
        { "DeLa", 1004 },
        { "devc", 44 },
        { "devi", 656 },
        { "dobc", 128 },
        { "effe", 64 },
        { "elec", 264 },
        { "eqip", 944 },
        { "flag", 96 },
        { "fog", 396 },
        { "font", 156 },
        { "foot", 140 },
        { "garb", 944 },
        { "glw!", 340 },
        { "grhi", 504 },
        { "hmt", 128 },
        { "hud#", 100 },
        { "hudg", 1104 },
        { "item", 776 },
        { "itmc", 92 },
        { "jpt!", 672 },
        { "lens", 240 },
        { "lifi", 720 },
        { "ligh", 352 },
        { "lsnd", 84 },
        { "mach", 804 },
        { "matg", 428 },
        { "metr", 172 },
        { "mgs2", 332 },
        { "mod2", 232 },
        { "mode", 232 },
        { "mply", 12 },
        { "ngpr", 896 },
        { "obje", 380 },
        { "part", 356 },
        { "pctl", 104 },
        { "phys", 128 },
        { "plac", 508 },
        { "pphy", 64 },
        { "proj", 588 },
        { "rain", 48 },
        { "sbsp", 648 },
        { "scen", 508 },
        { "scex", 120 },
        { "schi", 108 },
        { "scnr", 1456 },
        { "senv", 836 },
        { "sgla", 480 },
        { "shdr", 40 },
        { "sky", 208 },
        { "smet", 260 },
        { "snd!", 164 },
        { "snde", 72 },
        { "soso", 440 },
        { "sotr", 108 },
        { "Soul", 12 },
        { "spla", 332 },
        { "ssce", 508 },
        { "str#", 12 },
        { "swat", 320 },
        { "tagc", 12 },
        { "trak", 48 },
        { "udlg", 4112 },
        { "unhi", 1388 },
        { "unit", 752 },
        { "ustr", 12 },
        { "vcky", 60 },
        { "vehi", 1008 },
        { "weap", 1288 },
        { "wind", 64 },
        { "wphi", 380 }
    };
};

