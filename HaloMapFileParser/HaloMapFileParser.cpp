#include <iostream>
#include <fstream>

using namespace std;

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
    unsigned long group_tags[3];
    datum_index handle;

    unsigned long name_address;
    unsigned long base_address;

    bool bool_in_data_file;
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

string get_readable_file_version(long version);
string get_readable_scenario_type(short type);

int main()
{
    string path = "D:/Program Files (x86)/Microsoft Games/Halo Custom Edition/maps/";
    string map_name = "a10.map";
    fstream map_file(path + map_name, ios::in | ios::binary);

    // https://stackoverflow.com/a/22986486/5132781
    map_file.ignore(numeric_limits<streamsize>::max());
    streamsize length = map_file.gcount();
    map_file.clear();
    map_file.seekg(0, ios_base::beg);
    
    char* buffer = new char[length];
    map_file.read(buffer, length);

    s_cache_file_header* header = reinterpret_cast<s_cache_file_header*>(buffer);
    cout << "Engine:\t\t\t" << get_readable_file_version(header->file_version) << endl;
    cout << "Map size:\t\t0x" << hex << header->file_length << "\t\t" << dec << header->file_length << endl;
    cout << "Tag header addr:\t0x" << hex << header->tags_header_address << "\t\t" << dec << header->tags_header_address << endl;
    cout << "Tag data size:\t\t0x" << hex << header->tag_data_size << "\t\t" << dec << header->tag_data_size << endl;
    cout << "Map name:\t\t" << header->name << endl;
    cout << "Map build:\t\t" << header->build << endl;
    cout << "Map type:\t\t" << get_readable_scenario_type(header->scenario_type) << endl;

    s_cache_file_tags_header* tags_header = reinterpret_cast<s_cache_file_tags_header*>(buffer + header->tags_header_address);
    cout << "\nTags address:\t\t0x" << hex << tags_header->tags_address << "\t\t" << dec << tags_header->tags_address << endl;
    cout << "Scenario index:\t\t0x" << hex << tags_header->scenario_index << "\t\t" << dec << tags_header->scenario_index << endl;
    cout << "Checksum:\t\t" << dec << tags_header->checksum << endl;
    cout << "Tag count:\t\t" << dec << tags_header->tag_count << endl;
    cout << "Vertex count:\t\t" << dec << tags_header->geometry_vertices_count << endl;
    cout << "Vertex offset:\t\t0x" << hex << tags_header->geometry_vertices_offset << "\t\t" << dec << tags_header->geometry_vertices_offset << endl;
    cout << "Index count:\t\t" << dec << tags_header->geometry_indices_count << endl;
    cout << "Index offset:\t\t0x" << hex << tags_header->geometry_indices_offset << "\t\t" << dec << tags_header->geometry_indices_offset << endl;
    cout << "Geometry data size:\t" << dec << tags_header->geometry_data_total_size << endl;

    // Pulled the following bits of math from the Assembly project.
    // https://github.com/XboxChaos/Assembly/blob/79b8554f56fa0f712eabf03b9ba6af4f3b25f514/src/Blamite/Blam/FirstGen/Structures/FirstGenHeader.cs#L99
    uint32_t meta_offset_mask = tags_header->tags_address - sizeof(s_cache_file_tags_header);

    // https://github.com/XboxChaos/Assembly/blob/79b8554f56fa0f712eabf03b9ba6af4f3b25f514/src/Blamite/Blam/FirstGen/Structures/FirstGenTagTable.cs#L66
    uint32_t tag_table_offset = header->tags_header_address + tags_header->tags_address - meta_offset_mask;

    s_cache_file_tag_instance* tag = reinterpret_cast<s_cache_file_tag_instance*>(buffer + tag_table_offset);
    cout << "\nTag group:\t\t" << dec << tag->group_tags[0] << endl;
    cout << "Parent tag group:\t" << dec << tag->group_tags[1] << endl;
    cout << "Grandparent tag group:\t" << dec << tag->group_tags[2] << endl;
    cout << "Datum identifier:\t" << dec << tag->handle.identifier << endl;
    cout << "Datum index:\t\t" << dec << tag->handle.index << endl;
    cout << "Name offset:\t\t0x" << hex << tag->name_address << "\t\t" << dec << tag->name_address << endl;
    cout << "Base offset:\t\t0x" << hex << tag->base_address << "\t\t" << dec << tag->base_address << endl;
    cout << "In data file:\t\t" << tag->bool_in_data_file << endl;

    return 0;
}

string get_readable_file_version(long version)
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
string get_readable_scenario_type(short type)
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
