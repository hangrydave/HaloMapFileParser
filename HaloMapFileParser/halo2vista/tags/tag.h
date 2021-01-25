#pragma once

#include "definitions/tag_layouts.h"
#include <string>

class tag
{
public:
	tag(const s_tag_element& tag_struct, const std::string& file_path, const char* buffer);
	std::string get_group_name();
	char* get_bytes();
	datum_index get_datum_index();
	long get_group_magic();

private:
	char* bytes;

	// struct values
	long group_magic;
	datum_index datum_index;
	long offset;
	long data_size;

	std::string group_name;
	std::string file_path;
};

