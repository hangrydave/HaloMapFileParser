#include "snmx.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* snmx_group = new tag_collection(
	"snmx",
	{
		
		long_tag("Left Stereo Gain"),
		long_tag("Right Stereo Gain"),
		long_tag("Left Stereo Gain"),
		long_tag("Right Stereo Gain"),
		long_tag("Left Stereo Gain"),
		long_tag("Right Stereo Gain"),
		long_tag("Front Speaker Gain"),
		long_tag("Rear Speaker Gain"),
		long_tag("Front Speaker Gain"),
		long_tag("Rear Speaker Gain"),
		long_tag("Mono Unspatialized Gain"),
		long_tag("Stereo To 3D Gain"),
		long_tag("Rear Surround To Front Stereo Gain"),
		long_tag("Front Speaker Gain"),
		long_tag("Center Speaker Gain"),
		long_tag("Front Speaker Gain"),
		long_tag("Center Speaker Gain"),
		long_tag("Stereo Unspatialized Gain"),
		long_tag("Solo Player Fade Out Delay"),
		long_tag("Solo Player Fade Out Time Sec"),
		long_tag("Solo Player Fade In Time Sec"),
		long_tag("Game Music Fade Out Time Sec"),
	});
};
