#include <iostream>
#include <string>
#include <vector>

using namespace std;

string printBits(unsigned i) {
  string s = "";
  for (int j = 0; j < 8; ++j) {
    char c = i % 2 ? '1' : '0';
    s.insert(s.begin(), c);
    i /= 2;
  }
  return s;
}

int main(void) {
  // what is the value of ~(q) << 6
  // 32bit, 8 bit chars Latin-1
  // where q = 01110001
  //
  // ~q = 10001110
  // <<6 = 10000000

  int q = 113;

  // 01110001
  cout << printBits(q) << endl;

  // 10001110
  cout << printBits(~(q)) << endl;

  // 1000000
  cout << printBits(~(q) << 6) << endl;
  return 0;
}
