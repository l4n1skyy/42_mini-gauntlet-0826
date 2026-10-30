#pragma once

#include "Entity.hpp"
#include <string>

class Boss : public Entity
{
  public:
	std::string describe() const override
	{
		return "Boss (hp 300)";
	}
};
