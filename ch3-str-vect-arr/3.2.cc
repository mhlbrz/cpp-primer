#include <iostream>
#include <string>

int main(void) {
  std::string s1;

  // read line
  while (std::getline(std::cin, s1)) {
    std::cout << s1.size() << std::endl;
  };

  // read word
  while (std::cin >> s1) {
    std::cout << s1.size() << std::endl;
  };

  return 0;
}
