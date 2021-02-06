#include "tag_structure.h"

tag_structure::tag_structure(s_cache_info info, long offset, long absolute_offset)
{
    m_info = info;
    m_offset = offset;
    m_absolute_offset = absolute_offset;
}

void tag_structure::read(bytes_reader* reader)
{
    this->reader = reader;
    load();
    sync();
}
/*
void tag_structure::read_int8(std::string name, e_game game = both)
{
    if (game == both || game == info.game)
        i = reader->read_int8();
}

void tag_structure::read_uint8(std::string name, e_game game = both)
{
    if (game == both || game == info.game)
        i = reader->read_uint8();
}

void tag_structure::read_int16(std::string name, e_game game = both)
{
    if (game == both || game == info.game)
        i = reader->read_int16();
}

void tag_structure::read_uint16(std::string name, e_game game = both)
{
    if (game == both || game == info.game)
        i = reader->read_uint16();
}

void tag_structure::read_int32(std::string name, e_game game = both)
{
    if (game == both || game == info.game)
        i = reader->read_int32();
}

void tag_structure::read_uint32(std::string name, e_game game = both)
{
    if (game == both || game == info.game)
        i = reader->read_uint32();
}

void tag_structure::read_int64(std::string name, e_game game = both)
{
    if (game == both || game == info.game)
        i = reader->read_int64();
}

void tag_structure::read_uint64(std::string name, e_game game = both)
{
    if (game == both || game == info.game)
        i = reader->read_uint64();
}

void tag_structure::read_float(std::string name, e_game game = both)
{
    if (game == both || game == info.game)
        i = reader->read_float();
}

void tag_structure::read_string(std::string name, int length = -1, e_game game = both)
{
    if (game == both || game == info.game)
        reader->read_string(c, length);
}*/

template <class T>
void tag_structure::read_block(std::string name, e_game game)
{
    long current_offset = reader->offset();
    field_map[name] = new tag_field(e_field_type::tagblock, current_offset - m_absolute_offset, current_offset);
    current_offset = reader->offset();
    // math to convert pointer to offset
    //tag_structure* structure = new T(m_info, );
}