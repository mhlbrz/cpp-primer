// swap by pointer
#include <iostream>
void swap(int *i, int *i1) {
  int t = *i;
  *i = *i1;
  *i1 = t;
}

int main(void) {
  int i = 5, *ip = &i;
  int i1 = 20, *ip1 = &i1;
  std::cout << *ip << " " << *ip1 << std::endl;
  swap(ip, ip1);
  std::cout << *ip << " " << *ip1 << std::endl;
  return 0;
}
