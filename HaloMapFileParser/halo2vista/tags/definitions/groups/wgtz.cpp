#include "wgtz.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* wgtz_group = new tag_collection(
	"wgtz",
	{
		
		undefined_tag("Globals", 9999),
		block_tag("Collection",
		{
			undefined_tag("Game Shell", 9999),
		}),
		undefined_tag("Gametype Collection", 9999),
		undefined_tag("Unicode Strings", 9999),
	});
};
