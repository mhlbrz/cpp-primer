
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  vector<int> ivec;
  // undefined behaviour
  // ivec[1] = 42;

  // it is better to use push_back operator
  ivec.push_back(42);

  for (auto i : ivec) {
    cout << i << endl;
  }
  return 0;
}
