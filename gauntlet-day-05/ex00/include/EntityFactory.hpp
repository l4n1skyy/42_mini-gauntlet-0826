#pragma once

#include "Entity.hpp"
#include <memory>
#include <string>

class EntityFactory
{
  public:
	static std::unique_ptr<Entity> make(const std::string &kind);
};
