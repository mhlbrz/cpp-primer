// arrays
#include <iostream>

using namespace std;

// which of following are illegal:
int txt_size() { return 10; }
// unsigned buf_size = 1024;
// int ia1[buf_size]; // illegal, bufsize is a variable. But ok inside function

int ia2[4 * 7 - 14]; // ok, array from expression
// int ia3[txt_size()]; // if txt size returns int, then illegal. ok inside
// function

// char st[11] = "fundamental";    // too long, string initializer has 11
// chars and \0 ended (12 in total)

char st[12] = "fundamental";

int main(void) {
  // cout << ia1 << endl;
  cout << ia2 << endl;
  // cout << ia3 << endl;
  cout << st << endl;
  return 0;
}
