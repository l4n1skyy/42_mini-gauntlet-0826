#include "Enemy.hpp"
#include "Entity.hpp"
#include "Player.hpp"
#include <iostream>

int main() {
  Enemy goblin("Goblin", 12);
  Player hero("Aria", 30, 5);

  Entity *a = &goblin;
  Entity *b = &hero;
  a->takeDamage(8);
  b->takeDamage(8);

  std::cout << goblin.describe() << '\n';
  std::cout << hero.describe() << '\n';

  goblin.takeDamage(100);
  hero.heal(999);

  std::cout << goblin.describe() << '\n';
  std::cout << hero.describe() << '\n';
}
