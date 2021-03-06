#include "halo_2_vista_parser.h"

using std::string;

halo_2_vista_parser::halo_2_vista_parser(char* buffer)
{
    this->cache_buffer = buffer;
    parse_cache();
}

halo_2_vista_parser::~halo_2_vista_parser()
{
}

string halo_2_vista_parser::register_string(std::vector<string>& string_vector, int index, int table_index_offset, int table_offset)
{
    int string_offset_offset = table_index_offset + index * 4;
    int string_offset = read_int(cache_buffer, string_offset_offset);
    if (string_offset == -1)
        string_vector[index] = "";
    else
        string_vector[index] = read_string(cache_buffer, table_offset + string_offset);

    return string_vector[index];
}

unsigned long halo_2_vista_parser::get_tag_file_offset(unsigned long tag_offset)
{
    unsigned long offset = header->meta_offset - header->meta_offset_mask + tag_offset;
    return offset;
}

void halo_2_vista_parser::parse_tag_groups()
{
    long group_table_offset = header->meta_offset + tags_header->tag_group_table_offset;
    long group_count = tags_header->number_of_tag_groups;
    for (int i = 0; i < group_count; i++)
    {
        long group_offset = group_table_offset + i * tag_group_element_size;
        s_tag_group_element* group = reinterpret_cast<s_tag_group_element*>(cache_buffer + group_offset);
        
        long magic = group->magic;
        if (magic_to_group_map.find(magic) != magic_to_group_map.end())
            continue;

        magic_to_group_map[magic] = group;
    }
}

template<typename T>
std::vector<T*>* halo_2_vista_parser::get_tagblock_data(s_tag_block tag_block)
{
    if (tag_block.entry_count < 0 ||
        tag_block.pointer < 0)
        return new std::vector<T*>();

    unsigned long data_start = get_tag_file_offset(tag_block.pointer);
    std::vector<T*>* data_vec = new std::vector<T*>(tag_block.entry_count);
    for (int i = 0; i < tag_block.entry_count; i++)
    {
        long offset = data_start + (i * sizeof(T));
        char* bytes = read_bytes(cache_buffer, offset, sizeof(T));
        T* data = reinterpret_cast<T*>(bytes);
        data_vec->insert(data_vec->begin() + i, data);
    }
    return data_vec;
}

void halo_2_vista_parser::parse_tags()
{
    long tag_table_offset = header->meta_offset + tags_header->tag_table_offset;
    long tag_count = tags_header->number_of_tags;

    long file_table_index_offset = header->file_table_index_offset;
    long file_table_offset = header->file_table_offset;
    file_names.resize(tag_count);

    create_directory("tags");
    for (int i = 0; i < tag_count; i++)
    {
        long tag_offset = tag_table_offset + i * tag_element_size;
        s_tag_element* tag_element = reinterpret_cast<s_tag_element*>(cache_buffer + tag_offset);

        string file_path = register_string(file_names, i, file_table_index_offset, file_table_offset);

        string group_name = hex_to_string(tag_element->tag_group_magic);
        long data_offset = get_tag_file_offset(tag_element->offset);
        int data_length = tag_size_map[group_name];
        char* bytes = read_bytes(cache_buffer, data_offset, data_length);

        // extract tags
        string full_path = "tags\\" + file_path + "." + group_name;
        if (!file_exists(full_path))
            write_to_file(full_path, bytes, data_length);

        if (group_name.compare("bitm") == 0)
        {
            // for testing purposes
            bitm_tag::group* group_tag = reinterpret_cast<bitm_tag::group*>(bytes);
            auto squences = get_tagblock_data<bitm_tag::squences_block>(group_tag->squences_block);
            auto bitmaps = get_tagblock_data<bitm_tag::bitmaps_block>(group_tag->bitmaps_block);

            bool hmee = true;
        }
    }
}

void halo_2_vista_parser::parse_string_ids()
{
    long string_table_index_offset = header->string_table_index_offset;
    long string_table_count = header->string_table_count;
    long string_table_offset = header->string_table_offset;
    string_ids.resize(string_table_count);
    for (int i = 0; i < string_table_count; i++)
    {
        register_string(string_ids, i, string_table_index_offset, string_table_offset);
    }
}

void halo_2_vista_parser::parse_cache()
{
    header = reinterpret_cast<s_file_header*>(cache_buffer);
    tags_header = reinterpret_cast<s_tag_header*>(cache_buffer + header->meta_offset);

    parse_tag_groups();
    parse_tags();
    parse_string_ids();
}

void halo_2_vista_parser::print()
{
    std::cout << "--------------------HALO 2 VISTA--------------------\n" << std::endl;
    print_header();
    std::cout << std::endl;
    print_tags_header();
}

void halo_2_vista_parser::print_header()
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
    print_hex_dec("String index table offset", header->string_table_index_offset);
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

void halo_2_vista_parser::print_tags_header()
{
    std::cout << "----------META HEADER----------" << std::endl;
    print_hex_dec("Tag group table offset", tags_header->tag_group_table_offset);
    print_hex_dec("Number of tag groups", tags_header->number_of_tag_groups);
    print_hex_dec("Tag table offset", tags_header->tag_table_offset);
    print_thing("Scenario datum index", tags_header->scenario_datum_index.index);
    print_thing("Scenario datum identifier", tags_header->scenario_datum_index.identifier);
    print_thing("Map globals datum index", tags_header->map_globals_datum_index.index);
    print_thing("Map globals datum identifier", tags_header->map_globals_datum_index.identifier);
    print_hex_dec("Number of tags", tags_header->number_of_tags);
    print_magic("Magic", tags_header->magic);
}
