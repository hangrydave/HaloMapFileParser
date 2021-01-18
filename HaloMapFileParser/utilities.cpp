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

void utilities::print_magic(const string& label, long magic)
{
    std::stringstream ss;

    ss.str(std::string());
    ss.clear();
    ss << "0x" << std::hex << magic;
    string hex_num = ss.str();

    string text = utilities::hex_to_string(magic);

    printf("%-40s%-21s%-7s\n", label.c_str(), hex_num.c_str(), text.c_str());
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

void utilities::read_path(string& parent_path, string& file_path, const char* buffer, long offset)
{
    parent_path.clear();
    file_path.clear();

    char c = buffer[offset];
    while (c != '\0')
    {
        if (c == '\\')
        {
            file_path = trim(file_path);
            parent_path += file_path + '\\';
            file_path = "";
        }
        else
        {
            file_path += c;
        }

        offset++;
        c = buffer[offset];
    }
    file_path = parent_path + file_path;

    if (parent_path.size() != 0)
        parent_path.pop_back();
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

int utilities::read_int(const char* buffer, long offset)
{
    int num = 0;
    num += (buffer[offset] & 0xff);
    num += ((buffer[offset + 1] & 0xff) << 8);
    num += ((buffer[offset + 2] & 0xff) << 16);
    num += ((buffer[offset + 3] & 0xff) << 24);
    return num;
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

string utilities::hex_to_string(long hex)
{
    if (hex == 0)
        return "";

    int index = 4;
    char chars[4];

    while (hex > 0)
    {
        index--;
        chars[index] = (char) (hex & 0xFF);
        hex >>= 8;
    }
    return string(chars, 4);
}

string utilities::trim(const string& s)
{
    // TODO: as a general thing, I care more about speed than memory usage, so optimize stuff for that
    int start = -1;
    for (int i = 0; i < s.size() && start == -1; i++)
    {
        char c = s[i];
        if (c != ' ')
            start = i;
    }

    if (start == -1)
        return "";

    int end = -1;
    for (int i = s.size() - 1; i >= 0 && end == -1; i--)
    {
        char c = s[i];
        if (c != ' ')
            end = i;
    }

    return s.substr(start, end + 1 - start);
}
