#include "pphy.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* pphy_group = new tag_collection(
	"pphy",
	{
		
		undefined_tag("Flags", 9999),
		long_tag("Unknown"),
		long_tag("Unknown"),
		long_tag("Unknown"),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		long_tag("Density"),
		long_tag("Air Friction"),
		long_tag("Water Friction"),
		long_tag("Surface Friction"),
		long_tag("Elasticity"),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
	});
};
