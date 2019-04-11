#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  string s;
  while (cin >> s) {
    int vc = 0;
    for (auto i : s) {
      if (i == 'e') {
        ++vc;
      }
      if (i == 'y') {
        ++vc;
      }
      if (i == 'u') {
        ++vc;
      }
      if (i == 'i') {
        ++vc;
      }
      if (i == 'o') {
        ++vc;
      }
      if (i == 'a') {
        ++vc;
      }
    }
    cout << "number of vowels = " << vc << endl;
  }

  return 0;
}
