#pragma once

#include <string>

class Entity
{
  public:
	virtual std::string describe() const = 0;
	virtual ~Entity() = default;
};
