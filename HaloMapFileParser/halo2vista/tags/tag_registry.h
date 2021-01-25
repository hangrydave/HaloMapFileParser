#pragma once

#include "definitions/fields/tag_collection.h"
#include "definitions/bitmaps.h"

class tag_registry
{
private:
	std::map<std::string, tag_collection*> tag_group_map;
public:
	void register_tag_group(tag_collection* tag_group);
	void register_tag_definitions();
	tag_collection* operator[](const std::string& name);
};

