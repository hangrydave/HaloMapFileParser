#include "lens.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* lens_group = new tag_collection(
	"lens",
	{
		
		undefined_tag("Falloff Angle", 9999),
		undefined_tag("Cutoff Angle", 9999),
		long_tag("Unknown"),
		long_tag("Unknown"),
		long_tag("Occlusion Radius"),
		short_tag("Occlusion Offset Direction"),
		short_tag("Occlusion Inner Radius Scale"),
		long_tag("Near Fade Distance"),
		long_tag("Far Fade Distance"),
		undefined_tag("Bitmap", 9999),
		short_tag("Flags"),
		short_tag("Unknown"),
		short_tag("Rotation Function"),
		short_tag("Unknown"),
		undefined_tag("Rotation Function Scale", 9999),
		long_tag("Corona Scale i"),
		long_tag("Corona Scale j"),
		short_tag("Falloff Function"),
		short_tag("Unknown"),
		block_tag("Reflections",
		{
			short_tag("Flags"),
			short_tag("Unknown"),
			short_tag("Bitmap Index"),
			short_tag("Unknown"),
			long_tag("Position Along Flare Axis"),
			long_tag("Rotation Offset"),
			long_tag("Radius min"),
			long_tag("Radius max"),
			long_tag("Brightness min"),
			long_tag("Brightness max"),
			long_tag("Tint Modulation Factor"),
			long_tag("Tint Color R"),
			long_tag("Tint Color G"),
			long_tag("Tint Color B"),
		}),
		short_tag("Flags"),
		short_tag("Unknown"),
		block_tag("Brightness",
		{
			undefined_tag("Function", 9999),
		}),
		block_tag("Color",
		{
			undefined_tag("Function", 9999),
		}),
		block_tag("Rotation",
		{
			undefined_tag("Function", 9999),
		}),
	});
};
