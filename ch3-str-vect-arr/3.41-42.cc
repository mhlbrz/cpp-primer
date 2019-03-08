#include <iostream>
#include <vector>

int main(void) {
  // initialize vector from array of ints
  int ia[] = {
      1, 2, 3, 43, 4, 5, 6, 6,
  };
  std::vector<int> vi(std::begin(ia), std::end(ia));

  // print result
  for (auto i : vi) {
    std::cout << "vector from array: " << i << std::endl;
  }

  // copy vector into int array
  int ia2[vi.size()];
  auto pvi = vi.begin();
  int *pia2 = ia2;

  while (*pvi) {
    *pia2 = *pvi;
    ++pia2;
    ++pvi;
  }

  // print result
  for (auto i : ia2) {
    std::cout << "array from vector: " << i << std::endl;
  }

  return 0;
}
