#include <stdio.h>

int main(void) {
  int i = 42, *ptri = &i;

  printf("i=%d, ptri=%p\n", i, ptri);

  *ptri = 10;

  printf("i=%d, ptri=%p\n", i, ptri);

  ptri = 0;

  printf("i=%d, ptri=%p\n", i, ptri);

  *ptri = 10; // error

  return 0;
}
