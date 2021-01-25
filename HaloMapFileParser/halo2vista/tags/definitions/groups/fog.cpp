#include "fog.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* fog_group = new tag_collection(
	"fog",
	{
		
		short_tag("Flags"),
		short_tag("Priority"),
		undefined_tag("Global Material Name", 9999),
		short_tag("Unknown"),
		short_tag("Unknown"),
		long_tag("Maximum Density"),
		long_tag("Opaque Distance"),
		long_tag("Opaque Depth"),
		long_tag("Atmospheric-Planar Depth min"),
		long_tag("Atmospheric-Planar Depth max"),
		long_tag("Eye Offset Scale"),
		undefined_tag("Color", 9999),
		block_tag("Patchy Fog",
		{
			undefined_tag("Color", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			long_tag("Density min"),
			long_tag("Density max"),
			long_tag("Distance min"),
			long_tag("Distance max"),
			long_tag("Min Depth Fraction"),
			undefined_tag("Patchy Fog", 9999),
		}),
		undefined_tag("Background Sound", 9999),
		undefined_tag("Sound Environment", 9999),
		long_tag("Environment Damping Factor"),
		long_tag("Background Sound Gain"),
		undefined_tag("Enter Sound", 9999),
		undefined_tag("Exit Sound", 9999),
	});
};
