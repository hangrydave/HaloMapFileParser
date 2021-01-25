#include "dec_.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* dec__group = new tag_collection(
	"dec_",
	{
		
		block_tag("Palette",
		{
			undefined_tag("Reference", 9999),
		}),
		block_tag("Decals",
		{
			short_tag("Decal Type Index"),
			byte_tag("Yaw[-127,127]"),
			byte_tag("Pitch[-127,127]"),
			long_tag("Position x"),
			long_tag("Position y"),
			long_tag("Position z"),
		}),
	});
};
