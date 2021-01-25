#include "____.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* _____group = new tag_collection(
	"____",
	{
		
		block_tag("Comments",
		{
			long_tag("Position x"),
			long_tag("Position y"),
			long_tag("Position z"),
			undefined_tag("Type", 9999),
			string_tag("Name"),
			string_tag("Comment"),
		}),
	});
};
