#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int>::iterator printRec(vector<int>::iterator e) {
  if (*e) {
    std::cout << *e << std::endl;
    return printRec(++e);
  }
  return e;
}

int main(void) {
  vector<int> vi = {1, 2, 3, 4, 5};
  printRec(vi.begin());

  std::cout << "done" << std::endl;
  return 0;
}
