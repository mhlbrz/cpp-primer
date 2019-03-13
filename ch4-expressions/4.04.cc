#include <iostream>

// show evaluation order with parentheses

int main(void) {
  // 12 / 3 * 4 +5 * 15 + 24 % 4 /2
  int i = (((12 / 3) * 4) + (5 * 15)) + ((24 % 4) / 2);

  std::cout << "i=" << i << std::endl;
  return 0;
}
