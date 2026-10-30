#include "Entity.hpp"
#include <iostream>
#include <map>
#include <vector>

int main()
{
	std::map<int, Entity> entities;
	entities[7] = {7, "orc", 30};
	entities[2] = {2, "bat", 8};
	entities[42] = {42, "boss", 300};
	entities[13] = {13, "rat", 4};

	// find name from id
	for (const auto &i : std::vector<int>{42, 99})
	{
		auto e = entities.find(i);
		std::cout << "id " << i << ": ";
		if (e != entities.end())
			std::cout << e->second.name << '\n';
		else
			std::cout << "(not found)" << '\n';
	}

	std::cout << "-- entities by id --\n";

	// print out all the entities
	for (const auto &e : entities)
	{
		std::cout << e.second.id << " " << e.second.name << "\n";
	}
}
