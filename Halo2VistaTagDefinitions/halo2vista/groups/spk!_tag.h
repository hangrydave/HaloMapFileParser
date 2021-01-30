#include "../../pch.h"

#pragma once

#include "../structures.h"

#include "../../types.h"

namespace spk__tag
{
	struct group
	{
		float almost_never;
		float rarely;
		float somewhat;
		float often;
		char unknown[4]; // ???
		char unknown2[4]; // ???
		char unknown3[4]; // ???
		char unknown4[4]; // ???
		char unknown5[4]; // ???
		char unknown6[4]; // ???
	};
}
