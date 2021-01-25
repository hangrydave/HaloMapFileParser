#include "lsnd.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* lsnd_group = new tag_collection(
	"lsnd",
	{
		
		undefined_tag("Flags", 9999),
		long_tag("Marty's Music Time"),
		long_tag("Unknown"),
		long_tag("Unknown"),
		long_tag("Unknown"),
		undefined_tag("Unknown", 9999),
		block_tag("Tracks",
		{
			undefined_tag("Name", 9999),
			undefined_tag("Flags", 9999),
			long_tag("Gain"),
			long_tag("Fade In Duration"),
			long_tag("Fade Out Duration"),
			undefined_tag("In", 9999),
			undefined_tag("Loop", 9999),
			undefined_tag("Out", 9999),
			undefined_tag("Alternate Loop", 9999),
			undefined_tag("Alternate Out", 9999),
			short_tag("Output Effect"),
			short_tag("Unknown"),
			undefined_tag("Alternate Transition In", 9999),
			undefined_tag("Alternate Transition Out", 9999),
			long_tag("Alternate Crossfade Duration"),
			long_tag("Alternate Fade Out Duration"),
		}),
		block_tag("Detail Sounds",
		{
			undefined_tag("Name", 9999),
			undefined_tag("Sound", 9999),
			undefined_tag("Random Period Bounds", 9999),
			long_tag("Unknown"),
			undefined_tag("Flags", 9999),
			undefined_tag("Yaw Bounds", 9999),
			undefined_tag("Pitch Bounds", 9999),
			undefined_tag("Distance Bounds", 9999),
		}),
	});
};
