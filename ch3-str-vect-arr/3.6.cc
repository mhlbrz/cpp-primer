#include <iostream>
#include <string>

int main(void) {
  std::string s("Hello World!!!");
  for (auto &c : s) {
    c = 'X';
  }
  std::cout << s << std::endl;
}
