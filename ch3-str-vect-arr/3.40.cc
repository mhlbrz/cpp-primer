#include <cstring>
#include <iostream>

using namespace std;

int main(void) {
  const char c1[] = "hello", c2[] = "world";

  // define array that will hold ca1 and c2
  int csize = (end(c1) - begin(c1)) + (end(c2) - begin(c2));
  cout << "ca3 size = " << csize << endl;

  char c3[csize];

  cout << "c3 = " << c3 << endl;

  strcpy(c3, c1);
  strcat(c3, " ");
  strcat(c3, c2);

  cout << "c3 = " << c3 << endl;

  return 0;
}
