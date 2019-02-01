#include <iostream>

int main(void) {

  // int i = -1, &r = 0; // illegal &r should point to an object not tmp int

  const int i = -1, &r = 0;
  std::cout << "const int i=-1, &r=0;" << i << "\t" << &r << std::endl;

  int x = 200;

  int i1 = 1;
  int *const p2 = &i1; // p2 is const pointer to int

  // p2 = &x; // wrong, p2 is const
  std::cout << "int *const p2 = &i1; " << std::endl;
  std::cout << "  *p2= " << *p2 << "\t"
            << "i1= " << i1 << std::endl;
  i1 = x; // ok, p2 is const pointer to variable int
  std::cout << "  new value for int p2 points to " << *p2 << std::endl;

  const int i2 = 0;
  // only if i2 is const int. p3 is const int pointer to const int
  const int *const p3 = &i2;
  std::cout << p3 << std::endl;
  // p3 = &i1; // wrong, p3 is const

  // only if i2 is const int. Assing to int pointer p1 const int i2
  const int *p1 = &i2;
  std::cout << p1 << std::endl;
  p1 = &i1; // p1 is non-const, therefore can be re-assigned
  std::cout << p1 << std::endl;

  // const int &const r2 = i3; // wrong, &const illegal

  // int y = 11;
  const int y = 22;

  // i3 and r3 are int consts
  const int i3 = y, &r3 = y;
  std::cout << "i3=" << i3 << "\tr3=" << r3 << std::endl;

  return 0;
}
