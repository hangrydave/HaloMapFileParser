#pragma once

#include "bytes_reader.h"
#include "cache_info.h"

class tag_structure
{
private:
	bytes_reader* reader;
	s_cache_info info;
protected:
	virtual void read_fields() = 0;
	void read_int8(int8_t& i, e_game game = both);
	void read_uint8(uint8_t& i, e_game game = both);
	void read_int16(int16_t& i, e_game game = both);
	void read_uint16(uint16_t& i, e_game game = both);
	void read_int32(int32_t& i, e_game game = both);
	void read_uint32(uint32_t& i, e_game game = both);
	void read_int64(int64_t& i, e_game game = both);
	void read_uint64(uint64_t& i, e_game game = both);
	void read_float(float& i, e_game game = both);
	void read_string(char* c, int length, e_game game = both);
public:
	tag_structure(s_cache_info info);
	void read(bytes_reader* reader);
};

