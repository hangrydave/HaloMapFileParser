#pragma once

#include <fstream>
#include <string>

class bytes_reader
{
private:
	long byte_count;
	long m_offset;
	char* buffer;
	void read_file(const std::string& path);
public:
	bytes_reader(const std::string& path);
	long size();
	long offset();
	void seek(long offset);
	int16_t read_int16();
	uint16_t read_uint16();
	int32_t read_int32();
	uint32_t read_uint32();
	int64_t read_int64();
	uint64_t read_uint64();
	float read_float();
	std::string read_string();
	std::string read_string(int length);
};

