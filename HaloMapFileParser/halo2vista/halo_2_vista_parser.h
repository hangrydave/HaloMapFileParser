#include "../utilities.h"
#include <iostream>
#include <map>
#include <vector>

using namespace utilities;

#pragma once
class halo_2_vista_parser
{
public:
    halo_2_vista_parser(char* buffer);
    ~halo_2_vista_parser();

    void print();

private:
    struct datum_index
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
        datum_index scenario_datum_index;           // 0xC
        datum_index map_globals_datum_index;        // 0x10
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
        datum_index datum_index;    // 0x4
        long offset;                // 0x8
        long data_size;             // 0xC
    };

    struct s_tag
    {
        long group_magic;
        string group_name;
        datum_index datum_index;
        long offset;
        string file_path;
        long data_offset;
        long data_length;
        char* bytes;
    };

    char* cache_buffer;

    s_file_header* header;
    s_tag_header* tags_header;
    std::map<int, s_tag_group_element*> magic_to_group_map;
    std::map<int, s_tag*> datum_to_tag_map;
    std::map<int, std::vector<s_tag*>*> magic_to_tags_map;
    std::vector<s_tag*> all_tags;
    std::vector<string> file_names;
    std::vector<string> string_ids;

    const int header_size = sizeof(s_file_header);
    const int tags_header_size = sizeof(s_tag_header);
    const int tag_group_element_size = sizeof(s_tag_group_element);
    const int tag_element_size = sizeof(s_tag_element);

    s_tag* register_tag(s_tag_element* tag_element, const string& file_name);
    string register_string(std::vector<string>& string_vector, int index, int table_index_offset, int table_offset);
    long get_tag_file_offset(s_tag_element* tag);

    void parse_tag_groups();
    void parse_tags();
    void parse_string_ids();
    void parse_cache();

    //void export_tags();

    void print_header();
    void print_tags_header();

    // the following numbers were taken from Assembly's tag definitions
    std::map<string, unsigned int> tag_size_map
    {
        { "adlg", 44 },
        { "ai__", 152 },
        { "ant!", 160 },
        { "bipd", 788 },
        { "bitm", 80 },
        { "bloc", 192 },
        { "bsdt", 32 },
        { "char", 236 },
        { "cin_", 24 },
        { "clu_", 40 },
        { "clwd", 108 },
        { "coll", 52 },
        { "colo", 8 },
        { "cont", 240 },
        { "crea", 384 },
        { "ctrl", 320 },
        { "dc_s", 16 },
        { "deca", 172 },
        { "DECR", 112 },
        { "dec_", 16 },
        { "dgr_", 100 },
        { "effe", 48 },
        { "egor", 144 },
        { "eqip", 316 },
        { "fog", 96 },
        { "foot", 8 },
        { "fpch", 80 },
        { "garb", 468 },
        { "gldf", 8 },
        { "goof", 368 },
        { "hlmt", 252 },
        { "hsc_", 40 },
        { "hudg", 1160 },
        { "itmc", 12 },
        { "jmad", 172 },
        { "jpt!", 200 },
        { "lens", 100 },
        { "lifi", 284 },
        { "ligh", 228 },
        { "lsnd", 44 },
        { "ltmp", 260 },
        { "mach", 308 },
        { "matg", 644 },
        { "mcsr", 12 },
        { "mdlg", 8 },
        { "MGS2", 16 },
        { "mode", 132 },
        { "mulg", 16 },
        { "nhdt", 40 },
        { "phmo", 272 },
        { "phys", 116 },
        { "pmov", 20 },
        { "pphy", 64 },
        { "proj", 420 },
        { "prt3", 188 },
        { "PRTM", 224 },
        { "sbsp", 572 },
        { "scen", 196 },
        { "scnr", 992 },
        { "sfx+", 8 },
        { "shad", 92 },
        { "sily", 36 },
        { "skin", 60 },
        { "sky", 172 },
        { "sncl", 8 },
        { "snd!", 20 },
        { "snde", 72 },
        { "snmx", 88 },
        { "spas", 36 },
        { "spk!", 40 },
        { "ssce", 204 },
        { "sslt", 8 },
        { "stem", 96 },
        { "styl", 92 },
        { "tdtl", 112 },
        { "trak", 12 },
        { "trg_", 16 },
        { "udlg", 24 },
        { "ugh!", 88 },
        { "unic", 52 },
        { "vehc", 12 },
        { "vehi", 768 },
        { "vrtx", 16 },
        { "weap", 796 },
        { "weat", 176 },
        { "wgit", 112 },
        { "wgtz", 32 },
        { "wigl", 452 },
        { "_cen", 72 },
        { "_eap", 52 },
        { "_ehi", 52 },
        { "_fx_", 28 },
        { "_igh", 52 },
        { "_ipd", 52 },
        { "_qip", 52 },
        { "_rea", 52 },
        { "_sce", 52 },
        { "____", 8 }
    };
};

