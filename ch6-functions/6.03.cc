#include <iostream>

int fact(int i) {
  int res = 1;
  while (i != 0) {
    res *= i--;
  }
  return res;
}

int main(void) {
  std::cout << "fact(3)=" << fact(3) << std::endl;
  std::cout << "fact(5)=" << fact(5) << std::endl;
  return 0;
}
