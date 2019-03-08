#include <iostream>

using namespace std;

int main(void) {
  const char ca[] = {'h', 'e', 'l', 'l', 'o'};
  const char *cp = ca;

  // loop until *cp is invalid pointer
  while (*cp) {
    cout << *cp << endl;
    ++cp;
  }

  return 0;
}
