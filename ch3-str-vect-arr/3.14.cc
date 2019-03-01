
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  vector<int> iv;
  int i = 0;
  while (i < 100) {
    std::cin >> i;
    iv.push_back(i);
  }
  std::cout << "size=" << iv.size() << std::endl;
  for (auto e : iv) {
    std::cout << e << std::endl;
  }
  return 0;
}
