#include <cstring>
#include <iostream>
#include <string>

int main(void) {

  // compare strings, easy
  std::string s1 = "123qwe", s2 = "qwe123", s3 = "123qwe";
  std::cout << "s1==s2 : " << (s1 == s2) << std::endl;
  std::cout << "s1==s3 : " << (s1 == s3) << std::endl;

  const char cs1[] = "123qwe", cs2[] = "qwe123", cs3[] = "123qwe";
  std::cout << "cmp cs1, cs2 : " << std::strcmp(cs1, cs2) << std::endl;
  std::cout << "cmp cs1, cs3 : " << std::strcmp(cs1, cs3) << std::endl;

  return 0;
}
