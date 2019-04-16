#include <iostream>
// difference between parameter, local and local static

int generator(int incr) {
  int coef = 3;
  static int accum = 0;
  return accum += incr * coef;
}

int main(void) {
  std::cout << generator(1) << std::endl;
  std::cout << generator(3) << std::endl;
  return 0;
}
