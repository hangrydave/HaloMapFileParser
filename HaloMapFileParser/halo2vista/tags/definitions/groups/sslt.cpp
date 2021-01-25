#include "sslt.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* sslt_group = new tag_collection(
	"sslt",
	{
		
		block_tag("Structure Lighting",
		{
			undefined_tag("BSP", 9999),
			block_tag("Lighting Points",
			{
				long_tag("Position x"),
				long_tag("Position y"),
				long_tag("Position z"),
			}),
		}),
	});
};
