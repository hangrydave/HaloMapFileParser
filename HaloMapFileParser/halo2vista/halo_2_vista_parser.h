#pragma once

#include "../utilities.h"
#include "tags/definitions/bitmaps.h"
#include "tags/definitions/layouts.h"
#include "tags/definitions/tag_sizes.h"
#include <iostream>
#include <map>
#include <vector>

using namespace utilities;

class halo_2_vista_parser
{
public:
    halo_2_vista_parser(char* buffer);
    ~halo_2_vista_parser();

    void print();

private:
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
    // commenting the following 2 lines out until i need them
    //std::map<int, s_tag*> datum_to_tag_map;
    //std::map<int, std::vector<s_tag*>*> magic_to_tags_map;
    std::vector<s_tag*> all_tags;
    std::vector<string> file_names;
    std::vector<string> string_ids;

    const int header_size = sizeof(s_file_header);
    const int tags_header_size = sizeof(s_tag_header);
    const int tag_group_element_size = sizeof(s_tag_group_element);
    const int tag_element_size = sizeof(s_tag_element);

    string register_string(std::vector<string>& string_vector, int index, int table_index_offset, int table_offset);
    long get_tag_file_offset(s_tag_element* tag);

    void parse_tag_groups();
    void parse_tags();
    void parse_string_ids();
    void parse_cache();

    //void export_tags();

    void print_header();
    void print_tags_header();
};

