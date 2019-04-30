#include <iostream>

int i = 0, j[2] = {0, 1};

void print(int (&arr)[2]) {
  for (auto i : arr) {
    std::cout << i << std::endl;
  }
}

void print(int i) { std::cout << i << std::endl; }

int main() {
  print(j);
  print(i);
  return 0;
}
