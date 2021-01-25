#include "trak.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* trak_group = new tag_collection(
	"trak",
	{
		
		undefined_tag("Unknown", 9999),
		undefined_tag("", 9999),
		undefined_tag("", 9999),
		undefined_tag("", 9999),
		undefined_tag("", 9999),
		undefined_tag("", 9999),
		undefined_tag("", 9999),
		undefined_tag("", 9999),
		undefined_tag("", 9999),
		undefined_tag("", 9999),
		block_tag("Camera Points",
		{
			undefined_tag("Position", 9999),
			undefined_tag("Orientation", 9999),
		}),
	});
};
