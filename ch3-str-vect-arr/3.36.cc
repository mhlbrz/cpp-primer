#include <iostream>
#include <vector>

int main(void) {
  // compare 2 arrays equality
  int a1[3] = {1, 2, 3}, a2[3] = {3, 2, 1}, a3[3] = {1, 2, 3};

  // compare a1 and a2
  bool eq = true;
  for (int i = 0; i < 3; ++i) {
    if (a1[i] != a2[i]) {
      eq = false;
    }
  }
  std::cout << "a1 == a2 : " << eq << std::endl;

  // compare a1 and a3
  eq = true;
  for (int i = 0; i < 3; ++i) {
    if (a1[i] != a3[i]) {
      eq = false;
    }
  }
  std::cout << "a1 == a3 : " << eq << std::endl;

  // compare 2 vectors, easy
  std::vector<int> iv1 = {1, 2, 3}, iv2 = {3, 2, 1}, iv3 = {1, 2, 3};
  std::cout << "iv1 == iv2 : " << (iv1 == iv2) << std::endl;
  std::cout << "iv1 == iv3 : " << (iv1 == iv3) << std::endl;

  return 0;
}
