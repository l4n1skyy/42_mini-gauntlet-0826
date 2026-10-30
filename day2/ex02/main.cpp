#include <iostream>
#include <memory>

struct Enemy {
  int hp = 100;
};

int fight(bool flee) {
  // fight is the sole owner of enemy and its never shared
  auto t = std::make_unique<Enemy>();
  Enemy *e = t.get();
  if (flee)
    return -1;
  int result = e->hp;
  return result;
}

int main() { std::cout << fight(false) << ' ' << fight(true) << '\n'; }
