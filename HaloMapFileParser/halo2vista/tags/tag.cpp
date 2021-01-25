#include "tag.h"

using std::string;

tag::tag(const s_tag_element& tag_struct, const string& file_path, const char* buffer)
{
	group_magic = tag_struct.tag_group_magic;
	datum_index = tag_struct.datum_index;
	offset = tag_struct.offset;
	data_size = tag_struct.data_size;

	this->file_path = file_path;
	//this->group_name = utilities::hex_to_string(group_magic);
}

string tag::get_group_name()
{
	return group_name;
}

char* tag::get_bytes()
{
	return bytes;
}

datum_index tag::get_datum_index()
{
	return datum_index;
}

long tag::get_group_magic()
{
	return group_magic;
}
