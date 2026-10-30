#include "Grid.hpp"
#include <fstream>
#include <string>

Grid Grid::load(const std::string &path)
{
	std::vector<std::string> vec;
	std::string line;

	std::ifstream file(path);

	Grid grid;
	int i = 0;
	while (std::getline(file, line))
	{
		vec.push_back(line);
		size_t s = line.find('S');
		size_t g = line.find('G');
		if (s != std::string::npos)
			grid.m_start = Cell{static_cast<int>(s), i};
		if (g != std::string::npos)
			grid.m_goal = Cell{static_cast<int>(g), i};
		i++;
	}
	grid.m_grid = vec;
	return grid;
}

bool Grid::inBounds(Cell c) const
{
	return c.y >= 0 && c.x >= 0 && (c.y < static_cast<int>(m_grid.size())) &&
		   (c.x < static_cast<int>(m_grid[c.y].size()));
}

bool Grid::isOpen(Cell c) const
{
	return inBounds(c) && m_grid[c.y][c.x] != '#';
}

std::vector<Cell> Grid::neighbours(Cell c) const
{
	std::vector<Cell> out;
	const int dx[] = {1, -1, 0, 0};
	const int dy[] = {0, 0, 1, -1};
	for (int i = 0; i < 4; i++)
	{
		Cell n{c.x + dx[i], c.y + dy[i]};
		if (isOpen(n))
			out.push_back(n);
	}
	return out;
}

Cell Grid::start() const
{
	return m_start;
}

Cell Grid::goal() const
{
	return m_goal;
}
