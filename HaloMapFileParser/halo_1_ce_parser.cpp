#include "halo_1_ce_parser.h"

#define tag_list_t std::vector<s_cache_file_tag_instance*>
#define tag_group_map_t std::map<int, std::vector<s_cache_file_tag_instance*>>

halo_1_ce_parser::halo_1_ce_parser(std::fstream& reader, char* buffer):
    cache_reader(reader)
{
    this->cache_buffer = buffer;
    header = reinterpret_cast<s_cache_file_header*>(buffer);
    tags_header = reinterpret_cast<s_cache_file_tags_header*>(buffer + header->tags_header_address);
    tag_count = tags_header->tag_count;

    // https://github.com/XboxChaos/Assembly/blob/79b8554f56fa0f712eabf03b9ba6af4f3b25f514/src/Blamite/Blam/FirstGen/Structures/FirstGenHeader.cs#L99
    // https://github.com/XboxChaos/Assembly/blob/79b8554f56fa0f712eabf03b9ba6af4f3b25f514/src/Blamite/Blam/FirstGen/Structures/FirstGenTagTable.cs#L66
    tag_table_offset = header->tags_header_address + tag_header_size;

    parse_tags();
    export_tags();
}

halo_1_ce_parser::~halo_1_ce_parser()
{
}

void halo_1_ce_parser::print()
{
    std::cout << "--------------------HALO CE--------------------\n" << std::endl;
    print_header();
    std::cout << std::endl;
    print_tags_header();
    std::cout << std::endl;
    print_tags();
    std::cout << std::endl;
    print_accel_scale();
    std::cout << std::endl;
}

void halo_1_ce_parser::print_header()
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

void halo_1_ce_parser::print_tags_header()
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

void halo_1_ce_parser::print_tags()
{
    std::cout << "----------TAGS----------" << std::endl;
    std::cout << tag_count << " tags and " << tag_group_count << " tag groups have been read." << std::endl;
}

void halo_1_ce_parser::print_accel_scale()
{
    std::string label = "Acceleration scale";
    const int bipd_magic = 1651077220;
    const short cyborg_mp_datum_index = 147;
    const short accel_scale_tag_offset = 0x20;

    std::cout << "----------ACCELERATION SCALE TEST----------" << std::endl;

    tag_list_t tags = tag_group_map[bipd_magic];
    s_cache_file_tag_instance tag;
    for (int i = 0; i < tags.size(); i++)
    {
        s_cache_file_tag_instance* current_tag = tags[i];
        if (current_tag->handle.index == cyborg_mp_datum_index)
            tag = *current_tag;
    }

    if (tag.handle.index == -1)
    {
        print_thing(label, "Data error");
        return;
    }

    int offset = tag_table_offset + tag.offset - tags_header->tags_address;

    int accel_scale_offset = offset + accel_scale_tag_offset;
    float accel_scale = *reinterpret_cast<float*>(cache_buffer + accel_scale_offset);
    print_thing(label, accel_scale);
}

void halo_1_ce_parser::parse_tags()
{
    long tag_num = tags_header->tag_count;
    for (int i = 0; i < tag_num; i++)
    {
        long offset = tag_table_offset + (i * tag_size);

        s_cache_file_tag_instance* tag = reinterpret_cast<s_cache_file_tag_instance*>(cache_buffer + offset);
        long magic = tag->tag_group_magic;

        if (tag_group_map.find(magic) == tag_group_map.end())
            tag_group_map[magic] = tag_list_t();

        tag_group_map[magic].push_back(tag);
    }
    tag_group_count = tag_group_map.size();
}

void halo_1_ce_parser::export_tags()
{
    int negative_count = 0;
    tag_group_map_t::iterator it;
    for (it = tag_group_map.begin(); it != tag_group_map.end(); it++)
    {
        string group_name = trim(hex_to_string(it->first));
        string group_path = "tags\\" + string(header->name) + '\\' + group_name;
        if (!create_directories(group_path))
            return;

        unsigned int size = tag_size_map[group_name];

        tag_list_t tags = it->second;
        for (int i = 0; i < tags.size(); i++)
        {
            s_cache_file_tag_instance tag = *tags[i];
            int name_offset = tag_table_offset - tags_header->tags_address + tag.name_offset;

            string file_path;
            string parent_path;
            read_path(parent_path, file_path, cache_buffer, name_offset);

            if (parent_path.size() != 0)
                parent_path = group_path + '\\' + parent_path;
            else
                parent_path = group_path;
            file_path = group_path + '\\' + file_path;

            create_directories(parent_path);

            int tag_offset = tag_table_offset - tags_header->tags_address + tag.offset;
            if (tag_offset < 0)
            {
                // TODO: wtf
                negative_count++;
                continue;
            }

            write_some_chars(file_path, cache_buffer, tag_offset, size);
        }
    }
}

string halo_1_ce_parser::get_readable_file_version(long version)
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

string halo_1_ce_parser::get_readable_scenario_type(short type)
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
