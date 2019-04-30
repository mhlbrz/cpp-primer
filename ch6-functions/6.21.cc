#include <iostream>

int get_largest(int i, int *ip) {
  if (i > *ip)
    return i;
  return *ip;
}

int main(void) {
  int i = 50, b = 40, *bp = &b;

  std::cout << get_largest(i, bp) << std::endl;

  return 0;
}
