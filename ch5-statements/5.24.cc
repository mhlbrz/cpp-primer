#include <iostream>

int main(void) {
  int a, b;
  bool retry = true;

  while (retry) {
    try {
      std::cout << "enter 2 numbers:" << std::endl;
      std::cin >> a >> b;
      if (b == 0) {
        throw std::runtime_error("zero division");
      }
      std::cout << a / b << std::endl;
      retry = false;
    } catch (std::runtime_error) {
      std::cout << "0 is not allowed, try again?" << std::endl;
      char again;
      std::cin >> again;
      if (again == 'n')
        retry = false;
    }
  }

  return 0;
}
