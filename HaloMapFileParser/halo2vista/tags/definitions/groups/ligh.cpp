#include "ligh.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* ligh_group = new tag_collection(
	"ligh",
	{
		
		undefined_tag("Flags", 9999),
		short_tag("Type"),
		short_tag("Unknown"),
		undefined_tag("Size Modifer", 9999),
		long_tag("Shadow Quality Bias"),
		short_tag("Shadow Tap Bias"),
		short_tag("Unknown"),
		long_tag("Radius"),
		long_tag("Specular Radius"),
		long_tag("Near Width"),
		long_tag("Height Stretch"),
		long_tag("Field Of View"),
		long_tag("Falloff Distance"),
		long_tag("Cutoff Distance"),
		undefined_tag("Interpolation Flags", 9999),
		undefined_tag("Bloom Bounds", 9999),
		undefined_tag("Specular Lower Bound", 9999),
		undefined_tag("Specular Upper Bound", 9999),
		undefined_tag("Diffuse Lower Bound", 9999),
		undefined_tag("Diffuse Upper Bound", 9999),
		undefined_tag("Brightness Bounds", 9999),
		undefined_tag("Gel Map", 9999),
		short_tag("Specular Mask"),
		short_tag("Unknown"),
		undefined_tag("Unknown", 9999),
		short_tag("Falloff Function"),
		short_tag("Diffuse Contrast"),
		short_tag("Specular Contrast"),
		short_tag("Falloff Geometry"),
		undefined_tag("Lens Flare", 9999),
		long_tag("Bounding Radius"),
		undefined_tag("Light Volume", 9999),
		short_tag("Default Lightmap Setting"),
		short_tag("Unknown"),
		long_tag("Lightmap Half Life"),
		long_tag("Lightmap Light Scale"),
		long_tag("Duration"),
		short_tag("Unknown"),
		short_tag("Falloff Function"),
		short_tag("Illumination Fade"),
		short_tag("Shadow Fade"),
		short_tag("Specular Fade"),
		short_tag("Unknown"),
		undefined_tag("Flags", 9999),
		block_tag("Brightness Animation",
		{
			undefined_tag("Function", 9999),
		}),
		block_tag("Color Animation",
		{
			undefined_tag("Function", 9999),
		}),
		block_tag("Gel Animation",
		{
			undefined_tag("dx Function", 9999),
			undefined_tag("dy Function", 9999),
		}),
		undefined_tag("Shader", 9999),
	});
};
