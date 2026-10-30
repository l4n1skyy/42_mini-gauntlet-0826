#include <iostream>
#include <set>
#include <vector>

int main()
{
	std::vector<int> stream = {7, 2, 7, 42, 13, 2, 42};
	std::set<int> spawn;

	// vector -> set
	for (const auto &s : stream)
	{
		spawn.insert(s);
	}

	std::cout << "-- spawned (unique, sorted) --\n";

	// print set
	for (const auto &s : spawn)
	{
		std::cout << s << "\n";
	}

	// print count
	std::cout << "count: " << spawn.size() << "\n";

	// check membership, a.k.a how many of this value
	std::cout << "is 42 spawned? " << (spawn.count(42) ? "yes" : "no") << "\n";
	std::cout << "is 99 spawned? " << (spawn.count(99) ? "yes" : "no") << "\n";
}
