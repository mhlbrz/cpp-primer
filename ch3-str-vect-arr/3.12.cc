#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

int main(void) {
  // ok, declare vector that contains vector of integers
  vector<vector<int>> ivec;

  // not ok, svec has different type with ivec
  // vector<string> svec = ivec;

  // ok, initialize vector with size 10, and filled with "null" string
  vector<string> svec(10, "null");

  for (auto i : svec) {
    std::cout << i << std::endl;
  }

  return 0;
}
