#pragma once

#include "definitions/layouts.h"
#include "../../utilities.h"
#include <string>

class tag
{
public:
	tag(const s_tag_element& tag_struct, const string& file_path, const char* buffer);
	string get_group_name();
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

	string group_name;
	string file_path;
};

