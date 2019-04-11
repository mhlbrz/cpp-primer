#include <iostream>
#include <string>
#include <vector>

using namespace std;

int get_value() { return 1; }

int main(void) {
  int ival1 = 1, ival2 = 2;
  /*
   if (ival1 != ival2)
     ival1 = ival2
   else ival1 = ival2 = 0;
   */
  if (ival1 != ival2)
    ival1 = ival2;
  else
    ival1 = ival2 = 0;

  cout << ival1 << ' ' << ival2 << endl;

  int ival = 1, minval = 0, occurs;

  // add curly braces
  if (ival < minval) {
    minval = ival;
    occurs = 1;
  };

  /*
    if (int ival = get_value())
      cout << "ival = " << ival << endl;
    if (!ival)
      cout << "ival = 0\n";
   */
  // ival should be declared outside conditional expression
  if ((ival = get_value()))
    cout << "ival = " << ival << endl;
  if (!ival)
    cout << "ival = 0\n" << endl;

  /*
     if (ival = 0)
        ival = get_value()
  */
  if (ival == 0)
    ival = get_value();

  return 0;
}
