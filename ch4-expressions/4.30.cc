#include <iostream>
#include <string>
#include <vector>

using namespace std;

int f() { return 10; }

void f1() {}

int main(void) {
  int x = 1, y = 2;
  cout << sizeof(x + y) << endl;
  // wrong
  // cout << sizeof x + y << endl;

  // sizeof p->mem[i] is ok "->" operator
  // has higher precedence

  int a = 10, b = 1;
  cout << sizeof(a < b) << endl;

  // size of return type of function which is int
  cout << sizeof f() << endl;

  return 0;
}
