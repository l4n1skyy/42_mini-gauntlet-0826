#pragma once
#include <string>

class Visitor;

class Entity
{
  public:
	virtual std::string describe() const = 0;
	virtual ~Entity() = default;
	virtual void accept(Visitor &) = 0;
};
