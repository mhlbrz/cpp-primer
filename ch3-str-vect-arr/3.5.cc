#include <iostream>
#include <string>

int main(void) {
  using std::string;

  string totalwsp, totalnosp, current;

  while (std::getline(std::cin, current)) {
    totalnosp += current;
    std::cout << "no space: " << totalnosp << std::endl;

    totalwsp = totalwsp + " " + current;
    std::cout << "with space: " << totalwsp << std::endl;
  };

  return 0;
}
