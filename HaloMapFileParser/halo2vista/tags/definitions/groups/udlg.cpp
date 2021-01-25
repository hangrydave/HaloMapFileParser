#include "udlg.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* udlg_group = new tag_collection(
	"udlg",
	{
		
		undefined_tag("Global Dialogue Info", 9999),
		undefined_tag("Flags", 9999),
		block_tag("Vocalizations",
		{
			short_tag("Flags"),
			short_tag("Unknown"),
			undefined_tag("Vocalization", 9999),
			undefined_tag("Sound", 9999),
		}),
		undefined_tag("Mission Dialogue Designator", 9999),
	});
};
