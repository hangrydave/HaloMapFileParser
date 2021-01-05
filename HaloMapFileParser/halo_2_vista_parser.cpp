#include "halo_2_vista_parser.h"

void halo_2_vista_parser::print()
{
    std::cout << "--------------------HALO 2 VISTA--------------------\n" << std::endl;
    s_cache_file_header* header = reinterpret_cast<s_cache_file_header*>(buffer);
    print_header(header);
    std::cout << std::endl;
    s_cache_file_meta_header* meta_header = reinterpret_cast<s_cache_file_meta_header*>(buffer + header->meta_offset);
    print_tags_header(meta_header);
    std::cout << std::endl;
    print_tag_groups(header, meta_header);
    std::cout << std::endl;
    print_tag_elements(header, meta_header);
}

void halo_2_vista_parser::print_header(s_cache_file_header* header)
{
    std::cout << "----------CACHE HEADER----------" << std::endl;
    print_hex_dec("Header signature", header->header_signature);
    print_thing("File version", header->file_version);
    print_hex_dec("File length", header->file_length);
    print_hex_dec("Meta offset", header->meta_offset);
    print_hex_dec("Tag data offset", header->tag_data_offset);
    print_hex_dec("Tag data size", header->tag_data_size);
    print_hex_dec("Meta size", header->meta_size);
    print_thing("Build string", header->build_string);
    print_hex_dec("Type", header->type);
    print_hex_dec("String block offset", header->string_block_offset);
    print_hex_dec("String table count", header->string_table_count);
    print_hex_dec("String table size", header->string_table_size);
    print_hex_dec("String index table offset", header->string_index_table_offset);
    print_hex_dec("String table offset", header->string_table_offset);
    print_thing("Internal name", header->internal_name);
    print_thing("Scenario name", header->scenario_name);
    print_hex_dec("File table count", header->file_table_count);
    print_hex_dec("File table offset", header->file_table_offset);
    print_hex_dec("File table size", header->file_table_size);
    print_hex_dec("File table index offset", header->file_table_index_offset);
    print_hex_dec("Raw table offset", header->raw_table_offset);
    print_hex_dec("Raw table size", header->raw_table_size);
    print_hex_dec("Checksum", header->checksum);
}

void halo_2_vista_parser::print_tags_header(s_cache_file_meta_header* meta_header)
{
    std::cout << "----------META HEADER----------" << std::endl;
    print_hex_dec("Tag group table offset", meta_header->tag_group_table_offset);
    print_hex_dec("Number of tag groups", meta_header->number_of_tag_groups);
    print_hex_dec("Tag table offset", meta_header->tag_table_offset);
    print_thing("Scenario datum index", meta_header->scenario_datum_index.index);
    print_thing("Scenario datum identifier", meta_header->scenario_datum_index.identifier);
    print_thing("Map globals datum index", meta_header->map_globals_datum_index.index);
    print_thing("Map globals datum identifier", meta_header->map_globals_datum_index.identifier);
    print_hex_dec("Number of tags", meta_header->number_of_tags);
    print_hex_dec("Magic", meta_header->magic);
}

void halo_2_vista_parser::print_tag_groups(s_cache_file_header* header, s_cache_file_meta_header* meta_header)
{
    std::cout << "----------TAG GROUPS----------" << std::endl;
    long group_table_offset = header->meta_offset + meta_header->tag_group_table_offset;
    long group_num = meta_header->number_of_tag_groups;

    std::map<int, s_cache_file_tag_group_element> tag_group_map;

    std::cout << "Reading " << group_num << " tag groups... ";
    for (int i = 0; i < group_num; i++)
    {
        long offset = group_table_offset + (i * 0xC);
        //std::cout << "=> TAG GROUP OFFSET " << std::hex << offset << std::endl;

        s_cache_file_tag_group_element* tag_group = reinterpret_cast<s_cache_file_tag_group_element*>(buffer + offset);
        tag_group_map.insert(std::pair<int, s_cache_file_tag_group_element>(tag_group->magic, *tag_group));

        //print_hex_dec("Magic", tag_group->magic);
        //print_hex_dec("Parent magic", tag_group->parent_magic);
        //print_hex_dec("Grandparent magic", tag_group->grandparent_magic);
    }
    std::cout << "Done!" << std::endl;
}

void halo_2_vista_parser::print_tag_elements(s_cache_file_header* header, s_cache_file_meta_header* meta_header)
{
    std::cout << "----------TAG ELEMENTS----------" << std::endl;

    long tag_num = meta_header->number_of_tags;
    long tag_table_offset = header->meta_offset + meta_header->tag_table_offset;

    std::vector<s_cache_file_tag_element> tags(tag_num);

    std::cout << "Reading " << tag_num << " tags... ";
    for (int i = 0; i < tag_num; i++)
    {
        long offset = tag_table_offset + (i * 0x10);
        // std::cout << "=> TAG ELEMENT OFFSET " << std::hex << offset << std::endl;

        s_cache_file_tag_element* tag = reinterpret_cast<s_cache_file_tag_element*>(buffer + offset);
        tags[i] = *tag;
    }
    std::cout << "Done!" << std::endl;
}
