#include <string>
#include <sstream>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <map>
#include <vector>

namespace fs = std::filesystem;

using std::string;

namespace utilities
{
	void print_hex_dec(const string& label, long data);
	void print_hex_dec(const string& label, unsigned long data);
	void print_thing(const string& label, const char data[]);
	void print_thing(const string& label, const string& data);
	void print_thing(const string& label, long data);
	void print_thing(const string& label, unsigned long data);
	void print_thing(const string& label, short data);
	void print_thing(const string& label, bool data);
	void print_thing(const string& label, float data);
	bool create_directory(const string& path);
	bool create_directories(const string& path);
	void create_file(const string& path);
	void write_to_file(const string& path, const char (&bytes)[]);
	string read_string(const char* buffer, long offset);
	string read_string_without_slashes(const char* buffer, long offset);
	void read_path(string& parent_path, string& file_path, const char* buffer, long offset);
	void write_some_chars(const string& path, const char* data, int start_index, int size);
}