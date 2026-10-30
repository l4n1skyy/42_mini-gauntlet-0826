#pragma once
#include "Entity.hpp"
#include "Visitor.hpp"
#include <string>

class Orc : public Entity
{
  public:
	std::string describe() const override
	{
		return "Orc (hp 40)";
	}
	int hp() const
	{
		return 40;
	}
	void accept(Visitor &v) override
	{
		v.visit(*this);
	}
};
