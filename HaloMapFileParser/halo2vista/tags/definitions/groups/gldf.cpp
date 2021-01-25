#include "gldf.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* gldf_group = new tag_collection(
	"gldf",
	{
		
		block_tag("Light Variables",
		{
			undefined_tag("Objects Affected", 9999),
			long_tag("Lightmap Brightness Offset"),
			undefined_tag("Minimum Lightmap Color", 9999),
			undefined_tag("Maximum Lightmap Color", 9999),
			long_tag("Exclusion Angle From Up"),
			undefined_tag("Primary Light Function", 9999),
			undefined_tag("Minimum Lightmap Color", 9999),
			undefined_tag("Maximum Lightmap Color", 9999),
			undefined_tag("Minimum Diffuse Sample", 9999),
			undefined_tag("Maximum Diffuse Sample", 9999),
			long_tag("z Axis Rotation"),
			undefined_tag("Secondary Light Function", 9999),
			undefined_tag("Minimum Lightmap Sample", 9999),
			undefined_tag("Maximum Lightmap Sample", 9999),
			undefined_tag("Ambient Light Function", 9999),
			undefined_tag("Lightmap Shadows FUnction", 9999),
		}),
	});
};
