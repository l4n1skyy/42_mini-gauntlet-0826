#pragma once
#include <string>

class Entity {
public:
  Entity(std::string name, int maxHp);

  // actions
  virtual void takeDamage(int amount);
  void heal(int amount);

  // getters
  bool isAlive() const;
  int currentHp() const;
  int maxHp() const;
  virtual std::string describe() const = 0;

  // destructor
  virtual ~Entity();

protected:
  std::string m_name;

private:
  int m_maxHp;
  int m_currentHp;
};
