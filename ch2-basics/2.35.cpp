#include <stdio.h>
int main(void) {
  const int i = 42;
  auto j = 1;                 // int
  const auto &k = i;          // const ref to int
  auto *p = &i;               // pointer to int
  const auto j2 = i, &k2 = i; // j2 const int, k2 is const ref to i

  printf("i=%d, k=%d, p=%p, *p=%d, j2=%d, k2=%d\n", j, k, p, *p, j2, k2);

  return 0;
}
