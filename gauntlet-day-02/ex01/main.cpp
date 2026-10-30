#include "Owned.hpp"
#include <iostream>

int fight(bool flee) {
  Owned o;
  if (flee)
    return -1;
  int result = o->hp;
  return result;
}

int main() { std::cout << fight(false) << ' ' << fight(true) << '\n'; }
