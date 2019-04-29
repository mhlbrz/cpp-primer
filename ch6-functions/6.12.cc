// swap by reference
#include <iostream>
void swap(int &i, int &i1) {
  int t = i;
  i = i1;
  i1 = t;
}

int main(void) {
  int i = 5;
  int i1 = 20;
  std::cout << i << " " << i1 << std::endl;
  swap(i, i1);
  std::cout << i << " " << i1 << std::endl;
  return 0;
}
