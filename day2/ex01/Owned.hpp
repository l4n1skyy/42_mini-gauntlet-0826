#pragma once

struct Enemy {
  int hp = 100;
};

class Owned {
public:
  Owned();
  Owned(const Owned &other) = delete;
  Owned &operator=(const Owned &other) = delete;
  ~Owned();

  Enemy *operator->() const;

private:
  Enemy *m_enemy;
};

int fight(bool flee);
