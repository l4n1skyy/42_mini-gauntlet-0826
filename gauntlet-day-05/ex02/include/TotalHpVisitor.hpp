#pragma once
#include "Bat.hpp"
#include "Boss.hpp"
#include "Orc.hpp"
#include "Visitor.hpp"

struct TotalHpVisitor : Visitor
{
	int total = 0;
	void visit(Orc &o) override
	{
		total += o.hp();
	}
	void visit(Bat &b) override
	{
		total += b.hp();
	}
	void visit(Boss &b) override
	{
		total += b.hp();
	}
};
