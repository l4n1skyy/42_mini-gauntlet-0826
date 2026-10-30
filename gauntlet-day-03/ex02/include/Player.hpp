#pragma once
#include "Entity.hpp"

class Player : public Entity {
public:
  Player(std::string name, int maxHp, int armor);
  void takeDamage(int amount) override;
  std::string describe() const override;

private:
  int m_armor;
};
