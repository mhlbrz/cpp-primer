/*
 * what happens in each statement
 */

#include <iostream>

int main(void) {
  int i;
  // if (42 = i) { } // error assign to lvalue

  if (i = 42) {
    std::cout << "true" << std::endl;
  } // ok, asign 42 to int i (warning: parentheses around assignment
  return 0;
}
