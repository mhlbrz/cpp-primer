#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  string w1, w2;
  while (cin >> w1) {
    if (w1.empty()) {
      w2 = w1;
      continue;
    }
    if (w1 == w2) {
      std::cout << w1 << " occured twice" << std::endl;
      if (std::isupper(w1[0])) {
        std::cout << "first is upper" << std::endl;
        break;
      }
      continue;
    } else {
      std::cout << "no word was repeated" << std::endl;
    }
    w2 = w1;
  }
  return 0;
}
