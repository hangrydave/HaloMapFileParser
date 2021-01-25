#pragma once

#include <string>
#include <sstream>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <map>
#include <vector>

namespace fs = std::filesystem;

namespace utilities
{
	void print_hex_dec(const std::string& label, long data);
	void print_hex_dec(const std::string& label, unsigned long data);
	void print_thing(const std::string& label, const char data[]);
	void print_thing(const std::string& label, const std::string& data);
	void print_thing(const std::string& label, long data);
	void print_thing(const std::string& label, unsigned long data);
	void print_thing(const std::string& label, short data);
	void print_thing(const std::string& label, bool data);
	void print_thing(const std::string& label, float data);
	void print_magic(const std::string& label, long magic);

	bool file_exists(const std::string& path);
	bool create_directory(const std::string& path);
	bool create_directories(const std::string& path);
	void create_file(const std::string& path);
	void write_to_file(const std::string& path, const char* bytes, int count);
	void read_path(std::string& parent_path, std::string& file_path, const char* buffer, long offset);
	void write_some_chars(const std::string& path, const char* data, int start_index, int size);

	char* read_bytes(const char* buffer, long offset, int count);
	int read_int(const char* buffer, long offset);
	std::string read_string(const char* buffer, long offset);
	std::string read_string_without_slashes(const char* buffer, long offset);

	std::string hex_to_string(long hex);
	std::string trim(const std::string& s);
}