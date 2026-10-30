#pragma once
#include "Entity.hpp"
#include "Visitor.hpp"
#include <string>

class Boss : public Entity
{
  public:
	std::string describe() const override
	{
		return "Boss (hp 300)";
	}
	int hp() const
	{
		return 300;
	}
	void accept(Visitor &v) override
	{
		v.visit(*this);
	}
};
