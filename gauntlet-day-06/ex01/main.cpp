#include "Grid.hpp"
#include <fstream>
#include <iostream>
#include <string>

// overall program: O(rows * cols)
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cerr << "usage: " << argv[0] << " <map> <x> <y> [<x> <y> ...]\n";
		return 1;
	}

	// print the raw map file - O(rows * cols)
	std::ifstream file(argv[1]);
	std::string line;
	while (std::getline(file, line))
		std::cout << line << "\n";

	// load into Grid - O(rows * cols)
	Grid grid = Grid::load(argv[1]);

	// O(1) each
	Cell s = grid.start();
	Cell g = grid.goal();
	std::cout << "start S = (" << s.x << "," << s.y << ")\n";
	std::cout << "goal G = (" << g.x << "," << g.y << ")\n";

	// O(q) iterations, q = number of queries
	for (int i = 2; i + 1 < argc; i += 2)
	{
		int x = std::stoi(argv[i]);		// O(1)
		int y = std::stoi(argv[i + 1]); // O(1)
		Cell c{x, y};

		// neighbours(): O(1) — always checks exactly 4 fixed directions
		// isOpen()/inBounds() are both O(1)
		std::vector<Cell> nb = grid.neighbours(c);

		std::cout << "neighbours(" << x << "," << y << "):";
		for (const auto &n : nb)
			std::cout << " (" << n.x << "," << n.y << ")";
		std::cout << "\n";
	}
	// query loop as a whole is O(q), q = number of queried cells
}
