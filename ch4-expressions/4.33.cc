#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  int x = 10, y = 1;

  bool b = true;
  // totaly wrong :|
  b ? ++x, ++y : --x, --y;
  cout << "x=" << x << " y=" << y << endl;

  // fix
  b ? (++x, ++y) : (--x, --y);
  cout << "x=" << x << " y=" << y << endl;

  return 0;
}
