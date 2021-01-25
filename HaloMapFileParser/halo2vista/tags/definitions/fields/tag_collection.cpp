#include "tag_collection.h"

using std::shared_ptr;
using namespace tag_definitions;

tag_collection::tag_collection(std::string name, std::vector<shared_ptr<tag_field>> tags)
{
	_name = name;
	for (shared_ptr<tag_field> field : tags)
	{
		_size += field->size();
		name_tag_map[field->name()] = field;
	}
}

tag_collection::tag_collection(std::initializer_list<shared_ptr<tag_field>> tags)
{
	for (shared_ptr<tag_field> field : tags)
	{
		_size += field->size();
		name_tag_map[field->name()] = field;
	}
}

void tag_collection::set_name(const std::string& name)
{
	_name = name;
}

const std::string& tag_collection::name()
{
	return _name;
}

int tag_collection::size()
{
	return _size;
}

int tag_collection::count()
{
	return name_tag_map.size();
}

shared_ptr<tag_field> tag_collection::operator[](const std::string& name)
{
	if (name_tag_map.find(name) == name_tag_map.end())
		return NULL;

	return name_tag_map[name];
}
