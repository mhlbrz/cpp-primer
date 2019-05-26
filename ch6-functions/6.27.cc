#include <initializer_list>
#include <iostream>

int sum_li(std::initializer_list<int> li) {
  int sum = 0;
  for (auto i : li) {
    sum += i;
  }
  return sum;
}

int main(void) {
  std::cout << sum_li({10, 20, 30}) << std::endl;
  std::cout << sum_li({1, 2, 3}) << std::endl;
  return 0;
}
