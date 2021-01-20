#pragma once

#include <vector>
#include <utility>
#include <string>

#define TAG_GROUP(name, size)								\															\
	el_fuckery();											\
	std::vector<std::pair<e_field, std::string>> fields

void el_fuckery()
{

}

enum e_field
{
	f_undefined,
	f_bit,
	f_byte,
	f_short,
	f_long,
	f_float,
	f_colorf,
	f_string_id,
	f_tag_block,
	f_tag_ref,
	f_data_ref,
};

TAG_GROUP("eee", 1)
{
	{ f_bit, "e" }
};
