#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include "xml_garbo.h"
#include "common.h"

class version1
{
private:
	std::string tag_name;
	std::ifstream& input;
	std::ofstream& h_output;
	std::ofstream& cpp_output;

	std::string h_top = "#pragma once"
		"\n\n#include \"../fields/tag_collection.h\""
		"\n\nnamespace tag_definitions"
		"\n{"
		"\n\textern tag_collection* ";
	std::string h_bottom = "_group;"
		"\n}";

	void parse_xml_to_tags(std::ofstream& output, const xml_garbo::s_line* line_data, const std::string& whitespace);

public:
	version1(const std::string& tag_name, std::ifstream& input, std::ofstream& h, std::ofstream& cpp);
	
	void go_ham();
};

