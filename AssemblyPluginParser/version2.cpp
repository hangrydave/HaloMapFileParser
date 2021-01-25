#include "version2.h"

using namespace common;
using namespace xml_garbo;
using std::string;

version2::version2(const std::string& tag_name, std::ifstream& input, std::ofstream& output)
	: input(input), output(output)
{
	this->tag_name = tag_name;
}

void version2::variable_nameify(string& name)
{
	string var_name;
	for (int i = 0; i < name.size(); i++)
	{
		char c = name[i];
		if (isdigit(c) && i == 0)
			var_name = '_' + c;
		else if (c == ' ')
			var_name += '_';
		else if (isalpha(c))
			var_name += tolower(c);
		else
			var_name += c;
	}
	name = var_name;
}

void version2::go_ham()
{
	// print out group struct
	// when hit tag block, recursively go in and save tagblock string for later
	// finish group struct
	// tag blokes
}