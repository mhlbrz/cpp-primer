#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  constexpr int size = 5;
  int ia[size] = {1, 2, 3, 4, 5};

  // ptr is pointing to array elemnt itself
  // ix is a local variable with an array index
  for (int *ptr = ia, ix = 0; ix != size && ptr != ia + size; ++ix, ++ptr) {
    cout << "ptr " << *ptr << endl;
    cout << "ix " << ix << endl;
  }

  return 0;
}
