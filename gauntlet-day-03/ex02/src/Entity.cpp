#include "Entity.hpp"
#include <algorithm>
#include <iostream>

Entity::Entity(std::string name, int maxHp)
    : m_name(std::move(name)), m_maxHp(maxHp), m_currentHp(maxHp) {}

Entity::~Entity() {}

void Entity::takeDamage(int amount) {
  int before = m_currentHp;
  m_currentHp = std::max(0, m_currentHp - amount);
  std::cout << m_name << " takes " << amount << " damage (" << before << " -> "
            << m_currentHp << " hp)\n";
}

void Entity::heal(int amount) {
  m_currentHp = std::min(m_maxHp, m_currentHp + amount);
}

bool Entity::isAlive() const { return m_currentHp > 0; }
int Entity::currentHp() const { return m_currentHp; }
int Entity::maxHp() const { return m_maxHp; }
