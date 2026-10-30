#include "Timer.hpp"

Timer::Timer(int startMs) : m_elapsedMs(startMs) {}

void Timer::advance(int deltaMs) { m_elapsedMs += deltaMs; }

int Timer::elapsedMs() const { return m_elapsedMs; }
