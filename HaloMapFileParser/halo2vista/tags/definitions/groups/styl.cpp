#include "styl.h"

using namespace tag_definitions;

namespace tag_definitions
{
	tag_collection* styl_group = new tag_collection(
	"styl",
	{
		
		string_tag("Name"),
		short_tag("Combat Status Decay Options"),
		short_tag("Unknown"),
		short_tag("Attitude"),
		short_tag("Unknown"),
		byte_tag("Engage Attitude"),
		byte_tag("Evasion Attitude"),
		byte_tag("Cover Attitude"),
		byte_tag("Search Attitude"),
		byte_tag("Presearch Attitude"),
		byte_tag("Retreat Attitude"),
		byte_tag("Charge Attitude"),
		byte_tag("Ready Attitude"),
		byte_tag("Idle Attitude"),
		byte_tag("Weapon Attitude"),
		byte_tag("Swarm Attitude"),
		byte_tag("Unknown"),
		undefined_tag("Style Control", 9999),
		undefined_tag("Behaviors1", 9999),
		undefined_tag("Behaviors2", 9999),
		undefined_tag("Behaviors3", 9999),
		undefined_tag("Behaviors4", 9999),
		undefined_tag("Behaviors5", 9999),
		block_tag("Special Movement",
		{
			undefined_tag("Special Movement 1", 9999),
		}),
		block_tag("Behavior List",
		{
			string_tag("Behavior Name"),
		}),
	});
};
