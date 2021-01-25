#include "tag_registry.h"

using namespace tag_definitions;

void tag_registry::register_tag_group(tag_collection* tag_group)
{
	tag_group_map[tag_group->name()] = tag_group;
}

void tag_registry::register_tag_definitions()
{
	register_tag_group(bitmap_group);
}

tag_collection* tag_registry::operator[](const std::string& name)
{
	return tag_group_map[name];
}
