// write condition where
// a > b, which > c, which > d
#include <iostream>

int main(void) {
  int a = 4, b = 3, c = 2, d = 1;
  bool n = (a > b) && (b > c) && (c > d);
  std::cout << "ans=" << n << std::endl;
  return 0;
}
