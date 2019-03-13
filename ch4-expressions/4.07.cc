// 3 examples of overflow
#include <iostream>

int main(void) {
  // #1 short int
  short si = 32767;
  std::cout << ++si << std::endl; // returns - 32768

  // #2 unsigned short
  unsigned short usi = 65535;
  std::cout << ++usi << std::endl; // returns 0

  // #3 ...

  return 0;
}
