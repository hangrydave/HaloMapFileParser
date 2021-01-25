#include "mdlg.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* mdlg_group = new tag_collection(
	"mdlg",
	{
		
		block_tag("Lines",
		{
			undefined_tag("Name", 9999),
			block_tag("Variants",
			{
				undefined_tag("Variant Designation", 9999),
				undefined_tag("Sound", 9999),
				undefined_tag("Sound Effect", 9999),
			}),
			undefined_tag("Default Sound Effect", 9999),
		}),
	});
};
