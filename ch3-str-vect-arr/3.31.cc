#include <iostream>

int main(void) {
  int ia[10];

  std::cout << "FOR LOOP ------ " << std::endl;
  for (unsigned i = 0; i < 10; ++i)
    ia[i] = i;

  for (auto i : ia) {
    std::cout << i << std::endl;
  }

  std::cout << "FOR RANGE LOOP ------ " << std::endl;
  int ti = -1;
  for (auto &i : ia) {
    i = ++ti;
  }
  for (auto i : ia) {
    std::cout << i << std::endl;
  }

  return 0;
}
