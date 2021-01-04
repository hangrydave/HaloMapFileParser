#include "halo_2_vista_parser.h"

void halo_2_vista_parser::print()
{
    std::cout << "--------------------HALO 2 VISTA--------------------\n" << std::endl;

    s_cache_file_header* header = reinterpret_cast<s_cache_file_header*>(buffer);
    print_header(header);

    std::cout << std::endl;

    s_cache_file_tags_header* tags_header = reinterpret_cast<s_cache_file_tags_header*>(buffer + header->tags_header_address);
    print_tags_header(tags_header);

    std::cout << std::endl;

    // Pulled the following bits of math from the Assembly project.
    // https://github.com/XboxChaos/Assembly/blob/79b8554f56fa0f712eabf03b9ba6af4f3b25f514/src/Blamite/Blam/FirstGen/Structures/FirstGenHeader.cs#L99
    uint32_t meta_offset_mask = tags_header->tags_address - sizeof(s_cache_file_tags_header);

    // https://github.com/XboxChaos/Assembly/blob/79b8554f56fa0f712eabf03b9ba6af4f3b25f514/src/Blamite/Blam/FirstGen/Structures/FirstGenTagTable.cs#L66
    uint32_t tag_table_offset = header->tags_header_address + tags_header->tags_address - meta_offset_mask;

    s_cache_file_tag_instance* tag = reinterpret_cast<s_cache_file_tag_instance*>(buffer + tag_table_offset);
    print_tag(tag);
}

void halo_2_vista_parser::print_header(s_cache_file_header* header)
{
    std::cout << "----------CACHE HEADER----------" << std::endl;
    print_hex_dec("Header signature", header->header_signature);
    print_thing("File version", header->file_version);
    print_hex_dec("File length", header->file_length);
    print_hex_dec("Meta offset", header->tags_header_address);
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

void halo_2_vista_parser::print_tags_header(s_cache_file_tags_header* tags_header)
{
    std::cout << "----------TAGS HEADER----------" << std::endl;
    /*cout << "\nTags address:\t\t0x" << hex << tags_header->tags_address;
    cout << "\t\t" << dec << tags_header->tags_address << endl;
    cout << "Scenario index:\t\t0x" << hex << tags_header->scenario_index;
    cout << "\t\t" << dec << tags_header->scenario_index << endl;
    cout << "Checksum:\t\t" << dec << tags_header->checksum << endl;
    cout << "Tag count:\t\t" << dec << tags_header->tag_count << endl;
    cout << "Vertex count:\t\t" << dec << tags_header->geometry_vertices_count << endl;
    cout << "Vertex offset:\t\t0x" << hex << tags_header->geometry_vertices_offset;
    cout << "\t\t" << dec << tags_header->geometry_vertices_offset << endl;
    cout << "Index count:\t\t" << dec << tags_header->geometry_indices_count << endl;
    cout << "Index offset:\t\t0x" << hex << tags_header->geometry_indices_offset;
    cout << "\t\t" << dec << tags_header->geometry_indices_offset << endl;
    cout << "Geometry data size:\t" << dec << tags_header->geometry_data_total_size << endl;*/
}

void halo_2_vista_parser::print_tag(s_cache_file_tag_instance* tag)
{
    std::cout << "----------TAG----------" << std::endl;
    /*cout << "\nTag group:\t\t" << dec << tag->group_tags[0] << endl;
    cout << "Parent tag group:\t" << dec << tag->group_tags[1] << endl;
    cout << "Grandparent tag group:\t" << dec << tag->group_tags[2] << endl;
    cout << "Datum identifier:\t" << dec << tag->handle.identifier << endl;
    cout << "Datum index:\t\t" << dec << tag->handle.index << endl;
    cout << "Name offset:\t\t0x" << hex << tag->name_address;
    cout << "\t\t" << dec << tag->name_address << endl;
    cout << "Base offset:\t\t0x" << hex << tag->base_address;
    cout << "\t\t" << dec << tag->base_address << endl;
    cout << "In data file:\t\t" << tag->bool_in_data_file << endl;*/
}

std::string halo_2_vista_parser::get_readable_file_version(long version)
{
    switch (version)
    {
    case 0x7:
        return "retail";
    case 0x261:
        return "custom edition";
    case 0x5:
        return "xbox";
    }
    return "unknown";
}

std::string halo_2_vista_parser::get_readable_scenario_type(short type)
{
    switch (type)
    {
    case 0x0:
        return "campaign";
    case 0x1:
        return "multiplayer";
    case 0x2:
        return "ui";
    }
    return "unknown";
}
