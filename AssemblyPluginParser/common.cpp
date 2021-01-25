#include "common.h"

using std::string;
using namespace common;

e_data_type common::get_data_type(const string& xml_type)
{
    if (xml_type.compare("int8") == 0)
        return byte_type;
    if (xml_type.compare("enum8") == 0)
        return byte_type;
    if (xml_type.compare("flag8") == 0)
        return byte_type;
    if (xml_type.compare("enum16") == 0)
        return short_type;
    if (xml_type.compare("flags16") == 0)
        return short_type;
    if (xml_type.compare("int16") == 0)
        return short_type;
    if (xml_type.compare("float32") == 0)
        return float_type;
    if (xml_type.compare("int32") == 0)
        return long_type;
    if (xml_type.compare("point16") == 0)
        return point16_type;
    if (xml_type.compare("ascii") == 0)
        return string_type;
    if (xml_type.compare("tagblock") == 0)
        return tagblock_type;
    if (xml_type.compare("tagref") == 0)
        return tagref_type;
    //if (xml_type.compare("undefined") == 0)
    return undefined_type;
    //return "WAWAWEEWAH";
}

string common::get_tag_type_string(e_data_type data_type)
{
    switch (data_type)
    {
    case byte_type:
        return "byte_tag";
    case short_type:
        return "short_tag";
    case float_type:
        return "float_tag";
    case long_type:
        return "long_tag";
    case point16_type:
        return "point16_tag";
    case string_type:
        return "string_tag";
    case tagblock_type:
        return "block_tag";
    case tagref_type:
        return "tagref_tag";
    case undefined_type:
    default:
        return "undefined_tag";
    }
}

string common::get_data_type_string(e_data_type data_type)
{
    switch (data_type)
    {
    case byte_type:
        return "char";
    case short_type:
        return "short";
    case float_type:
        return "float";
    case long_type:
        return "long";
    case point16_type:
        return "point16";
    case string_type:
        return "char";
    case tagblock_type:
        return "tagblock";
    case tagref_type:
        return "tagref";
    case undefined_type:
    default:
        return "char";
    }
}

string common::clean(const string& s)
{
    string cleaned = s;
    for (int i = 0; i < s.size(); i++)
    {
        char c = cleaned[i];
        if (c == '!' || c == '+')
            cleaned[i] = '_';
    }
    return cleaned;
}
