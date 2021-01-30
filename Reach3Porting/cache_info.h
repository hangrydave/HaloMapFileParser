#pragma once

#include <string>

enum e_game
{
	halo3,
	haloreach,
	both
};

struct s_cache_info
{
	e_game game;
	std::string file_path;
};