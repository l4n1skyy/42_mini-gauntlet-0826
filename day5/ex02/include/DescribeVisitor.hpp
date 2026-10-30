#pragma once
#include "Bat.hpp"
#include "Boss.hpp"
#include "Orc.hpp"
#include "Visitor.hpp"
#include <iostream>

class DescribeVisitor : public Visitor
{
  public:
	void visit(Orc &o) override
	{
		std::cout << o.describe() << '\n';
	}
	void visit(Bat &b) override
	{
		std::cout << b.describe() << '\n';
	}
	void visit(Boss &b) override
	{
		std::cout << b.describe() << '\n';
	}
};
