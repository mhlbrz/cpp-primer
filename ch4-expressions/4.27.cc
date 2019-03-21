#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  unsigned long ul1 = 3, ul2 = 7;

  // ul1 & ul2 = 0011 & 0111 = 0011 = 3
  cout << (ul1 & ul2) << endl;

  // ul1 | ul2 = 7
  cout << (ul1 | ul2) << endl;

  // ul1 && ul2 = true = 1
  cout << (ul1 && ul2) << endl;

  // ul1 || ul2 = true = 1
  cout << (ul1 || ul2) << endl;

  return 0;
}
