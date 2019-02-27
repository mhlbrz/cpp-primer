#include "Sales_data.h"
#include <iostream>

Sales_data s1, s2;

int main(void) {
  s1.iName = "item1";
  s2.iName = "item2";

  std::cout << s1.iName << " " << s2.iName << std::endl;
  return 0;
}
