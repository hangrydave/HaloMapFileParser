#include "snde.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* snde_group = new tag_collection(
	"snde",
	{
		
		undefined_tag("Unknown", 9999),
		short_tag("Priority"),
		short_tag("Unknown"),
		long_tag("Room Intensity"),
		long_tag("Room Intensity High Frequency"),
		long_tag("Room Rolloff"),
		long_tag("Decay Time"),
		long_tag("Decay High Frequency Ratio"),
		long_tag("Reflections Intensity"),
		long_tag("Reflections Delay"),
		long_tag("Reverb Intensity"),
		long_tag("Reverb Delay"),
		long_tag("Diffusion"),
		long_tag("Density"),
		long_tag("High Frequency Refrence"),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
	});
};
