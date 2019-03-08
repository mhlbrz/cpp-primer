#include <iostream>
#include <vector>

int main(void) {
  // return value from 5 + 10 * 20/2
  // can be rewritten 5 + ((10*20)/2) = 105
  std::cout << (5 + 10 * 20 / 2) << std::endl;

  // using parenthesise show the order in which the operands are grouped
  std::vector<char> v = {'a', 'b', 'c'};

  // p1 is a deferenced value of the iterator that points to first element
  char p1 = *v.begin();
  std::cout << "p1=" << p1 << std::endl;

  char p2 = (*v)->begin();
  std::cout << "p2=" << p2 << std::endl;

  return 0;
}
