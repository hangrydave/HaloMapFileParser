#include <string>
#include <sstream>
#include <filesystem>
#include <fstream>

namespace fs = std::filesystem;

using std::string;

namespace utilities
{
	void print_hex_dec(string label, long data);
	void print_hex_dec(string label, unsigned long data);
	void print_thing(string label, char data[]);
	void print_thing(string label, string data);
	void print_thing(string label, long data);
	void print_thing(string label, unsigned long data);
	void print_thing(string label, short data);
	void print_thing(string label, bool data);
	void print_thing(string label, float data);
	bool create_directory(string path);
	bool create_directories(string path);
	void create_file(string path);
	void write_to_file(string path, char bytes[]);
	string read_string(char* buffer, long offset);
	string read_string_without_slashes(char* buffer, long offset);
	void get_path_and_name(string& path, string& name, char* buffer, long offset);
}