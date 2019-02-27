#include <iostream>
#include <string>

int main(void) {
  std::string s1, s2;

  std::getline(std::cin, s1);
  std::getline(std::cin, s2);

  if (s1 == s2) {
    std::cout << "strings are equal" << std::endl;
  } else {
    std::cout << "string are not equal" << std::endl;
    std::string lg = s1 > s2 ? s1 : s2;
    std::cout << "larger: " << lg << std::endl;
  }

  std::cout << "checking length" << std::endl;

  if (s1.length() == s2.length()) {
    std::cout << "strings have same length" << std::endl;
  } else {
    auto l1 = s1.length(), l2 = s2.length();
    auto s = l1 > l2 ? s1 : s2;
    std::cout << "longer string : " << s << std::endl;
  }

  return 0;
}
