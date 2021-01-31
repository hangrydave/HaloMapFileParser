#pragma once

#include <cstdint>
#include <string>
#include "e_game.h"
#include "e_field_type.h"

class tag_field
{
private:
	e_field_type m_field_type;
	union
	{
		int8_t int8;
		uint8_t uint8;
		int16_t int16;
		uint16_t uint16;
		int32_t int32;
		uint32_t uint32;
		int64_t int64;
		uint64_t uint64;
		float f;
		char* str;
		struct
		{
			int32_t entry_count;
			uint32_t pointer;
		} tag_block;
		struct
		{
			int32_t tag_group_magic;
			uint32_t datum_index;
		} tag_ref;
		struct
		{
			int32_t size;
			uint32_t pointer;
		} data_ref;
	} data;
	int m_string_length;
	long m_offset;
	long m_absolute_offset;
public:
	tag_field(e_field_type type, int offset, int absolute_offset);
	int size();
	int offset();
	int absolute_offset();
};
