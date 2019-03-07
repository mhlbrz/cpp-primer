#include <iostream>

int main(void) {
  constexpr size_t array_size = 10;
  int ia[array_size];

  // wrong, buffer overflow accessing array at position ia[array_size]
  for (size_t ix = 1; ix <= array_size; ++ix) {
    ia[ix] = ix;
  }

  for (auto i : ia) {
    std::cout << i << std::endl;
  }

  // fix overflow
  for (size_t ix = 0; ix < array_size; ++ix) {
    ia[ix] = 100 + ix;
  }

  std::cout << "FIX --------------------" << std::endl;
  for (auto i : ia) {
    std::cout << i << std::endl;
  }

  return 0;
}
