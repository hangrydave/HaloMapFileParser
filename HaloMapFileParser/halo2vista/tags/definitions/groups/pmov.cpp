#include "pmov.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* pmov_group = new tag_collection(
	"pmov",
	{
		
		undefined_tag("Template", 9999),
		undefined_tag("Flags", 9999),
		block_tag("Movements",
		{
			short_tag("Type"),
			short_tag("Unknown"),
			block_tag("Parameters",
			{
				long_tag("Parameter ID"),
				short_tag("Unknown"),
				short_tag("Unknown"),
				short_tag("Unknown"),
				short_tag("Unknown"),
				undefined_tag("Function", 9999),
			}),
			short_tag("Unknown"),
			short_tag("Unknown"),
			long_tag("Unknown"),
		}),
	});
};
