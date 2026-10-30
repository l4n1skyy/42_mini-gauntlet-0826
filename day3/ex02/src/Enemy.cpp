#include "Enemy.hpp"

Enemy::Enemy(std::string name, int maxHp) : Entity(std::move(name), maxHp) {}

std::string Enemy::describe() const {
  std::string status = "Enemy " + m_name + " (hp " +
                       std::to_string(currentHp()) + "/" +
                       std::to_string(maxHp()) + ")";
  if (!isAlive())
    status += " [dead]";
  return status;
}
