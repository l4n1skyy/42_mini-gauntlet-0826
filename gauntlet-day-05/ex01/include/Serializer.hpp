#pragma once

#include "GameState.hpp"
#include <string>

class Serializer
{
  public:
	std::string serialize(const GameState &state) const;
};
