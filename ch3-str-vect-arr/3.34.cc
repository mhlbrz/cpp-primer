#include <iostream>

int main(void) {
  int ia[8] = {1, 2, 3, 4, 5, 6, 7, 8};

  int *p1 = &ia[4];
  int *p2 = p1 - 2;

  std::cout << "p1: " << p1 << " val: " << *p1 << std::endl;
  std::cout << "p2: " << p2 << " val: " << *p2 << std::endl;

  auto n = p2 - p1;
  std::cout << "ptrdiff " << n << std::endl;

  p1 += p2 - p1;
  // is there illigal values?
  //
  // while they are both points to the same array, no
  //
  // if p1 and p2 points to same location for example begining or end
  // ptrdiff = 0 and expression will be in bounds of array
  //
  // if p1 != p2, diff will always const p2-p1 and expression will points
  // p1 to p2 location

  std::cout << "p1: " << p1 << " val: " << *p1 << std::endl;

  return 0;
}
