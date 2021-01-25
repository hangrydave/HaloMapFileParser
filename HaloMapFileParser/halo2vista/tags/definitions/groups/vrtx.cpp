#include "vrtx.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* vrtx_group = new tag_collection(
	"vrtx",
	{
		
		undefined_tag("Unknown", 9999),
		block_tag("Unknown",
		{
			undefined_tag("Unknown", 9999),
			undefined_tag("Compiled Shader", 9999),
			undefined_tag("Code", 9999),
		}),
		undefined_tag("Unknown", 9999),
	});
};
