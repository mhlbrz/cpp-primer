#include <iostream>

int main(void) {
  int a = 3, b = 4;
  decltype(a) c = a;   // c has type int with value of a, c int = 3
  decltype((b)) d = a; // d is a reference to int "a"
  ++c;                 // c = 4, a =3
  ++d;                 // d = a = 4

  std::cout << a << b << c << d << std::endl;
  // out 4444

  return 0;
}
