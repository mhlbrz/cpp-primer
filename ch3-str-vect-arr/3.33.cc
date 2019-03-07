#include <iostream>

int main(void) {
  int ia[8]{1, 2, 3, 4, 5, 6, 7, 8};

  auto *p1 = ia;
  auto *p2 = &ia[2];

  std::cout << "p1: " << p1 << " val: " << *p1 << std::endl;
  std::cout << "p2: " << p2 << " val: " << *p2 << std::endl;

  std::cout << "p2-p1 " << p2 - p1 << std::endl;

  p1 += p2 - p1;

  std::cout << "p1: " << p1 << " val: " << *p1 << std::endl;

  return 0;
}
