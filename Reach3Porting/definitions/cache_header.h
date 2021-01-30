#pragma once

#include <cstdint>
#include <string>
#include "../tag_structure.h"
#include "bytes_reader.h"

class cache_header : public tag_structure
{
public:
	uint32_t header_signature;
	int32_t file_version;
	int64_t file_length;
	int64_t file_compressed_length;

	uint64_t tag_header_address;
	uint32_t tag_buffer_offset;
	uint32_t tag_buffer_size;
	
	char source_file[256];
	char build[32];

	int16_t scenario_type;
	int16_t load_type;
	
	uint8_t unknown1;
	int8_t tracked_build;
	uint8_t unknown3;
	uint8_t unknown4;

	uint32_t unknown5;
	uint32_t unknown6;
	uint32_t unknown7; // 3
	uint32_t unknown8; // 3
	uint32_t unknown9; // 3
	
	int32_t string_count;
	int32_t string_table_length;
	int32_t string_table_indices_offset;
	int32_t string_table_offset;
	int32_t string_ids_namespace_table_count; // reach
	int32_t string_ids_namespace_table_offset; // reach

	uint32_t flags;

	uint64_t timestamp;
	uint64_t scenario_type_timestamps[4];
	
	char internal_name[32];
	uint32_t unknown7;
	char scenario_name[256];
	int32_t minor_version;
	
	uint32_t file_count;
	uint32_t file_table_offset;
	uint32_t file_table_length;
	uint32_t file_table_indices_offset;

	uint32_t checksum;

	uint32_t unknown8;
	uint32_t unknown9;
	uint32_t unknown10;
	uint32_t unknown11;
	uint32_t unknown12;
	uint32_t unknown13;
	uint32_t unknown14;
	uint32_t unknown15;
	uint32_t unknown16; // 3

	uint64_t virtual_base_address;
	uint32_t xdk_version;
	uint32_t unknown18;

	struct
	{
		uint64_t elements;
		uint64_t size;
	} partitions[6];

	uint32_t SHA1_A[5];
	uint32_t SHA1_B[5];
	uint32_t SHA1_C[5];
	uint32_t RSA[64];

	uint32_t GUID[4];

	struct
	{
		uint32_t offset_masks[4];
		struct
		{
			uint32_t offset;
			uint32_t size;
		} sections[4];
	} section_table;

	int32_t guid[4];

	void read_fields() override;
};

