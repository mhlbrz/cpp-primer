#include <iostream>

int main(void) {
  // difference between auto and decltype

  // non reference types are ok
  int i = 5;
  auto i1 = i;
  decltype(i) i2 = i;
  ++i1;
  i2 += 2;
  std::cout << i << "\t" << i1 << "\t" << i2 << std::endl;

  // auto cannot deduce const
  const int ci = 3;
  auto ci2 = ci;         // just int
  decltype(ci) ci3 = ci; // const int
  ++ci2;                 // ok ci2 is an int
  //++ci3; // not ok, ci3 is const int
  std::cout << ci << "\t" << ci2 << "\t" << ci3 << std::endl;

  // auto with reference use type under reference
  // decltype always reference or decltype((a)) also reference
  int ii = 10, iii = 20, &ri = ii;
  auto ri2 = ri;          // int 10
  ++ri2;                  // ri2 11, ii 10
  decltype(ri) ri3 = iii; // ri3 ref to iii
  ++iii;
  std::cout << ii << "\t" << ri << "\t" << ri2 << "\t" << ri3 << std::endl;
  // ii=10, ri=10, ri2=11, ri3=21

  return 0;
}
