// arrays
#include <iostream>
#include <string>

using namespace std;

string sa[10]; // 10 empty strings
int ia[10];    // 10 zero valued ints

int main(void) {
  string sa2[10]; // inside function, string is not built-in, has a "" value
  int ia2[10];    // inside function, undefined

  std::cout << *ia << std::endl;
  std::cout << *ia2 << std::endl; // warning: has uninitialized value

  std::cout << *sa << std::endl;
  std::cout << *sa2 << std::endl;

  return 0;
}
