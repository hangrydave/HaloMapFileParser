#include "cin_.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* cin__group = new tag_collection(
	"cin_",
	{
		
		block_tag("Flags",
		{
			undefined_tag("Unknown", 9999),
			string_tag("Name"),
			long_tag("Position x"),
			long_tag("Position y"),
			long_tag("Position z"),
			undefined_tag("Facing y", 9999),
			undefined_tag("Facing p", 9999),
		}),
		block_tag("Camera Points",
		{
			short_tag("Flags"),
			short_tag("Type"),
			string_tag("Name"),
			long_tag("Position x"),
			long_tag("Position y"),
			long_tag("Position z"),
			undefined_tag("Orientation y", 9999),
			undefined_tag("Orientation p", 9999),
			undefined_tag("Orientation r", 9999),
			undefined_tag("Unknown", 9999),
		}),
		block_tag("Recorded Animations",
		{
			string_tag("Name"),
			byte_tag("Version"),
			byte_tag("Raw Animation Data"),
			byte_tag("Unit Control Data Version"),
			byte_tag("Unknown"),
			short_tag("Length Of Animation"),
			short_tag("Unknown"),
			undefined_tag("Unknown", 9999),
			undefined_tag("Recorded Animation Event Stream", 9999),
		}),
	});
};
