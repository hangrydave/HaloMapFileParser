#include "../pch.h"
#include "cache_header.h"

void cache_header::read_fields()
{
	read_uint32(header_signature);
	read_int32(file_version);
	read_int64(file_length);
	read_int64(file_compressed_length);
	
	read_uint64(tag_header_address);
	read_uint32(tag_buffer_offset);
	read_uint32(tag_buffer_size);

	read_string(source_file, 256);
	read_string(build, 32);

	read_int16(scenario_type);
	read_int16(load_type);

	read_uint8(unknown1);
	read_int8(tracked_build);
	read_uint8(unknown3);
	// too lazy to do this, maybe switch to an automated system which stores the values in a map<string, something>?
	//read_uint8()
}