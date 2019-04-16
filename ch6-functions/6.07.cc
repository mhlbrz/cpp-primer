#include <iostream>
int genSeq() {
  static int g = 0;
  return g++;
}

int main(void) {
  for (int i = 0; i < 10; ++i) {
    std::cout << genSeq() << std::endl;
  }
  return 0;
}
