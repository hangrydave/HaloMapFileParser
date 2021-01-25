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
