#include <stdio.h>

int main(void) {
  int i = 0, &r1 = i;
  double d = 0, &r2 = d;

  r2 = 3.14159; // assign new value to d
  printf("i=%d, r1=%d, d=%f, r2=%f\n", i, r1, d, r2);

  r2 = r1; // assign i to d (0)
  printf("i=%d, r1=%d, d=%f, r2=%f\n", i, r1, d, r2);

  i = r2; // assign i to i
  printf("i=%d, r1=%d, d=%f, r2=%f\n", i, r1, d, r2);

  r1 = d; // assign value of d to i (0)
  printf("i=%d, r1=%d, d=%f, r2=%f\n", i, r1, d, r2);

  return 0;
}
