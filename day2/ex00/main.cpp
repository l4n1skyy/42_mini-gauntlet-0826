#include <iostream>
struct Enemy {
  int hp = 100;
};

int fight(bool flee) {
  Enemy *e = new Enemy();
  if (flee) {
    delete e;
    return -1;
  }
  int result = e->hp;
  delete e;
  return result;
}
int main() { std::cout << fight(false) << ' ' << fight(true) << '\n'; }
