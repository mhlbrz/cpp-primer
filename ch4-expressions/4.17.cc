#include <iostream>
// prefix and postfix increment

int main(void) {
  // prefix yields incremented value
  int i = 0, j, k = 0;
  j = ++i; // j = 1
  std::cout << j << std::endl;

  // postfix yields unincremented value
  j = k++; // j = 0
  std::cout << j << std::endl;
  return 0;
}
