#include "sfx+.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* sfx__group = new tag_collection(
	"sfx+",
	{
		
		block_tag("Sound Effects",
		{
			undefined_tag("Name", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Flags", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			block_tag("Filter",
			{
				undefined_tag("Filter Type", 9999),
				long_tag("Filter Width"),
				undefined_tag("Scale Bounds", 9999),
				undefined_tag("Random Base Variance", 9999),
				undefined_tag("Scale Bounds", 9999),
				undefined_tag("Random Base Variance", 9999),
				undefined_tag("Scale Bounds", 9999),
				undefined_tag("Random Base Variance", 9999),
				undefined_tag("Scale Bounds", 9999),
				undefined_tag("Random Base Variance", 9999),
			}),
			block_tag("Pitch LFO",
			{
				undefined_tag("Scale Bounds", 9999),
				undefined_tag("Random Base and Variance", 9999),
				undefined_tag("Scale Bounds", 9999),
				undefined_tag("Random Base and Variance", 9999),
				undefined_tag("Scale Bounds", 9999),
				undefined_tag("Random Base and Variance", 9999),
			}),
			block_tag("Filter LFO",
			{
				undefined_tag("Scale Bounds", 9999),
				undefined_tag("Random Base and Variance", 9999),
				undefined_tag("Scale Bounds", 9999),
				undefined_tag("Random Base and Variance", 9999),
				undefined_tag("Scale Bounds", 9999),
				undefined_tag("Random Base and Variance", 9999),
				undefined_tag("Scale Bounds", 9999),
				undefined_tag("Random Base and Variance", 9999),
			}),
			block_tag("Sound Effect",
			{
				undefined_tag("Template", 9999),
				block_tag("Components",
				{
					undefined_tag("Sound", 9999),
					long_tag("Gain"),
					undefined_tag("Flags", 9999),
				}),
				undefined_tag("Unknown", 9999),
				undefined_tag("Unknown", 9999),
				undefined_tag("Unknown", 9999),
				undefined_tag("Unknown", 9999),
				block_tag("Unknown",
				{
					block_tag("Unknown",
					{
						block_tag("Unknown",
						{
							undefined_tag("Unknown", 9999),
							undefined_tag("Unknown", 9999),
							long_tag("Unknown"),
						}),
						block_tag("Unknown",
						{
							long_tag("Unknown"),
						}),
						block_tag("Template Override Descriptors",
						{
							byte_tag("Override Descriptor"),
						}),
						undefined_tag("Unknown", 9999),
					}),
					block_tag("Unknown",
					{
						undefined_tag("Unknown", 9999),
						undefined_tag("Unknown", 9999),
						long_tag("Unknown"),
					}),
					undefined_tag("Unknown", 9999),
				}),
			}),
		}),
	});
};
