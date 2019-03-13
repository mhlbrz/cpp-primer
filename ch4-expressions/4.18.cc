/*
auto pbeg = v.begin();
// print elements up to the first negative value
while (pbeg != v.end() && *beg >= 0)
    cout << *pbeg++ << endl; // print the current value and advance pbeg
*/

// what if *pbeg++ change to ++*pbeg
// cout will print results from index 1 to end inclusevely
// buffer overflow

#include <iostream>
#include <vector>

int main(void) {
  std::vector<int> v = {1, 2, 3, 4};

  // ok, postfix
  auto pbeg = v.begin();
  while (pbeg != v.end() && *pbeg >= 0) {
    std::cout << *pbeg++ << std::endl;
  }

  // not ok, prefix
  pbeg = v.begin();
  while (pbeg != v.end() && *pbeg >= 0) {
    std::cout << *++pbeg << std::endl;
  }

  return 0;
}
