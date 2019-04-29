#include <iostream>
void reset(int &i) { i = 0; }

int main(void) {
  int i = 300;
  reset(i);
  std::cout << i << std::endl;
  return 0;
}
