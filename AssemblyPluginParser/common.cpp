#include "common.h"

using std::string;
using namespace common;

e_data_type common::get_data_type(const string& xml_type)
{
    if (xml_type.compare("plugin") == 0)
        return group_type;
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
    if (xml_type.compare("tagref") == 0 || xml_type.compare("tagRef") == 0)
        return tagref_type;
    if (xml_type.compare("dataref") == 0 || xml_type.compare("dataRef") == 0)
        return dataref_type;
    if (xml_type.compare("vector3") == 0)
        return vector3_type;
    if (xml_type.compare("vector4") == 0)
        return vector4_type;
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
    case dataref_type:
        return "dataref_type";
    case vector3_type:
        return "vector3_tag";
    case vector4_type:
        return "vector4_tag";
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
        return "s_point16";
    case string_type:
        return "char";
    case tagblock_type:
        return "s_tag_block";
    case tagref_type:
        return "s_tag_reference";
    case dataref_type:
        return "s_data_reference";
    case vector3_type:
        return "s_vector3";
    case vector4_type:
        return "s_vector4";
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

string common::trim(const string& s)
{
    // TODO: as a general thing, I care more about speed than memory usage, so optimize stuff for that
    int start = -1;
    for (int i = 0; i < s.size() && start == -1; i++)
    {
        char c = s[i];
        if (c != ' ' && c != '\t')
            start = i;
    }

    if (start == -1)
        return "";

    int end = -1;
    for (int i = s.size() - 1; i >= 0 && end == -1; i--)
    {
        char c = s[i];
        if (c != ' ' && c != '\t')
            end = i;
    }

    return s.substr(start, end + 1 - start);
}
