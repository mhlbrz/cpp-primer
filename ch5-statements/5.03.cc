#include <iostream>

int main(void) {
  int sum = 0, val = 1;

  while (val <= 10) {
    sum += val;
    ++val;
  }
  std::cout << "Sum of 1 to 10 " << sum << std::endl;

  // using no-scope loop
  sum = 0;
  for (int i = 0; i < 10; ++i, sum += i)
    ;
  std::cout << "no scope " << sum << std::endl;

  return 0;
}
