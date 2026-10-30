#include "EnemySpawner.hpp"
#include <iostream>

EnemySpawner::EnemySpawner(int maxCount) : m_count(maxCount), m_spawned(0) {}

int EnemySpawner::spawn() {
  if (m_spawned < m_count)
    m_spawned++;
  return m_spawned;
}

int EnemySpawner::spawnedCount() const { return m_spawned; }
