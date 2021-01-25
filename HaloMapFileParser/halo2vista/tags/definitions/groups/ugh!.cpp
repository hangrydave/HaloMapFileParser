#include "ugh!.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* ugh__group = new tag_collection(
	"ugh!",
	{
		
		block_tag("Playback Parameters",
		{
			long_tag("Minimum Distance"),
			long_tag("Maximum Distance"),
			long_tag("Skip Fraction"),
			long_tag("Runtime Bend Per Second"),
			long_tag("Gain Base"),
			long_tag("Gain Variance"),
			undefined_tag("Random Pitch Bounds min", 9999),
			undefined_tag("Inner Cone Angle", 9999),
			undefined_tag("Outer Cone Angle", 9999),
			long_tag("Outer Cone Gain"),
			undefined_tag("Flags", 9999),
			long_tag("Azimuth"),
			long_tag("Positional Gain"),
			long_tag("First Person Gain"),
		}),
		block_tag("Scales",
		{
			undefined_tag("Gain Modifier", 9999),
			undefined_tag("Pitch Modifier", 9999),
			undefined_tag("Skip Fraction Modifier", 9999),
		}),
		block_tag("Import Names",
		{
			undefined_tag("Name", 9999),
		}),
		block_tag("Pitch Range Parameters",
		{
			short_tag("Natural Pitch"),
			undefined_tag("Bend Bounds", 9999),
			undefined_tag("Max Gain Pitch Bounds", 9999),
		}),
		block_tag("Pitch Ranges",
		{
			short_tag("Import Name Index"),
			short_tag("Pitch Range Parameter Index"),
			short_tag("Encoded Permutation Data Index"),
			short_tag("Encoded Runtime Permutation Flag Index"),
			short_tag("First Permutation"),
			short_tag("Permutation Count"),
		}),
		block_tag("Permutations",
		{
			short_tag("Import Name Index"),
			short_tag("Encoded Skip Fraction"),
			byte_tag("Gain"),
			byte_tag("Permutation Info Index"),
			short_tag("Language Neutral Time"),
			undefined_tag("Sample Size", 9999),
			short_tag("First Chunk"),
			short_tag("Chunk Count"),
		}),
		block_tag("Custom Playbacks",
		{
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
				undefined_tag("Random Base and Variance", 9999),
				undefined_tag("Scale Bounds", 9999),
				undefined_tag("Random Base and Variance", 9999),
				undefined_tag("Scale Bounds", 9999),
				undefined_tag("Random Base and Variance", 9999),
				undefined_tag("Scale Bounds", 9999),
				undefined_tag("Random Base and Variance", 9999),
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
						block_tag("Unknown",
						{
							undefined_tag("Unknown", 9999),
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
		block_tag("Runtime Permutation Flags",
		{
			byte_tag("Unknown"),
		}),
		block_tag("Permutation Chunks",
		{
			undefined_tag("File Offset", 9999),
			undefined_tag("Flags", 9999),
			undefined_tag("Size", 9999),
			long_tag("Runtime Index"),
		}),
		block_tag("Promotions",
		{
			block_tag("Rules",
			{
				short_tag("Pitch Range Index"),
				short_tag("Maximum Playing Count"),
				long_tag("Suppression Time"),
				long_tag("Unknown"),
				long_tag("Unknown"),
			}),
			block_tag("Runtime Timers",
			{
				long_tag("Unknown"),
			}),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
		}),
		block_tag("Extra Info",
		{
			block_tag("Encoded Permutation Section",
			{
				undefined_tag("Encoded Data", 9999),
				block_tag("Sound Dialogue Info",
				{
					long_tag("Mouth Data Offset"),
					long_tag("Mouth Data Length"),
					long_tag("Lipsync Data Offset"),
					long_tag("Lipsync Data Length"),
				}),
			}),
			long_tag("Resource Block Offset"),
			undefined_tag("Resource Block Size", 9999),
			undefined_tag("Section Data Size", 9999),
			undefined_tag("Resource Data Size", 9999),
			block_tag("Resources",
			{
				byte_tag("Type"),
				byte_tag("Unknown"),
				short_tag("Unknown"),
				short_tag("Primary Locator"),
				short_tag("Secondary Locator"),
				undefined_tag("Resource Data Size", 9999),
				undefined_tag("Resource Data Offset", 9999),
			}),
			tagref_tag("Owner Tag"),
			short_tag("Owner Tag Section Offset"),
			short_tag("Unknown"),
			long_tag("Unknown"),
		}),
	});
};
