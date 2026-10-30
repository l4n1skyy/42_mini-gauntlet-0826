#include "Entity.hpp"
#include <iostream>
#include <vector>

bool shouldRemove(const Entity &e)
{
	return e.hp <= 5;
}

int main()
{
	// why no need smart pointer if struct is basically object
	std::vector<Entity> entities;

	entities.push_back({7, "orc", 30});
	entities.push_back({2, "bat", 8});
	entities.push_back({42, "boss", 300});
	entities.push_back({13, "rat", 4});

	std::cout << "-- roster --\n";

	// range based for loop, read only with const
	for (const auto &e : entities)
		std::cout << e.id << ' ' << e.name << " (hp " << e.hp << ")\n";

	// delete hp less than or equals to 6
	for (auto it = entities.begin(); it != entities.end();)
	{
		if (shouldRemove(*it))
			it = entities.erase(it);
		else
			++it;
	}

	std::cout << "-- survivors --\n";
	// range based for loop, reprint survivors
	for (const auto &e : entities)
		std::cout << e.id << ' ' << e.name << " (hp " << e.hp << ")\n";
}
