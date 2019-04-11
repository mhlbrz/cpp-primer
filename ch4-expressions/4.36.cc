#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  int i = 10;
  double d = 2.2;

  // explicit conversion double to int
  i *= static_cast<int>(d);

  cout << i << endl;

  return 0;
}
