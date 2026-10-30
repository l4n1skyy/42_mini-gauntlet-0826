#pragma once
#include "Entity.hpp"

class Enemy : public Entity {
public:
  Enemy(std::string name, int maxHp);
  std::string describe() const override;
};
