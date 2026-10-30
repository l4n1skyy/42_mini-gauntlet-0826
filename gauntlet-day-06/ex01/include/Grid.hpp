#pragma once

#include <string>
#include <vector>

struct Cell
{
	int x, y;
};

class Grid
{
  public:
	static Grid load(const std::string &path);
	bool inBounds(Cell c) const;
	bool isOpen(Cell c) const;
	std::vector<Cell> neighbours(Cell c) const;
	Cell start() const;
	Cell goal() const;

  private:
	std::vector<std::string> m_grid;
	Cell m_start;
	Cell m_goal;
};
