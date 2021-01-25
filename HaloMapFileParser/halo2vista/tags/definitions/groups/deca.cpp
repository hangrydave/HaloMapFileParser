#include "deca.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* deca_group = new tag_collection(
	"deca",
	{
		
		short_tag("Flags"),
		short_tag("Type"),
		short_tag("Layer"),
		short_tag("Max Overlapping Count"),
		undefined_tag("Next Decal In Chain", 9999),
		long_tag("Radius"),
		long_tag("^To(World Units)"),
		long_tag("Radius Overlapping Rejection"),
		long_tag("Color Lower Bound R"),
		long_tag("Color Lower Bound G"),
		long_tag("Color Lower Bound B"),
		long_tag("Color Upper Bound R"),
		long_tag("Color Upper Bound G"),
		long_tag("Color Upper Bound B"),
		long_tag("Lifetime"),
		long_tag("^To(Seconds)"),
		long_tag("Decay Time"),
		long_tag("^To(Seconds)"),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		short_tag("Unknown"),
		short_tag("Unknown"),
		short_tag("Unknown"),
		short_tag("Unknown"),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Bitmap", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		long_tag("Maximun Sprite Extent(pixels)"),
		undefined_tag("Unknown", 9999),
	});
};
