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
	string var_name = "";
	for (int i = 0; i < name.size(); i++)
	{
		char c = name[i];
		if ((!isalpha(c) && !isdigit(c)) || c == '\'')
			var_name += '_';
		else if (isdigit(c) && i == 0)
		{
			var_name += "_";
			var_name += c;
		}
		else if (isalpha(c))
			var_name += tolower(c);
		else if (c == '/')
			var_name += "_slash_";
		else
			var_name += c;
	}
	name = var_name;
}

void version2::print_data(s_data_to_print data)
{
	string size_modifier = "";
	string comment = "";
	if (data.data_type == undefined_type || data.data_type == string_type)
	{
		size_modifier = "[" + std::to_string(data.byte_count) + "]";

		if (data.data_type == undefined_type)
			comment = " // ???";
	}

	switch (data.struct_position)
	{
	case group_start:
		group = "\n\tstruct group"
				"\n\t{";
		break;
	case group_variable:
		group += "\n\t\t" + data.type + " " + data.name + size_modifier + ";" + comment;
		break;
	case group_end:
		group += "\n\t};";
		break;
	case tagblock_start:
		group += "\n\t\ts_tag_block " + data.name + "_block;";
		tagblock_level++;
		tagblock_cache.push_back("\tstruct " + data.name + "_block\n\t{");

		struct_name_count_map.push_back(new std::map<string, int>());
		break;
	case tagblock_variable:
		tagblock_cache[tagblock_level] += "\n\t\t" + data.type + " " + data.name + size_modifier + ";" + comment;
		break;
	case tagblock_end:
		tagblock_cache[tagblock_level] += "\n\t};";
		tagblocks.push_back(tagblock_cache[tagblock_level]);
		tagblock_cache.pop_back();
		tagblock_level--;

		delete struct_name_count_map[struct_name_count_map.size() - 1];
		struct_name_count_map.pop_back();
		break;
	case nested_tagblock_start:
		tagblock_cache[tagblock_level] += "\n\t\ts_tag_block " + data.name + "_block;";
		tagblock_level++;
		tagblock_cache.push_back("\tstruct " + data.name + "_block\n\t{");

		struct_name_count_map.push_back(new std::map<string, int>());
		break;
	}
}

void version2::calculate_size(s_data_to_print& data, long& new_offset, const s_line* line_data)
{
	string offset_string = line_data->elements[1].value;
	if (!offset_string.empty())
	{
		new_offset = std::stol(offset_string, nullptr, 16);
		long count = new_offset - data.offset;
		if (count < 0)
			count = 999;
		data.byte_count = count;
	}
}

void version2::construct_data(s_data_to_print& data, common::e_data_type data_type, long offset, s_line* line_data)
{
	string tag_type = get_data_type_string(data_type);
	string name = line_data->elements[0].value;
	variable_nameify(name);
	if (name.empty())
		name = "unknown";

	if (name.compare("template") == 0)
		name += '_';

	std::map<string, int>* last_map;
	if (data_type == tagblock_type)
		last_map = struct_name_count_map[0];
	else
		last_map = struct_name_count_map[struct_name_count_map.size() - 1];

	if (last_map->find(name) == last_map->end())
	{
		last_map->operator[](name) = 1;
	}
	else
	{
		last_map->operator[](name)++;
		name += std::to_string(last_map->at(name));
	}

	data.data_type = data_type;
	data.type = tag_type;
	data.name = name;
	data.offset = offset;

	if (data.data_type == string_type)
	{
		string string_length_string = get_value(line_data, "length");
		data.byte_count = std::stol(string_length_string, nullptr, 16);
	}

	if (line_data->is_end)
	{
		if (data_type == tagblock_type)
		{
			data.struct_position = tagblock_end;
		}
		else if (data_type == group_type)
		{
			data.struct_position = group_end;
		}
	}
	else
	{
		if (data_type == tagblock_type)
		{
			if (tagblock_level > -1)
			{
				data.struct_position = nested_tagblock_start;
			}
			else
			{
				data.struct_position = tagblock_start;
			}
		}
		else
		{
			if (tagblock_level > -1)
			{
				data.struct_position = tagblock_variable;
			}
			else
			{
				data.struct_position = group_variable;
			}
		}
	}
}

void version2::go_ham()
{
	group = "\n\tstruct group"
		"\n\t{";
	current_struct = "group";
	struct_name_count_map.push_back(new std::map<string, int>());

	s_data_to_print print_me;
	print_me.name = "\n\tstruct group"
		"\n\t{";
	print_me.struct_position = group_start;
	print_me.data_type = group_type;

	string input_line;
	while (std::getline(input, input_line))
	{
		input_line = trim(input_line);
		if (!input_line.empty() && input_line[0] != '<')
			continue;

		s_line* line_data = parse_xml_line(input_line);

		if (line_data == NULL)
			continue;

		if (line_data->is_end && line_data->type.compare("plugin") == 0)
			print_data(print_me);

		if (print_me.struct_position == group_start && line_data == NULL)
			continue;

		if (should_skip_line(line_data))
			continue;

		e_data_type data_type = get_data_type(line_data->type);
		if (line_data->is_end && 
			data_type != tagblock_type && 
			data_type != group_type)
			continue;

		long offset = -1;
		calculate_size(print_me, offset, line_data);

		print_data(print_me);

		construct_data(print_me, data_type, offset, line_data);

		delete line_data;

		// dump tagblocks
		if (!tagblock_cache.empty() && tagblock_level == -1)
		{
			for (int i = 0; i < tagblock_cache.size(); i++)
			{
				tagblocks.push_back(tagblock_cache[i]);
			}
			tagblock_cache.clear();
		}
	}

	variable_nameify(tag_name);
	output << top_1 << tag_name << top_2;
	for (int i = 0; i < tagblocks.size(); i++)
	{
		output << "\n" << tagblocks[i] << "\n";
	}
	output << this->group << "\n\t};";
	output << bottom;
}
