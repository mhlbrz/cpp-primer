#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  do {
    string s1, s2;
    std::cout << "enter 2 words:" << std::endl;
    cin >> s1 >> s2;
    std::cout << "s1<s2 is bool=" << (s1 < s2) << std::endl;
  } while (cin);
  return 0;
}
