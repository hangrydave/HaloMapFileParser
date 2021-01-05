#include <string>
#include <sstream>

namespace utilities
{
	void print_hex_dec(std::string label, long data);
	void print_hex_dec(std::string label, unsigned long data);
	void print_thing(std::string label, std::string data);
	void print_thing(std::string label, long data);
	void print_thing(std::string label, unsigned long data);
	void print_thing(std::string label, short data);
	void print_thing(std::string label, bool data);
}