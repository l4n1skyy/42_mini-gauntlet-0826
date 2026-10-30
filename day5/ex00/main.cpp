#include "EntityFactory.hpp"
#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<std::string> vec = {"orc", "bat", "boss", "bat"};

	for (const auto &v : vec)
	{
		auto e = EntityFactory::make(v);
		std::cout << "spawned " << e->describe() << '\n';
	}
}
