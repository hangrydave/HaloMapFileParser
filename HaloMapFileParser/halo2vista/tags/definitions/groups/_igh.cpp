#include "_igh.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* _igh_group = new tag_collection(
	"_igh",
	{
		
		block_tag("Object Names",
		{
			string_tag("Name"),
			short_tag("Type"),
			short_tag("Placement Index"),
		}),
		block_tag("Unknown",
		{
			short_tag("BSP Index"),
			short_tag("Unknown"),
			long_tag("Unique ID"),
			undefined_tag("Unknown", 9999),
			string_tag("Object Definition Tag"),
			long_tag("Object"),
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
		block_tag("Structure References",
		{
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Structure BSP", 9999),
			undefined_tag("Structure Lightmap", 9999),
			undefined_tag("Unknown", 9999),
			long_tag("Radiance Est. Search Distance"),
			undefined_tag("Unknown", 9999),
			long_tag("Luminels Per World Unit"),
			long_tag("Output White Reference"),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			short_tag("Flags"),
			short_tag("Unknown"),
			short_tag("Default Sky Index"),
			short_tag("Unknown"),
		}),
		block_tag("Palette",
		{
			undefined_tag("Name", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
			undefined_tag("Unknown", 9999),
		}),
		block_tag("Objects",
		{
			short_tag("Type Index"),
			short_tag("Name Index"),
			undefined_tag("Placement Flags", 9999),
			long_tag("Position x"),
			long_tag("Position y"),
			long_tag("Position z"),
			undefined_tag("Rotation y", 9999),
			undefined_tag("Rotation p", 9999),
			undefined_tag("Rotation r", 9999),
			long_tag("Scale"),
			short_tag("Transform Flags"),
			short_tag("Manual BSP Flags"),
			long_tag("Unique ID"),
			short_tag("Origin BSP Index"),
			byte_tag("Type"),
			byte_tag("Source"),
			byte_tag("BSP Policy"),
			byte_tag("Unknown"),
			short_tag("Editor Folder Index"),
			short_tag("Power Group Index"),
			short_tag("Position Group Index"),
			undefined_tag("Flags", 9999),
			short_tag("Type"),
			short_tag("Flags"),
			short_tag("Lightmap Type"),
			short_tag("Lightmap Flags"),
			long_tag("Lightmap Half Life"),
			long_tag("Lightmap Light Scale"),
			long_tag("Target Point x"),
			long_tag("Target Point y"),
			long_tag("Target Point z"),
			long_tag("Width"),
			long_tag("Height Scale"),
			undefined_tag("Field Of View", 9999),
			long_tag("Falloff Distance"),
			long_tag("Cutoff Distance"),
		}),
		long_tag("Next Object ID Salt"),
		block_tag("Editor Folders",
		{
			long_tag("Parent Folder Index"),
			string_tag("Name"),
		}),
	});
};
