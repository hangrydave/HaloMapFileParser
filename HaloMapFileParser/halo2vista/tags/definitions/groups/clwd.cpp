#include "clwd.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* clwd_group = new tag_collection(
	"clwd",
	{
		
		undefined_tag("Flags", 9999),
		undefined_tag("Marker Attachment Name", 9999),
		undefined_tag("Shader", 9999),
		short_tag("Grid X Dimension"),
		short_tag("Grid Y Dimension"),
		long_tag("Grid Spacing X"),
		long_tag("Grid Spacing Y"),
		short_tag("Integration Type"),
		short_tag("Number Iterations"),
		long_tag("Weight"),
		long_tag("Drag"),
		long_tag("Wind Scale"),
		long_tag("Wind Flappiness Scale"),
		long_tag("Longest Rod"),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		block_tag("Vertices",
		{
			long_tag("Initial Position X"),
			long_tag("Initial Position Y"),
			long_tag("Initial Position Z"),
			long_tag("UV i"),
			long_tag("UV j"),
		}),
		block_tag("Indices",
		{
			short_tag("Index"),
		}),
		block_tag("Strip Indices",
		{
			short_tag("Index"),
		}),
		block_tag("Links",
		{
			long_tag("Attachment Bits"),
			short_tag("Index 1"),
			short_tag("Index 2"),
			long_tag("Default Distance"),
			long_tag("Damping Multiplier"),
		}),
	});
};
