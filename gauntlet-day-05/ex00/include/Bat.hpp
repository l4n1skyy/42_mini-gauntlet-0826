#pragma once

#include "Entity.hpp"
#include <string>

class Bat : public Entity
{
  public:
	std::string describe() const override
	{
		return "Bat (hp 8)";
	}
};
