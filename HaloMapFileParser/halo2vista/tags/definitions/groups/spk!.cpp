#include "spk!.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* spk__group = new tag_collection(
	"spk!",
	{
		
		long_tag("Almost Never"),
		long_tag("Rarely"),
		long_tag("Somewhat"),
		long_tag("Often"),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
		undefined_tag("Unknown", 9999),
	});
};
