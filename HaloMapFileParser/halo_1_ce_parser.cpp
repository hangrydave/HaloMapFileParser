#include "halo_1_ce_parser.h"

void halo_1_ce_parser::print()
{
    std::cout << "--------------------HALO CE--------------------\n" << std:: endl;

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

void halo_1_ce_parser::print_header(s_cache_file_header* header)
{
    std::cout << "----------CACHE HEADER----------" << std::endl;
    print_thing("Engine", get_readable_file_version(header->file_version));
    print_hex_dec("Map size", header->file_length);
    print_hex_dec("Tag header addr", header->tags_header_address);
    print_hex_dec("Tag data size", header->tag_data_size);
    print_thing("Map name", header->name);
    print_thing("Map build", header->build);
    print_thing("Map type", get_readable_scenario_type(header->scenario_type));
}

void halo_1_ce_parser::print_tags_header(s_cache_file_tags_header* tags_header)
{
    std::cout << "----------TAGS HEADER----------" << std::endl;
    print_hex_dec("Tags address", tags_header->tags_address);
    print_hex_dec("Scenario index", tags_header->scenario_index);
    print_hex_dec("Checksum", tags_header->checksum);
    print_hex_dec("Tag count", tags_header->tag_count);
    print_hex_dec("Vertex count", tags_header->geometry_vertices_count);
    print_hex_dec("Vertex offset", tags_header->geometry_vertices_offset);
    print_hex_dec("Index count", tags_header->geometry_indices_count);
    print_hex_dec("Index offset", tags_header->geometry_indices_offset);
    print_hex_dec("Geometry data size", tags_header->geometry_data_total_size);
}

void halo_1_ce_parser::print_tag(s_cache_file_tag_instance* tag)
{
    std::cout << "----------TAG----------" << std::endl;
    print_hex_dec("Tag group", tag->group_tags[0]);
    print_hex_dec("Parent tag group", tag->group_tags[1]);
    print_hex_dec("Grandparent tag group", tag->group_tags[2]);
    print_thing("Datum identifier", tag->handle.identifier);
    print_thing("Datum index", tag->handle.index);
    print_hex_dec("Name offset", tag->name_address);
    print_hex_dec("Base offset", tag->base_address);
    print_thing("In data file", tag->bool_in_data_file);
}

std::string halo_1_ce_parser::get_readable_file_version(long version)
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

std::string halo_1_ce_parser::get_readable_scenario_type(short type)
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
