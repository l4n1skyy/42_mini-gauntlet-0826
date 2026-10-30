#include "Vec2.hpp"
#include <iostream>

int main() {
  const Vec2 a(3.0f, 4.0f);
  const Vec2 b(1.0f, 2.0f);

  std::cout << "a (" << a.x() << ", " << a.y() << "), len: " << a.length()
            << '\n';
  std::cout << "b (" << b.x() << ", " << b.y() << "), len: " << b.length()
            << '\n';

  a.setX(9);
  Vec2 sum = a.plus(b);
  std::cout << "a + b (" << sum.x() << ", " << sum.y() << ")\n";

  Vec2 new_b = b;
  new_b.setX(10.0f);
  std::cout << "b new (" << new_b.x() << ", " << new_b.y() << ")\n";

  return 0;
}
