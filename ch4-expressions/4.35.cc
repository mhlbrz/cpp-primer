#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {

  char cval;
  float fval;
  int ival;
  double dval;
  unsigned int ui;

  cval = 'a' + 3; // char promoted to an int and incremented by 3
  cout << cval << endl;

  ui = 10;
  ival = 5;

  fval = ui - ival * 1.0;
  // ival*1.0 converted to float, then ui converted to float
  cout << fval << endl;

  fval = 5.53;
  dval = ui * fval; // ui converted to float -> conv to double
  cout << dval << endl;

  ival = 40;
  fval = 3.3;
  dval = 4.4;
  cval = ival + fval + dval;
  // fval and dval converted to int -> promoted to char
  cout << cval << endl;

  return 0;
}
