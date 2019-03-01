#include <iostream>
#include <string>

int main(void) {
  std::string s;
  // valid but s[0] is undefined
  std::cout << s[0] << std::endl;
  return 0;
}
