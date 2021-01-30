#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace pphy_tag
{
	struct group
	{
		char flags[4]; // ???
		float unknown;
		float unknown2;
		float unknown3;
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
		char unknown7[4]; // ???
		float density;
		float air_friction;
		float water_friction;
		float surface_friction;
		float elasticity;
		char unknown8[4]; // ???
		char unknown9[4]; // ???
		char unknown10[4]; // ???
	};
}
