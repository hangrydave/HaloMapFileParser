#pragma once

#include <string>

namespace xml_garbo
{
    // <... field="value" ...>
    struct s_element
    {
        std::string field;
        std::string value;
    };

    // <type {elements}>
    struct s_line
    {
        std::string type;
        bool is_end = false;
        bool is_unknown = false;
        s_element elements[5];
    };

    enum e_current_part
    {
        type,
        field,
        value
    };

    s_line* parse_xml_line(std::string line);
    bool should_skip_line(s_line* line_data);
    const std::string& get_value(const s_line* line_data, const std::string& key);
};
