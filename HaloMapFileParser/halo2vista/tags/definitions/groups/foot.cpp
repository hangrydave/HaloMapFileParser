#include "foot.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* foot_group = new tag_collection(
	"foot",
	{
		
		block_tag("Effects",
		{
			block_tag("Old Materials",
			{
				undefined_tag("Effect", 9999),
				undefined_tag("Sound", 9999),
				undefined_tag("Material Name", 9999),
				short_tag("Global Material Index"),
				byte_tag("Sweetener Mode"),
				byte_tag("Unknown"),
			}),
			block_tag("Sounds",
			{
				undefined_tag("Tag", 9999),
				undefined_tag("Secondary Tag", 9999),
				undefined_tag("Material Name", 9999),
				short_tag("Global Material Index"),
				byte_tag("Sweetener Mode"),
				byte_tag("Unknown"),
			}),
			block_tag("Effects",
			{
				undefined_tag("Tag", 9999),
				undefined_tag("Secondary Tag", 9999),
				undefined_tag("Material Name", 9999),
				short_tag("Global Material Index"),
				byte_tag("Sweetener Mode"),
				byte_tag("Unknown"),
			}),
		}),
	});
};
