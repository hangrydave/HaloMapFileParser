#include "utilities.h"

void utilities::print_hex_dec(std::string label, long data)
{
    std::stringstream ss;

    ss.str(std::string());
    ss.clear();
    ss << "0x" << std::hex << data;
    std::string hex_num = ss.str();

    ss.str(std::string());
    ss.clear();
    ss << std::dec << data;
    std::string dec_num = ss.str();

    printf("%-40s%-21s%-7s\n", label.c_str(), hex_num.c_str(), dec_num.c_str());
}

void utilities::print_thing(std::string label, std::string data)
{
    printf("%-40s%-21s\n", label.c_str(), data.c_str());
}

void utilities::print_thing(std::string label, long data)
{
    printf("%-40s%-21s\n", label.c_str(), std::to_string(data).c_str());
}