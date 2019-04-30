#include <iostream>
void swap_ptrs(int *&a, int *&b) {
  int *c = a;
  a = b;
  b = c;
};

int main(void) {
  int i1 = 10, i2 = 20, *ip1 = &i1, *ip2 = &i2;
  std::cout << *ip1 << '\t' << *ip2 << std::endl;
  swap_ptrs(ip1, ip2);
  std::cout << *ip1 << '\t' << *ip2 << std::endl;
  return 0;
}
