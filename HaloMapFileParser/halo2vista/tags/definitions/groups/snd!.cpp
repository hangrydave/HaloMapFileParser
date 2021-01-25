#include "snd!.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* snd__group = new tag_collection(
	"snd!",
	{
		
		short_tag("Flags"),
		byte_tag("Sound Class"),
		byte_tag("Sample Rate"),
		byte_tag("Encoding"),
		byte_tag("Compression"),
		short_tag("[ugh!] Playback Parameter Index"),
		short_tag("[ugh!] Pitch Range Index"),
		byte_tag("Unknown"),
		byte_tag("[ugh!] Scale Index"),
		byte_tag("[ugh!] Promotion Index"),
		byte_tag("[ugh!] Custom Playback Index"),
		short_tag("[ugh!] Extra Info Index"),
		long_tag("Maximum Play Time"),
	});
};
