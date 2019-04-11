#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  string s;
  while (std::getline(cin, s)) {
    int vc = 0;
    for (auto i = s.begin(); i != s.end(); ++i) {
      if (*i == 'f') {
        switch (*(i + 1)) {
        case 'f':
        case 'l':
        case 'i':
          ++vc;
          break;
        default:
          break;
        }
      }
    }
    cout << "number of fi fl ff = " << vc << endl;
  }

  return 0;
}
