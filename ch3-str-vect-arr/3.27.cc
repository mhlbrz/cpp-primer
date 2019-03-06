// arrays
#include <iostream>

using namespace std;

int main(void) {
  unsigned buf_size = 1024;

  // which of following are illegal:

  int ia[buf_size]; // illegal, bufsize is a variable
  // int ia[4 * 7 - 14];          // ok, array from expression
  // int ia[txt_size()];          // if txt size returns int, then illegal
  // chat st[11] = "fundamental"; // ok, 11 char string

  cout << ia << endl;
  return 0;
}
