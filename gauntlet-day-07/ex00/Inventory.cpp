// Inventory.cpp
#include "Inventory.hpp"
#include <algorithm>

void Inventory::add(const std::string &item)
{
	m_items.push_back(item);
}

void Inventory::remove(const std::string &item)
{
	for (auto it = m_items.begin(); it != m_items.end(); ++it)
	{
		// Test 3 & 4
		// if (*it != item)
		if (*it == item)
		{
			m_items.erase(it);
			return;
		}
	}
}

bool Inventory::has(const std::string &item) const
{
	// Test 2
	// return std::find(m_items.begin(), m_items.end(), item) == m_items.end();
	return std::find(m_items.begin(), m_items.end(), item) != m_items.end();
}

int Inventory::count() const
{
	// Test 1
	// return 0;
	return static_cast<int>(m_items.size());
}
