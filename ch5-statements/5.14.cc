#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  string s1, s2;
  int c = 0;

  while (cin >> s2) {
    if (s1 == s2) {
      ++c;
    }
    s1 = s2;
  }

  std::cout << "word dups = " << c << std::endl;

  return 0;
}
