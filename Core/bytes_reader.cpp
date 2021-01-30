#include "pch.h"
#include "bytes_reader.h"

bytes_reader::bytes_reader(const std::string& path)
{
    read_file(path);
}

void bytes_reader::read_file(const std::string& path)
{
    std::fstream file(path, std::ios::in | std::ios::binary);

    // https://stackoverflow.com/a/22986486/5132781
    file.ignore(std::numeric_limits<std::streamsize>::max());
    byte_count = file.gcount();
    file.clear();
    file.seekg(0, std::ios_base::beg);

    buffer = new char[byte_count];
    file.read(buffer, byte_count);
    file.close();
}

long bytes_reader::size()
{
    return byte_count;
}

long bytes_reader::offset()
{
    return m_offset;
}

void bytes_reader::seek(long offset)
{
    m_offset = offset;
}

int8_t bytes_reader::read_int8()
{
    int8_t num = buffer[m_offset] & 0xff;
    m_offset += 1;
    return num;
}

uint8_t bytes_reader::read_uint8()
{
    uint8_t num = buffer[m_offset] & 0xff;
    m_offset += 1;
    return num;
}

int16_t bytes_reader::read_int16()
{
    int16_t num = 0;
    for (int i = 0; i < 2; i++)
    {
        num += (buffer[m_offset + i] & 0xff) << (8 * i);
    }
    m_offset += 2;
    return num;
}

uint16_t bytes_reader::read_uint16()
{
    uint16_t num = 0;
    for (int i = 0; i < 2; i++)
    {
        num += (buffer[m_offset + i] & 0xff) << (8 * i);
    }
    m_offset += 2;
    return num;
}

int32_t bytes_reader::read_int32()
{
    int32_t num = 0;
    for (int i = 0; i < 4; i++)
    {
        num += (buffer[m_offset + i] & 0xff) << (8 * i);
    }
    m_offset += 4;
    return num;
}

uint32_t bytes_reader::read_uint32()
{
    uint32_t num = 0;
    for (int i = 0; i < 4; i++)
    {
        num += (buffer[m_offset + i] & 0xff) << (8 * i);
    }
    m_offset += 4;
    return num;
}

int64_t bytes_reader::read_int64()
{
    int64_t num = 0;
    for (int i = 0; i < 8; i++)
    {
        num += (buffer[m_offset + i] & 0xff) << (8 * i);
    }
    m_offset += 8;
    return num;
}

uint64_t bytes_reader::read_uint64()
{
    uint64_t num = 0;
    for (int i = 0; i < 8; i++)
    {
        num += (buffer[m_offset + i] & 0xff) << (8 * i);
    }
    m_offset += 8;
    return num;
}

float bytes_reader::read_float()
{
    float num = 0;
    for (int i = 0; i < 4; i++)
    {
        num += (buffer[m_offset + i] & 0xff) << (8 * i);
    }
    m_offset += 4;
    return num;
}

std::string bytes_reader::read_string()
{
    std::string s;
    while (buffer[m_offset] != '\0')
    {
        s += buffer[m_offset];
        m_offset++;
    }
    return s;
}

std::string bytes_reader::read_string(int length)
{
    std::string s;
    for (int i = 0; i < length; i++)
    {
        s += buffer[m_offset + i];
    }
    m_offset += length;
    return s;
}

void bytes_reader::read_string(char* c, int length)
{
    for (int i = 0; i < length; i++)
    {
        c[i] = buffer[m_offset + i];
    }
    m_offset += length;
}
