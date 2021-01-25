#include "vehc.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* vehc_group = new tag_collection(
	"vehc",
	{
		
		block_tag("Vehicle Permutations",
		{
			long_tag("Weight"),
			undefined_tag("Vehicle", 9999),
			undefined_tag("Variant Name", 9999),
		}),
		undefined_tag("Unused Spawn Time (in seconds, 0 = default)", 9999),
	});
};
