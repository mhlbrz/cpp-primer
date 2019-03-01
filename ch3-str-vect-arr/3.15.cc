
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  vector<string> sv;
  string s = "0";
  while (true) {
    getline(cin, s);
    if (s.size() == 0) {
      break;
    }
    sv.push_back(s);
    std::cout << "adding new line to sv, size=" << sv.size() << std::endl;
  }

  std::cout << "size=" << sv.size() << std::endl;
  for (auto e : sv) {
    std::cout << e << std::endl;
  }

  return 0;
}
