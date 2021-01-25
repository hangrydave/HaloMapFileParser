#include "trg_.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* trg__group = new tag_collection(
	"trg_",
	{
		
		block_tag("Kill Trigger Volumes",
		{
			undefined_tag("Name", 9999),
			short_tag("Object Name"),
			short_tag("Unknown"),
			undefined_tag("Node Name", 9999),
			long_tag("Unknown"),
			long_tag("Unknown"),
			long_tag("Unknown"),
			long_tag("Unknown"),
			long_tag("Unknown"),
			long_tag("Unknown"),
			long_tag("Unknown"),
			long_tag("Position x"),
			long_tag("Position y"),
			long_tag("Position z"),
			long_tag("Extents x"),
			long_tag("Extents y"),
			long_tag("Extents z"),
			short_tag("Kill Trigger Volume Index"),
			short_tag("Unknown"),
		}),
		block_tag("Object Names",
		{
			string_tag("Name"),
			short_tag("Type"),
			short_tag("Placement Index"),
		}),
	});
};
