#include <iostream>
#include <string>
#include <vector>

using namespace std;

string sa[10] = {"smth"};

string (*func())[10] {
  sa[0] = "hi";
  std::cout << sa[0] << std::endl;
  return &sa;
};

int main(void) {
  auto sa = func();
  std::cout << *sa[0] << std::endl;
  return 0;
}
