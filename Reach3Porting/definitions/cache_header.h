#pragma once

#include <cstdint>
#include <string>

class cache_header
{
private:
	uint64_t file_size;
	uint64_t index_header_address;
	uint32_t tag_buffer_offset;
	uint32_t virtual_size;
	int16_t type;
	int32_t string_table_count;
	int32_t string_table_size;
	int32_t string_index_table_offset;
	int32_t string_table_offset;
	int32_t string_namespace_table_count; // reach
	int32_t string_namespace_table_offset; // reach
	std::string internal_name;
	std::string scenario_name;
	int32_t file_table_count;
	int32_t file_table_offset;
	int32_t file_table_size;
	int32_t file_index_table_offset;
	uint64_t virtual_base_address;
	uint32_t xdk_version;
	struct
	{
		uint64_t load_address;
		uint64_t size;
	} partitions[6];
	struct
	{
		uint32_t mask;
	} offset_masks[4];
	struct
	{
		uint32_t virtual_address;
		uint32_t size;
	} sections[4];
	int32_t guid[4];
};

