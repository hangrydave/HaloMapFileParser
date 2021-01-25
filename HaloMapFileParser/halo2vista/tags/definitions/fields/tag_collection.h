#pragma once

#include <map>
#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include "tag_field.h"

class tag_collection
{
private:
	std::string _name;
	int _size = 0;
	std::map<std::string, std::shared_ptr<tag_definitions::tag_field>> name_tag_map;
public:
	tag_collection(std::string name, std::vector<std::shared_ptr<tag_definitions::tag_field>> tags);
	tag_collection(std::initializer_list<std::shared_ptr<tag_definitions::tag_field>> tags);
	void set_name(const std::string& name);
	const std::string& name();
	int size();
	int count();
	std::shared_ptr<tag_definitions::tag_field> operator[](const std::string& name);
};
