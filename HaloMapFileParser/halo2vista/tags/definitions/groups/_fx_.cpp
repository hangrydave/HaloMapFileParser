#include "_fx_.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* _fx__group = new tag_collection(
	"_fx_",
	{
		
		undefined_tag("Template Collection Block", 9999),
		undefined_tag("Template Collection Block", 9999),
		long_tag("Input Effect Name"),
		block_tag("Additional Sound Inputs",
		{
			undefined_tag("DSP Effect", 9999),
			undefined_tag("Low Frequency Sound Function", 9999),
			long_tag("Time Period"),
			long_tag("Unknown"),
		}),
		block_tag("Platform Effect Templates",
		{
			block_tag("Platform Effect Template",
			{
				undefined_tag("Input DSP Effect Name", 9999),
				long_tag("Unknown"),
				long_tag("Unknown"),
				short_tag("Unknown"),
				short_tag("Unknown"),
				block_tag("Components",
				{
					undefined_tag("Value Type", 9999),
					long_tag("Default Value"),
					long_tag("Minimum Value"),
					long_tag("Maximum Value"),
				}),
			}),
			undefined_tag("Input DSP Effect Name", 9999),
		}),
	});
};
