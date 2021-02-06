#pragma once

#include <map>
#include "bytes_reader.h"
#include "cache_info.h"
#include "tag_field.h"

class tag_structure
{
protected:
	s_cache_info m_info;
	bytes_reader* reader;
private:
	std::map<std::string, tag_field*> field_map;
	std::map<std::string, tag_structure*> block_map;
	long m_offset;
	long m_absolute_offset;
protected:
	virtual void sync() = 0;
	void read(bytes_reader* reader);
	virtual void load() = 0;
	void read_int8(std::string name, e_game game = both);
	void read_uint8(std::string name, e_game game = both);
	void read_int16(std::string name, e_game game = both);
	void read_uint16(std::string name, e_game game = both);
	void read_int32(std::string name, e_game game = both);
	void read_uint32(std::string name, e_game game = both);
	void read_int64(std::string name, e_game game = both);
	void read_uint64(std::string name, e_game game = both);
	void read_float(std::string name, e_game game = both);
	void read_string(std::string name, int length = -1, e_game game = both);
	template <class T>
	void read_block(std::string name, e_game game);
public:
	tag_structure(s_cache_info info, long offset, long absolute_offset);
};

