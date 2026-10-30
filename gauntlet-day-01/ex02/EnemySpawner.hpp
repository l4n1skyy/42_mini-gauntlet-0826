#pragma once

class EnemySpawner {
public:
  EnemySpawner(int maxCount);
  int spawn();
  int spawnedCount() const;

private:
  int m_count;
  int m_spawned;
};
