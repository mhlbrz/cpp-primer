#include <iostream>
#include <vector>

int main(void) {
  int ia[10];
  int ia2[10];

  // initialize values in ia
  for (unsigned i = 0; i < 10; ++i)
    ia[i] = i;

  // copy ia to ia2
  for (unsigned i = 0; i < 10; ++i) {
    ia2[i] = ia[i];
  }

  // print
  for (auto i : ia2) {
    std::cout << i << std::endl;
  }

  std::cout << "VECTORS ---------" << std::endl;

  // using vectors
  std::vector<int> vi, vi2;
  for (int i = 0; i < 10; ++i) {
    vi.push_back(i);
  }
  vi2 = vi; // copy by assignment

  vi[0] = 100;

  for (auto i : vi2) {
    std::cout << i << std::endl;
  }

  return 0;
}
