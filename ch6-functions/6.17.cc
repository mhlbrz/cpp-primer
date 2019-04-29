#include <iostream>
#include <string>

using namespace std;

bool has_capital_letter(const string &s) {
  for (auto c : s) {
    if (std::isupper(c)) {
      return true;
    }
  }
  return false;
}

void string_tolower(string &s) {
  for (auto &c : s) {
    c = std::tolower(c);
  }
}

int main(void) {

  string slow = "hello world";
  string sup = "hello WoRld";

  std::cout << "slow has upper " << has_capital_letter(slow) << std::endl;
  std::cout << "sup has upper " << has_capital_letter(sup) << std::endl;

  string_tolower(sup);
  std::cout << "sup to lower " << sup << std::endl;
}
