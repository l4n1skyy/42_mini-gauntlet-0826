#pragma once
#include "Entity.hpp"
#include <string>

class Player : public Entity {
public:
  Player(std::string name);
  std::string describe() const override;
};
