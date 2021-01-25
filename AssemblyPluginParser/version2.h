#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "xml_garbo.h"
#include "common.h"

class version2
{
private:
	std::string tag_name;
	std::ifstream& input;
	std::ofstream& output;

	std::string top_1 = "#pragma once"
		"\n\nnamespace ";
	std::string top_2 = "\n{"
		"\n\tstruct group {";
	std::string bottom = "\n\t}"
		"\n}";

	std::vector<std::string> tagblocks;

	void variable_nameify(std::string& name);
public:
	version2(const std::string& tag_name, std::ifstream& input, std::ofstream& output);

	void go_ham();
};
