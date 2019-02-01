#include <stdio.h>

int main(void) {
  int i = 0, &r = i;
  auto a = r; // int

  const int ci = i, &cr = ci;

  auto b = ci;  // int value of ci
  auto c = cr;  // int value of ci
  auto d = &i;  // ref to int i
  auto e = &ci; // ref to const int
  auto &g = ci; // ref to int
  // auto &h = 42; // error: can bind plain reference to a literal

  printf("i=%d, a=%d, b=%d, c=%d, d=%d, e=%d, g=%d\n", i, a, b, c, *d, *e, g);

  a = 42; // i = 0, a = 42
  b = 42; // b = 42, ci is a const
  c = 42; // c = 42, cr is const ref to ci

  // d = 42; // error, d is a reference not literal
  *d = 42; // correct, now i = 42

  // e = 42; // error, e is a ref to const int

  // g = 42; // g is a const ref to int

  printf("i=%d, a=%d, b=%d, c=%d, d=%d, e=%d, g=%d\n", i, a, b, c, *d, *e, g);

  return 0;
}
