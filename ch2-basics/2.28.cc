#include <stdio.h>

int main(void) {
  int ri = 10, ri2 = 11;
  int *pi = &ri;
  // i is an int, and cp is const pointer to int
  int i, *const cp = pi; // cp should be initialized
  i = 1;
  pi = &ri2;
  printf("ri=%d, pi=%p, cp=%p, i=%d\n", ri, pi, cp, i);
  printf("cp=%p, *cp=%d\n", cp, *cp);

  int i1 = 101, i2 = 102;
  // p1 is a pointer and p2 is a const pointer, p1 can be re-assigned
  int *p1, *const p2 = &i2; // p2 should be initialized
  p1 = &i1;
  printf("p1=%p, *p1=%d, p2=%p, *p2=%d\n", p1, *p1, p2, *p2);

  // declare const int ic and reference to ic
  const int ic = 1, &r = ic; // ic should be initialized
  printf("r=%d\n", r);

  // p3 is const int ptr to const int, const int should be declared before
  const int ic3 = 33;
  const int *const p3 = &ic3;
  printf("%d\n", *p3);

  // ptr to const int
  const int ic4 = 44;
  const int *p4; //= &ic3; // can be initialized later
  // printf("%d\n", *p4);
  p4 = &ic4; // p4 is non-const can point to another const int
  printf("%d\n", *p4);

  return 0;
}
