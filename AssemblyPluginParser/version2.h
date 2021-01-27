#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include "xml_garbo.h"
#include "common.h"

class version2
{
private:
	enum e_struct_position
	{
		group_start,
		group_variable,
		group_end,
		tagblock_start,
		tagblock_variable,
		tagblock_end,
		nested_tagblock_start
	};

	struct s_data_to_print
	{
		std::string type;
		std::string name;
		common::e_data_type data_type;
		e_struct_position struct_position;
		long offset = 0;
		int byte_count = -1;
	};

	std::string tag_name;
	std::ifstream& input;
	std::ofstream& output;

	std::string top_1 = "#pragma once"
		"\n\n#include \"../tag_layouts.h\""
		"\n\nnamespace ";
	std::string top_2 = "\n{";
	std::string bottom = "\n}\n";

	int unknown_count = 0;
	std::string group = "";
	int tagblock_level = -1;
	std::string current_struct;

	// this will get dumped into tagblocks
	std::vector<std::string> tagblock_cache;

	std::vector<std::string> tagblocks;
	std::vector<std::map<std::string, int>*> struct_name_count_map;

	void print_data(s_data_to_print data);
	void variable_nameify(std::string& name);
	void calculate_size(s_data_to_print& data, long& new_offset, const xml_garbo::s_line* line_data);
	void construct_data(s_data_to_print& data, common::e_data_type data_type, long offset, xml_garbo::s_line* line_data);

public:
	version2(const std::string& tag_name, std::ifstream& input, std::ofstream& output);

	void go_ham();
};
