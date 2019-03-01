#include <iostream>
#include <string>

int main(void) {
  const std::string s = "Keep out!";
  for (auto &c : s) {
    // c = std::toupper(c);
    // cannot do that, c is const char
    std::cout << c << std::endl;
  }
  return 0;
}
