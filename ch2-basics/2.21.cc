#include <stdio.h>

int main(void) {
  int i = 0;
  // double *dp = &i; // error type missmatch
  // int *ip = i; // pointer should use reference lvalue
  int *p = &i; // ok

  printf("i=%d, p=%p\n", i, p);

  return 0;
}
