#include "utilities.h"

void utilities::print_hex_dec(string label, long data)
{
    std::stringstream ss;

    ss.str(std::string());
    ss.clear();
    ss << "0x" << std::hex << data;
    string hex_num = ss.str();

    ss.str(std::string());
    ss.clear();
    ss << std::dec << data;
    string dec_num = ss.str();

    printf("%-40s%-21s%-7s\n", label.c_str(), hex_num.c_str(), dec_num.c_str());
}

void utilities::print_hex_dec(string label, unsigned long data)
{
    std::stringstream ss;

    ss.str(std::string());
    ss.clear();
    ss << "0x" << std::hex << data;
    string hex_num = ss.str();

    ss.str(std::string());
    ss.clear();
    ss << std::dec << data;
    string dec_num = ss.str();

    printf("%-40s%-21s%-7s\n", label.c_str(), hex_num.c_str(), dec_num.c_str());
}

void utilities::print_thing(string label, char data[])
{
    printf("%-40s%-21s\n", label.c_str(), data);
}

void utilities::print_thing(string label, string data)
{
    printf("%-40s%-21s\n", label.c_str(), data.c_str());
}

void utilities::print_thing(string label, long data)
{
    printf("%-40s%-21s\n", label.c_str(), std::to_string(data).c_str());
}

void utilities::print_thing(string label, unsigned long data)
{
    printf("%-40s%-21s\n", label.c_str(), std::to_string(data).c_str());
}

void utilities::print_thing(string label, short data)
{
    printf("%-40s%-21s\n", label.c_str(), std::to_string(data).c_str());
}

void utilities::print_thing(string label, bool data)
{
    printf("%-40s%-21s\n", label.c_str(), std::to_string(data).c_str());
}

void utilities::print_thing(string label, float data)
{
    printf("%-40s%-21s\n", label.c_str(), std::to_string(data).c_str());
}

bool utilities::create_directory(string path)
{
    return fs::create_directory(path);
}

bool utilities::create_directories(string path)
{
    return fs::create_directories(path);
}

void utilities::create_file(string path)
{
    std::ofstream output;
    output.open(path);
    output << '\0';
    output.close();
}

void utilities::write_to_file(string path, char bytes[])
{
    std::ofstream output;
    output.open(path);
    output << bytes;
    output.close();
}

string utilities::read_string(char* buffer, long offset)
{
    string s;
    while (buffer[offset] != '\0')
    {
        s += buffer[offset];
        offset++;
    }
    return s;
}

string utilities::read_string_without_slashes(char* buffer, long offset)
{
    string s;
    char c = buffer[offset];
    while (c != '\0')
    {
        if (c == '\\')
            s += '_';
        else
            s += c;
        
        offset++;
        c = buffer[offset];
    }
    return s;
}

void utilities::get_path_and_name(string& path, string& name, char* buffer, long offset)
{
    path.clear();
    name.clear();

    string whitespace;
    char c = buffer[offset];
    while (c != '\0')
    {
        if (c == '\\')
        {

            if (name[name.size() - 1] == ' ')
                name = name.substr(0, name.size() - 1);

            path += name + '\\';
            name = "";
        }
        else if (c == ' ')
        {
            whitespace += c;
        }
        else
        {
            if (!whitespace.empty())
            {
                name += whitespace;
                whitespace.clear();
            }
            name += c;
        }

        offset++;
        c = buffer[offset];
    }
    path = path.substr(0, path.size() - 1);
}
