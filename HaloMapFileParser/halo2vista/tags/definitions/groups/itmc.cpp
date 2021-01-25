#include "itmc.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* itmc_group = new tag_collection(
	"itmc",
	{
		
		block_tag("Item Permutations",
		{
			long_tag("Weight"),
			undefined_tag("Item", 9999),
			undefined_tag("Variant Name", 9999),
		}),
		undefined_tag("Unused Spawn Time (in seconds, 0 = default)", 9999),
	});
};
