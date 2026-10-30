#include "EnemySpawner.hpp"
#include <iostream>

int main() {
  EnemySpawner spawner(2);
  std::cout << "spawned " << spawner.spawn() << '\n'; // 1
  std::cout << "spawned " << spawner.spawn() << '\n'; // 2
  std::cout << "spawned " << spawner.spawn() << '\n'; // 2 (capped)
  std::cout << "total   " << spawner.spawnedCount() << '\n';
}
