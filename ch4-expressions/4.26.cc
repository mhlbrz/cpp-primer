#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  unsigned i = 0;
  i |= 1U << 27;

  cout << i << endl;
  return 0;
}
