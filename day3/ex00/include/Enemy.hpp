#pragma once
#include "Entity.hpp"
#include <string>

class Enemy : public Entity {
public:
  Enemy(std::string name, int hp);
  std::string describe() const override;

private:
  int m_hp;
};
