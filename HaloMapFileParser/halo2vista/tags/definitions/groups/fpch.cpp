#include "fpch.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* fpch_group = new tag_collection(
	"fpch",
	{
		
		undefined_tag("Flags", 9999),
		long_tag("Movement Rotation Multiplier"),
		long_tag("Movement Strafing Multiplier"),
		long_tag("Movement Zoom Multiplier"),
		long_tag("Noise Map Scale"),
		undefined_tag("Noise Map", 9999),
		long_tag("Noise Vertical Scale Forward"),
		long_tag("Noise Vertical Scale Up"),
		long_tag("Noise Opacity Scale Up"),
		long_tag("Animation Period (sec)"),
		long_tag("Wind Velocity min"),
		long_tag("Wind Velocity max"),
		long_tag("Wind Period min"),
		long_tag("Wind Period max"),
		long_tag("Wind Acceleration Weight"),
		long_tag("Wind Perpendicular Weight"),
		long_tag("Wind Constant Velocity X"),
		long_tag("Wind Constant Velocity Y"),
		long_tag("Wind Constant Velocity Z"),
	});
};
