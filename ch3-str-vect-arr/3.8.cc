#include <iostream>
#include <string>

int main(void) {
  std::string s = "loop through strings 3 methods";
  std::string line(80, '-');

  std::cout << "WHILE LOOP" << std::endl;

  decltype(s.size()) index = 0;
  while (index != s.size()) {
    std::cout << "char at " << index << "=" << s[index] << std::endl;
    ++index;
  }

  std::cout << line << std::endl << "FOR LOOP" << std::endl;

  for (decltype(s.size()) ind = 0; ind < s.size(); ind++) {
    std::cout << "char at " << ind << "=" << s[ind] << std::endl;
  }

  std::cout << line << std::endl << "FOR RANGE LOOP" << std::endl;

  for (auto i : s) {
    std::cout << "char at " << &i << "=" << i << std::endl;
  }

  return 0;
}
