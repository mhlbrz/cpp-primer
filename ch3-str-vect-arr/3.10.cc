#include <iostream>
#include <string>

// convert input string to output without punctuation
int main(void) {
  std::string sin, sout;
  std::cin >> sin;
  for (auto i : sin) {
    if (!std::ispunct(i)) {
      sout.push_back(i);
    }
  }
  std::cout << sin << " => " << sout << std::endl;
  return 0;
}
