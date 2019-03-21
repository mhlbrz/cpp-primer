#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  int x[10];
  int *p = x;
  int(*pa)[10] = &x;

  int i = 1, *pi = &i;

  // size of x = 10 * size int
  // size of *x is size of first elemnt of array = size int
  // result = 10 * sizeInt / sizeInt = 10
  cout << sizeof(x) / sizeof(*x) << endl;

  // size of p = size of pointer ~ double?
  // size of *p is size of data type under the pointer
  // in our case it's first elemnt of the array
  // result = 8/4 = 2
  cout << sizeof(p) / sizeof(*p) << endl;
  cout << sizeof(p) << " " << sizeof(pi) << endl;
  cout << sizeof(*p) << " " << sizeof(*pi) << endl;
  cout << sizeof(pa) << " " << sizeof(*pa) << endl;
  return 0;
}
