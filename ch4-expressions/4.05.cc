#include <iostream>

// determine result of following

int main(void) {
  // -30 * 3 + 21 / 5 = -90 + 4 = -86
  std::cout << -30 * 3 + 21 / 5 << std::endl;
  // -30 + 3 * 21 / 5 = -30 + 63/5 = -30 + 12 = -18
  std::cout << -30 + 3 * 21 / 5 << std::endl;
  // 30 / 3 * 21 % 5 = 210 % 5 = 0
  std::cout << -30 * 3 * 21 % 5 << std::endl;
  // -30 / 3 * 21 % 4 = -210 % 4 = -2
  std::cout << -30 * 3 * 21 % 4 << std::endl;

  // 5 * 11 / 5 = 11
  // 5 * (11 / 5) = 10 - parenthesis has a higher priority
  // and evaluated first
  std::cout << 5 * (11 / 5) << std::endl;

  return 0;
}
