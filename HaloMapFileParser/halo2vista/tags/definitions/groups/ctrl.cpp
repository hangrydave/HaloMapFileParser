#include "ctrl.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* ctrl_group = new tag_collection(
	"ctrl",
	{
		
		short_tag("Object Type"),
		short_tag("Flags"),
		long_tag("Bounding Radius"),
		undefined_tag("Bounding Offset", 9999),
		long_tag("Acceleration Scale"),
		short_tag("Lightmap Shadow Mode"),
		byte_tag("Sweetener Size"),
		byte_tag("Unknown"),
		undefined_tag("Runtime Flags", 9999),
		long_tag("Dynamic Light Sphere Radius"),
		undefined_tag("Dynamic Light Sphere Offset", 9999),
		undefined_tag("Default Model Variant", 9999),
		undefined_tag("Model", 9999),
		undefined_tag("Crate Object", 9999),
		undefined_tag("Modifier Shader", 9999),
		undefined_tag("Creation Effect", 9999),
		undefined_tag("Material Effects", 9999),
		block_tag("AI Properties",
		{
			undefined_tag("Flags", 9999),
			undefined_tag("AI Type Name", 9999),
			undefined_tag("Unknown", 9999),
			short_tag("AI Size"),
			short_tag("Leap Jump Speed"),
		}),
		block_tag("Functions",
		{
			undefined_tag("Flags", 9999),
			undefined_tag("Import Name", 9999),
			undefined_tag("Export Name", 9999),
			undefined_tag("Turn Off With", 9999),
			long_tag("Minimum Value"),
			undefined_tag("Default Function", 9999),
			undefined_tag("Scale By", 9999),
		}),
		long_tag("Apply Collision Damage Scale"),
		undefined_tag("Game Acceleration", 9999),
		undefined_tag("Game Scale", 9999),
		undefined_tag("Absolute Acceleration", 9999),
		undefined_tag("Absolute Scale", 9999),
		short_tag("HUD Text Message Index"),
		short_tag("Unknown"),
		block_tag("Attachments",
		{
			undefined_tag("Type", 9999),
			undefined_tag("Marker", 9999),
			short_tag("Change Color"),
			short_tag("Unknown"),
			undefined_tag("Primary Scale", 9999),
			undefined_tag("Secondary Scale", 9999),
		}),
		block_tag("Widgets",
		{
			undefined_tag("Type", 9999),
		}),
		block_tag("Old Functions",
		{
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
		}),
		block_tag("Change Colors",
		{
			block_tag("Initial Permutations",
			{
				long_tag("Weight"),
				undefined_tag("Color Lower Bound", 9999),
				undefined_tag("Color Upper Bound", 9999),
				undefined_tag("Variant Name", 9999),
			}),
			block_tag("Functions",
			{
				undefined_tag("Unknown", 9999),
				undefined_tag("Scale Flags", 9999),
				undefined_tag("Color Lower Bound", 9999),
				undefined_tag("Color Upper Bound", 9999),
				undefined_tag("Darken By", 9999),
				undefined_tag("Scale By", 9999),
			}),
		}),
		block_tag("Predicted Resources",
		{
			short_tag("Type"),
			short_tag("Resource Index"),
			tagref_tag("Tag Index"),
		}),
		undefined_tag("Flags", 9999),
		long_tag("Power Transition Time"),
		long_tag("Power Acceleration Time"),
		long_tag("Position Transition Time"),
		long_tag("Position Acceleration Time"),
		long_tag("Depowered Transition Time"),
		long_tag("Depowered Acceleration Time"),
		short_tag("Lightmap Flags"),
		short_tag("Unknown"),
		undefined_tag("Open (Up)", 9999),
		undefined_tag("Close (Down)", 9999),
		undefined_tag("Opened", 9999),
		undefined_tag("Closed", 9999),
		undefined_tag("Depowered", 9999),
		undefined_tag("Repowered", 9999),
		long_tag("Delay Time"),
		undefined_tag("Delay Effect", 9999),
		long_tag("Automatic Activation Radius"),
		short_tag("Type"),
		short_tag("Triggers When"),
		long_tag("Call Value"),
		undefined_tag("Action String", 9999),
		undefined_tag("On", 9999),
		undefined_tag("Off", 9999),
		undefined_tag("Deny", 9999),
	});
};
