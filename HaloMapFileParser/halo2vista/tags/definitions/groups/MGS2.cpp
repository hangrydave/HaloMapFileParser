#include "MGS2.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* MGS2_group = new tag_collection(
	"MGS2",
	{
		
		long_tag("Falloff Distance From Camera"),
		long_tag("Cutoff Distance From Camera"),
		block_tag("Volumes",
		{
			undefined_tag("Flags", 9999),
			undefined_tag("Bitmap", 9999),
			long_tag("Sprite Count"),
			undefined_tag("Offset", 9999),
			undefined_tag("Radius", 9999),
			undefined_tag("Brightness", 9999),
			undefined_tag("Color", 9999),
			undefined_tag("Facing", 9999),
			block_tag("Aspect",
			{
				undefined_tag("Along-Axis Scale", 9999),
				undefined_tag("Away-From-Axis Scale", 9999),
				long_tag("Parallel Scale"),
				long_tag("Parallel Threshold Angle"),
				long_tag("Parallel Exponent"),
			}),
			long_tag("Radius Frac Min"),
			long_tag("DEPRECATED X-Step Exponent"),
			long_tag("DEPRECATED X-Buffer Length"),
			long_tag("X-Buffer Spacing"),
			long_tag("X-Buffer Min Iterations"),
			long_tag("X-Buffer Max Iterations"),
			long_tag("X-Delta Max Error"),
			undefined_tag("Unknown", 9999),
			block_tag("Unknown",
			{
				long_tag("Unknown i"),
				long_tag("Unknown j"),
			}),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
		}),
	});
};
