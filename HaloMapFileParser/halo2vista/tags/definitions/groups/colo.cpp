#include "colo.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* colo_group = new tag_collection(
	"colo",
	{
		
		block_tag("Colors",
		{
			string_tag("Name"),
			undefined_tag("Color", 9999),
		}),
	});
};
