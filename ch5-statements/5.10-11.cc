#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {

  string s;

  while (std::getline(cin, s)) {
    int vc = 0, bc = 0, tabs = 0, nl = 0;
    for (auto i : s) {

      i = std::tolower(i);

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
      if (std::isblank(i)) {
        ++bc;
      }
      if (i == '\t') {
        ++tabs;
      }
      if (i == '\n') {
        ++nl;
      }
    }
    cout << "number of vowels = " << vc << endl;
    cout << "number of spaces = " << bc << endl;
    cout << "number of tabs = " << tabs << endl;
    cout << "number of new lines = " << nl << endl;
  }

  return 0;
}
