#include "stem.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* stem_group = new tag_collection(
	"stem",
	{
		
		undefined_tag("Documentation", 9999),
		undefined_tag("Default Material Name", 9999),
		short_tag("Unknown"),
		short_tag("Flags"),
		block_tag("Properties",
		{
			short_tag("Property"),
			short_tag("Unknown"),
			undefined_tag("Parameter Name", 9999),
		}),
		block_tag("Categories",
		{
			undefined_tag("Name", 9999),
			block_tag("Parameters",
			{
				undefined_tag("Name", 9999),
				undefined_tag("Explanation", 9999),
				short_tag("Type"),
				short_tag("Flags"),
				undefined_tag("Default Bitmap", 9999),
				long_tag("Default Const Value"),
				undefined_tag("Default Const Color", 9999),
				short_tag("Bitmap Type"),
				short_tag("Unknown"),
				short_tag("Bitmap Animation Flags"),
				short_tag("Unknown"),
				long_tag("Bitmap Scale"),
			}),
		}),
		undefined_tag("Light Response", 9999),
		block_tag("Lods",
		{
			long_tag("Projected Diameter"),
			block_tag("Pass",
			{
				short_tag("Layer"),
				short_tag("Unknown"),
				undefined_tag("Pass", 9999),
				undefined_tag("Unknown", 9999),
				undefined_tag("Unknown", 9999),
				undefined_tag("Unknown", 9999),
			}),
		}),
		block_tag("Unknown",
		{
			long_tag("Unknown"),
		}),
		block_tag("Unknown",
		{
			long_tag("Unknown"),
		}),
		undefined_tag("Aux 1 Shader", 9999),
		short_tag("Aux 1 Layer"),
		short_tag("Unknown"),
		undefined_tag("Aux 2 Shader", 9999),
		short_tag("Aux 2 Layer"),
		short_tag("Unknown"),
		block_tag("Postprocess Definition",
		{
			block_tag("Levels Of Detail",
			{
				short_tag("Layers Block Index Data"),
				long_tag("Available Layers"),
				long_tag("Projected Height Percentage"),
			}),
			block_tag("Layers",
			{
				short_tag("Indices Block Index Data"),
			}),
			block_tag("Passes",
			{
				undefined_tag("Pass", 9999),
				short_tag("Implementation Block Index Data"),
			}),
			block_tag("Implementations",
			{
				short_tag("Bitmap Block Index Data"),
				short_tag("Pixel Constants Block Index Data"),
				short_tag("Vertex Constants Block Index Data"),
			}),
			block_tag("Remappings",
			{
				short_tag("Unknown"),
				byte_tag("Unknown"),
				byte_tag("Source Index"),
			}),
		}),
	});
};
