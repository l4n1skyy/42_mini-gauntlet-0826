#include "Bat.hpp"
#include "Boss.hpp"
#include "DescribeVisitor.hpp"
#include "Entity.hpp"
#include "Orc.hpp"
#include "TotalHpVisitor.hpp"
#include <iostream>
#include <memory>
#include <vector>

int main()
{
	std::vector<std::unique_ptr<Entity>> entities;
	entities.push_back(std::make_unique<Orc>());
	entities.push_back(std::make_unique<Bat>());
	entities.push_back(std::make_unique<Boss>());

	DescribeVisitor describe;
	TotalHpVisitor totalHp;

	std::cout << "-- describe --\n";
	for (auto &e : entities)
		e->accept(describe);

	for (auto &e : entities)
		e->accept(totalHp);

	std::cout << "-- total hp --\n";
	std::cout << totalHp.total << '\n';

	return 0;
}
