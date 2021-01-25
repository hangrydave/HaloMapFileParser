#include "hsc_.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* hsc__group = new tag_collection(
	"hsc_",
	{
		
		string_tag("Name"),
		undefined_tag("Source", 9999),
	});
};
