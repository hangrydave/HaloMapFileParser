#include "sily.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* sily_group = new tag_collection(
	"sily",
	{
		
		undefined_tag("Setting Catergory", 9999),
		long_tag("Value"),
		undefined_tag("Unicode String List Of Options", 9999),
		undefined_tag("Title Text", 9999),
		undefined_tag("Header Text", 9999),
		undefined_tag("Description Text", 9999),
		block_tag("Options",
		{
			undefined_tag("Flags", 9999),
			long_tag("Value"),
			undefined_tag("Label", 9999),
		}),
	});
};
