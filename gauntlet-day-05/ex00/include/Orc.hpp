#pragma once

#include "Entity.hpp"
#include <string>

class Orc : public Entity
{
  public:
	std::string describe() const override
	{
		return "Orc (hp 40)";
	}
};
