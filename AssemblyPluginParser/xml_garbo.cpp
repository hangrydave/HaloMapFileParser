#include "xml_garbo.h"

using namespace xml_garbo;

s_line* xml_garbo::parse_xml_line(std::string line)
{
    s_line* data = new s_line();

    int current_element_index = 0;
    std::string current_word;
    bool in_string = false;
    e_current_part part = type;
    for (int i = 0; i < line.size(); i++)
    {
        char c = line[i];
        if (c < 0)
            continue;

        if (c == '\t')
            continue;

        if (c == '/' && line[i - 1] == '<')
        {
            data->is_end = true;
            continue;
        }

        if (c == '!' && line[i - 1] == '<')
            return nullptr;

        if (part == type)
        {
            if (c == '<')
                continue;

            if (c == '>')
            {
                data->type = current_word;
                break;
            }

            if (c == ' ')
            {
                data->type = current_word;
                part = field;
                current_word.clear();
            }
            else
            {
                current_word += c;
            }
        }
        else if (part == field)
        {
            if (c == ' ')
                continue;

            if (c == '>')
                break;

            if (c == '=')
            {
                data->elements[current_element_index].field = current_word;
                part = value;
                current_word.clear();
            }
            else
            {
                current_word += c;
            }
        }
        else if (part == value)
        {
            if (c == '"')
            {
                if (current_word.size() > 1 && current_word[current_word.size() - 1] == '\\')
                {
                    current_word += c;
                }
                else
                {
                    if (in_string) {
                        data->elements[current_element_index].value = current_word;
                        current_element_index++;
                        part = field;
                        current_word.clear();
                    }

                    in_string = !in_string;
                }
            }
            else
            {
                current_word += c;
            }
        }
    }

    return data;
}

bool xml_garbo::should_skip_line(s_line* line_data)
{
    if (line_data->type.compare("?xml") == 0)
        return true;

    if (line_data->type.compare("plugin") == 0)
        return true;

    if (line_data->type.compare("revisions") == 0)
        return true;

    if (line_data->type.compare("revision") == 0)
        return true;

    if (line_data->type.compare("comment") == 0)
        return true;

    if (line_data->type.compare("option") == 0)
        return true;

    if (line_data->type.compare("bit") == 0)
        return true;

    return false;
}

const std::string& xml_garbo::get_value(const s_line* line_data, const std::string& key)
{
    for (int i = 0; i < 5; i++)
    {
        if (line_data->elements[i].field.compare(key) == 0)
            return line_data->elements[i].value;
    }
    return "";
}
