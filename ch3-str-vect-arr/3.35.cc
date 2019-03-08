#include <iostream>

int main(void) {
  int ia[8] = {1, 2, 3, 4, 5, 6, 7, 8};

  // make all values in array = 0
  int *b = ia, *e = ia + 8;
  while (b < e) {
    *b = 0;
    ++b;
  }

  // forloop
  for (int *i = ia; i < e; ++i) {
    *i = 1;
  }

  // print
  for (auto i : ia) {
    std::cout << i << std::endl;
  }

  return 0;
}
