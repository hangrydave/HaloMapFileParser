#pragma once

#include <string>

namespace common
{
    enum e_data_type
    {
        undefined_type,
        byte_type,
        short_type,
        long_type,
        float_type,
        point16_type,
        string_type,
        tagblock_type,
        tagref_type,
    };

    e_data_type get_data_type(const std::string& xml_type);
    std::string get_tag_type_string(e_data_type data_type);
    std::string get_data_type_string(e_data_type data_type);
    std::string clean(const std::string& s);
};

