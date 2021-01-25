#include "version1.h"

using namespace common;
using namespace xml_garbo;
using std::string;

void version1::parse_xml_to_tags(std::ofstream& output, const xml_garbo::s_line* line_data, const string& whitespace)
{
	string tag_type = get_tag_type_string(get_data_type(line_data->type));
	string name = line_data->elements[0].value;
	output << whitespace << tag_type << "(\"" << name << "\"";
}

version1::version1(const string& tag_name, std::ifstream& input, std::ofstream& h, std::ofstream& cpp)
	: input(input), h_output(h), cpp_output(cpp)
{
	this->tag_name = tag_name;
}

void version1::go_ham()
{
    string variable_name = clean(tag_name);

	h_output << h_top << variable_name << h_bottom << std::endl;

    cpp_output
        << "#include \"" << tag_name << ".h\""
        << "\n\nusing namespace tag_definitions;"
        << "\n\nnamespace tag_definitions"
        << "\n{"
        << "\n\ttag_collection* " << variable_name << "_group = new tag_collection("
        << "\n\t\"" << tag_name << "\","
        << "\n\t{"
        << "\n\t\t";

    string whitespace = "\t\t";
    string line;
    while (std::getline(input, line))
    {
        s_line* line_data = parse_xml_line(line);

        if ((line_data == NULL) != (!line_data))
            bool b = true;

        if (line_data == NULL)
            continue;

        if (line_data->type.compare("?xml") == 0)
            continue;

        if (line_data->type.compare("plugin") == 0)
            continue;

        if (line_data->type.compare("revisions") == 0)
            continue;

        if (line_data->type.compare("revision") == 0)
            continue;

        if (line_data->type.compare("comment") == 0)
            continue;

        if (line_data->type.compare("option") == 0)
            continue;

        if (line_data->type.compare("bit") == 0)
            continue;

        string tag_type = get_tag_type_string(get_data_type(line_data->type));
        string name = line_data->elements[0].value;

        bool is_block = tag_type.compare("block_tag") == 0;
        if (is_block)
        {
            if (line_data->is_end)
            {
                whitespace = whitespace.substr(0, whitespace.size() - 1);
                cpp_output << "\n" << whitespace << "}),";
                continue;
            }
            else
            {
                cpp_output
                    << "\n" << whitespace << tag_type << "(\"" << tag_name << "\","
                    << "\n" << whitespace << "{";
                whitespace += "\t";
            }
        }
        else if (!line_data->is_end)
        {
            if (tag_type.compare("undefined_tag") == 0)
            {
                cpp_output << "\n" << whitespace << tag_type << "(\"" << tag_name << "\", 9999),";
            }
            else
            {
                cpp_output << "\n" << whitespace << tag_type << "(\"" << tag_name << "\"),";
            }
        }

        delete line_data;
    }

    cpp_output
        << "\n\t});"
        << "\n};"
        << std::endl;
}
