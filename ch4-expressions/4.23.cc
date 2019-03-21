#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  string s = "word";

  // "==" has lower precendence than "+"
  string pl = s + (s[s.size() - 1] == 's' ? "" : "s");
  cout << pl << endl;
  return 0;
}
