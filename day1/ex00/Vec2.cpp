#include "Vec2.hpp"
#include <cmath>

Vec2::Vec2(float x, float y) : m_x(x), m_y(y) {}

float Vec2::x() const { return m_x; }
float Vec2::y() const { return m_y; }

float Vec2::length() const { return std::sqrt(m_x * m_x + m_y * m_y); }

Vec2 Vec2::plus(const Vec2 &other) const {
  return Vec2(m_x + other.m_x, m_y + other.m_y);
}

void Vec2::setX(float x) { m_x = x; }
void Vec2::setY(float y) { m_y = y; }
