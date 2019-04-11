#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  int i;
  double d;
  const string *ps;
  char *pc;
  void *pv;

  // remove constness first, then cast to void pointer
  pv = static_cast<void *>(const_cast<string *>(ps));

  // cast char to int
  i = static_cast<int>(*pc);

  // cast reference of the double to void pointer
  pv = static_cast<void *>(&d);

  // cast void pointer to the char pointer
  pc = static_cast<char *>(pv);

  return 0;
}
