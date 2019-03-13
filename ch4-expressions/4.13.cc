#include <iostream>

int main(void) {
  int i;
  double d;

  // d = i = 3.5; - d = 3, i =3 (warning, implicit conversion)
  d = i = 3.5;
  std::cout << d << " " << i << std::endl;

  // i = d = 3.5; - i=3, d=3.5; Ok!
  i = d = 3.5;
  std::cout << d << " " << i << std::endl;

  return 0;
}
