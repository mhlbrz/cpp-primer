#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  std::string s1, s2;
  if (argc >= 3) {
    s1 = argv[1];
    s2 = argv[2];
    std::cout << s1 + s2 << std::endl;
  } else {
    std::cout << "not enough arguments" << std::endl;
  }
  return 0;
}
