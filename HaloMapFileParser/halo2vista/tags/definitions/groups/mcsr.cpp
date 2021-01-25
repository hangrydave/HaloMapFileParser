#include "mcsr.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* mcsr_group = new tag_collection(
	"mcsr",
	{
		
		undefined_tag("", 9999),
		undefined_tag("", 9999),
		block_tag("Mouse Cursor Bitmaps",
		{
			undefined_tag("Bitmap", 9999),
		}),
		long_tag("Animation Speed (FPS)"),
	});
};
