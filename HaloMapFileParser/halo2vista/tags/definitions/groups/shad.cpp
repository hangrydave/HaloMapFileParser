#include "shad.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* shad_group = new tag_collection(
	"shad",
	{
		
		undefined_tag("Template", 9999),
		undefined_tag("Material Name", 9999),
		block_tag("Runtime Properties",
		{
			undefined_tag("Diffuse Map", 9999),
			undefined_tag("Lightmap Emissive Map", 9999),
			undefined_tag("Lightmap Emissive Color", 9999),
			long_tag("Lightmap Emissive Power"),
			long_tag("Lightmap Resolution Scale"),
			long_tag("Lightmap Half Life"),
			long_tag("Lightmap Diffuse Scale"),
			undefined_tag("Alpha Test Map", 9999),
			undefined_tag("Translucent Map", 9999),
			undefined_tag("Lightmap Transparent Color", 9999),
			long_tag("Lightmap Transparent Alpha"),
			long_tag("Lightmap Foliage Scale"),
		}),
		short_tag("type?"),
		short_tag("Flags"),
		block_tag("Parameters",
		{
			undefined_tag("Name", 9999),
			short_tag("Type"),
			short_tag("Unknown"),
			undefined_tag("Bitmap", 9999),
			long_tag("Const Value"),
			undefined_tag("Const Color", 9999),
			block_tag("Animation Properties",
			{
				short_tag("Type"),
				short_tag("Unknown"),
				undefined_tag("Input Name", 9999),
				undefined_tag("Range Name", 9999),
				long_tag("Time Period"),
				undefined_tag("Animation Function", 9999),
			}),
		}),
		block_tag("Postprocess Definition",
		{
			undefined_tag("Shader Template", 9999),
			block_tag("Bitmaps",
			{
				undefined_tag("Bitmap Group", 9999),
				long_tag("Bitmap Index"),
				long_tag("Log Bitmap Dimension"),
			}),
			block_tag("Pixel Constants",
			{
				undefined_tag("Color", 9999),
			}),
			block_tag("Vertex Constants",
			{
				undefined_tag("vector", 9999),
				long_tag("w"),
			}),
			block_tag("Levels Of Detail",
			{
				long_tag("Available Layer Flags"),
				short_tag("Layers Block Index Data"),
			}),
			block_tag("Layers",
			{
				short_tag("Indices Block Index Data"),
			}),
			block_tag("Passes",
			{
				short_tag("Indices Block Index Data"),
			}),
			block_tag("Implementations",
			{
				short_tag("Bitmap Transforms Block Index Data"),
				short_tag("Render States Block Index Data"),
				short_tag("Texture States Block Index Data"),
				short_tag("Pixel Constants Block Index Data"),
				short_tag("Vertex Constants Block Index Data"),
			}),
			block_tag("Overlays",
			{
				undefined_tag("Input Name", 9999),
				undefined_tag("Range Name", 9999),
				long_tag("Time Period In Seconds"),
				undefined_tag("Function", 9999),
			}),
			block_tag("Overlay References",
			{
				short_tag("Overlay Index"),
				short_tag("Transform Index"),
			}),
			block_tag("Animated Parameters",
			{
				short_tag("Overlay References Block Index Data"),
			}),
			block_tag("Animated Parameter References",
			{
				short_tag("Unknown"),
				byte_tag("Unknown"),
				byte_tag("Parameter Index"),
			}),
			block_tag("Bitmap Properties",
			{
				short_tag("Bitmap Index"),
				short_tag("Animated Parameter Index"),
			}),
			block_tag("Color Properties",
			{
				undefined_tag("Color", 9999),
			}),
			block_tag("Value Properties",
			{
				long_tag("Value"),
			}),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
		}),
		undefined_tag("Unknown", 9999),
		block_tag("Predicted Resources",
		{
			short_tag("Type"),
			short_tag("Resource Index"),
			undefined_tag("Tag Index", 9999),
		}),
		undefined_tag("Light Response", 9999),
		short_tag("Shader LOD Bias"),
		short_tag("Specular Type"),
		short_tag("Lightmap Type"),
		short_tag("Unknown"),
		long_tag("Lightmap Specular Brightness"),
		long_tag("Lightmap Ambient Bias"),
		block_tag("Postprocess Properties",
		{
			long_tag("Bitmap Group Index"),
		}),
		long_tag("Added Depth Bias Offset"),
		long_tag("Added Depth Bias Slope Scale"),
	});
};
