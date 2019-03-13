#include <iostream>

int main(void) {
  double d;
  int i;
  int *pi;
  // why illegal
  // d = i = pi = 0;
  // pi is a pointer to int, not int
  //
  // fix: d = i = *pi = 0;
  d = i = *pi = 0;

  return 0;
}
