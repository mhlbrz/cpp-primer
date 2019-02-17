#include <iostream>

int main(void) {
  int a = 3, b = 4;
  decltype(a) c = a;
  decltype(a = b) d = a; // warning. d is reference to a

  std::cout << a << b << c << d << std::endl;
  // 3433

  ++d;
  std::cout << a << b << c << d << std::endl;
  // 4434

  return 0;
}
