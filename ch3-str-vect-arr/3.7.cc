#include <iostream>
#include <string>

int main(void) {
  std::string s("Hello World!!!");
  // works with char either
  for (char &c : s) {
    c = 'X';
  }
  std::cout << s << std::endl;
}
