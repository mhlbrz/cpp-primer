#include <iostream>
#include <vector>

int *ptr;
int ival, i;
std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7};

int main(void) {

  // ptr != 0 && *ptr++  -  if ptr global then = 0
  ptr != 0 && (*ptr)++; // *ptr++ is an rlalue and should be assigned

  i = 10;
  ptr = &i;

  // if pointer non-null
  // then increment value pointer points to
  ptr != 0 && (*ptr)++;
  std::cout << "ptr " << *ptr << std::endl;

  // ival++ && ival; // valid but right side is useless
  // fix: ival && ival++
  // first check ival is defined, then increment
  ival++ && (ival);
  std::cout << "ival " << ival << std::endl;

  int ii; // undefined if declared inside function
  ii++ && (ii);
  std::cout << "ii " << ii << std::endl;

  // vec[ival++] <= vec[ival] undefined behaviour,
  // incrementing and evaluation ival can be in different order
  // second: ival++ yeilds current ival value, that means
  // comparison between ival and ival
  // fix: int tmp = vec[ival++]
  // tmp <= vec[ival]
  ival = 4;
  int tmp = vec[ival++];
  std::cout << "vec " << (tmp <= vec[ival]) << std::endl;

  return 0;
}
