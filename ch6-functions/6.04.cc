#include <iostream>

int fact(int i) {
  int res = 1;
  while (i != 0) {
    res *= i--;
  }
  return res;
}

int main(void) {
  int i;
  std::cout << "enter number for fact:" << std::endl;
  std::cin >> i;
  std::cout << fact(i) << std::endl;
  return 0;
}
