#include <iostream>

struct Sales_data {
  int id;
  std::string name;
  unsigned count = 0;
  double revenue = 0.0;
};

Sales_data sd1, sd2, *sdptr;

int main(void) {

  sd1.id = 1;
  sd2.id = 2;

  sdptr = &sd2;
  sdptr->id = 10;

  Sales_data sd3 = sd1;
  sd3.id = 11;

  std::cout << sd1.id << " " << sd3.id << std::endl;
  std::cout << sd2.id << " " << sdptr->id << std::endl;

  return 0;
}
