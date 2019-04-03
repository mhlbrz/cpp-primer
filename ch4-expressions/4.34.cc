#include <iostream>
#include <string>
#include <vector>

using namespace std;

float fval = 3.14;
int ival = 10;

int main(void) {
  // convert to int or usigned int
  // check if value is non zero
  if (fval) {
  }

  auto dval = fval + ival;
  // covert to higher precision - i.e. float
  cout << "dval=" << dval << endl;
  return 0;
}
