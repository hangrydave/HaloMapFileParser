#include "pch.h"
#include "tag_structure.h"

tag_structure::tag_structure(s_cache_info info)
{
    this->info = info;
}

void tag_structure::read(bytes_reader* reader)
{
    this->reader = reader;
    read_fields();
}

void tag_structure::read_int8(int8_t& i, e_game game = both)
{
    if (game == both || game == info.game)
        i = reader->read_int8();
}

void tag_structure::read_uint8(uint8_t& i, e_game game = both)
{
    if (game == both || game == info.game)
        i = reader->read_uint8();
}

void tag_structure::read_int16(int16_t& i, e_game game = both)
{
    if (game == both || game == info.game)
        i = reader->read_int16();
}

void tag_structure::read_uint16(uint16_t& i, e_game game = both)
{
    if (game == both || game == info.game)
        i = reader->read_uint16();
}

void tag_structure::read_int32(int32_t& i, e_game game = both)
{
    if (game == both || game == info.game)
        i = reader->read_int32();
}

void tag_structure::read_uint32(uint32_t& i, e_game game = both)
{
    if (game == both || game == info.game)
        i = reader->read_uint32();
}

void tag_structure::read_int64(int64_t& i, e_game game = both)
{
    if (game == both || game == info.game)
        i = reader->read_int64();
}

void tag_structure::read_uint64(uint64_t& i, e_game game = both)
{
    if (game == both || game == info.game)
        i = reader->read_uint64();
}

void tag_structure::read_float(float& i, e_game game = both)
{
    if (game == both || game == info.game)
        i = reader->read_float();
}

void tag_structure::read_string(char* c, int length, e_game game = both)
{
    if (game == both || game == info.game)
        reader->read_string(c, length);
}