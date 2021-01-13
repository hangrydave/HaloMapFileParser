#include "utilities.h"

void utilities::print_hex_dec(const string& label, long data)
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

void utilities::print_hex_dec(const string& label, unsigned long data)
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

void utilities::print_thing(const string& label, const char data[])
{
    printf("%-40s%-21s\n", label.c_str(), data);
}

void utilities::print_thing(const string& label, const string& data)
{
    printf("%-40s%-21s\n", label.c_str(), data.c_str());
}

void utilities::print_thing(const string& label, long data)
{
    printf("%-40s%-21s\n", label.c_str(), std::to_string(data).c_str());
}

void utilities::print_thing(const string& label, unsigned long data)
{
    printf("%-40s%-21s\n", label.c_str(), std::to_string(data).c_str());
}

void utilities::print_thing(const string& label, short data)
{
    printf("%-40s%-21s\n", label.c_str(), std::to_string(data).c_str());
}

void utilities::print_thing(const string& label, bool data)
{
    printf("%-40s%-21s\n", label.c_str(), std::to_string(data).c_str());
}

void utilities::print_thing(const string& label, float data)
{
    printf("%-40s%-21s\n", label.c_str(), std::to_string(data).c_str());
}

bool utilities::create_directory(const string& path)
{
    return fs::create_directory(path);
}

bool utilities::create_directories(const string& path)
{
    return fs::create_directories(path);
}

void utilities::create_file(const string& path)
{
    std::ofstream output;
    output.open(path);
    output << '\0';
    output.close();
}

void utilities::write_to_file(const string& path, const char(&bytes)[])
{
    std::ofstream output;
    output.open(path);
    output << bytes;
    output.close();
}

string utilities::read_string(const char* buffer, long offset)
{
    string s;
    while (buffer[offset] != '\0')
    {
        s += buffer[offset];
        offset++;
    }
    return s;
}

string utilities::read_string_without_slashes(const char* buffer, long offset)
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

void utilities::read_path(string& parent_path, string& file_path, const char* buffer, long offset)
{
    parent_path.clear();
    file_path.clear();

    string whitespace;
    char c = buffer[offset];
    while (c != '\0')
    {
        if (c == '\\')
        {

            if (file_path[file_path.size() - 1] == ' ')
                file_path = file_path.substr(0, file_path.size() - 1);

            parent_path += file_path + '\\';
            file_path = "";
        }
        else if (c == ' ')
        {
            whitespace += c;
        }
        else
        {
            if (!whitespace.empty())
            {
                file_path += whitespace;
                whitespace.clear();
            }
            file_path += c;
        }

        offset++;
        c = buffer[offset];
    }
    file_path = parent_path + file_path;
    parent_path = parent_path.substr(0, parent_path.size() - 1);
}

void utilities::write_some_chars(const string& path, const char* data, const int start_index, int size)
{
    std::ofstream output;
    output.open(path, std::ios::binary);
    int end = start_index + size;
    for (int i = start_index; i < end; i++)
    {
        output << data[i];
    }
    output.close();
}
