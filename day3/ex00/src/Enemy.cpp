#include "Enemy.hpp"

Enemy::Enemy(std::string name, int hp) : Entity(std::move(name)), m_hp(hp) {}

std::string Enemy::describe() const {
  return "Enemy " + m_name + " (hp " + std::to_string(m_hp) + ")";
}
