// leakcheck.cpp: leaks on purpose, so you can verify your detector catches it
#include <iostream>

int main() {
  int *forgotten = new int[10]; // never deleted: 40 bytes leak
  forgotten[0] = 42;
  std::cout << "this program leaks " << 10 * sizeof(int)
            << " bytes on purpose\n";
  return 0;
}
