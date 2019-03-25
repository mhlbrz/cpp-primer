#include <stdio.h>

int main(void) {
  int i = 0, *p = 0; // second if will fail with nil pointer

  if (p) {
    printf("pointer not nil\n");
  } else {
    printf("nil pointer\n");
  }
  if (*p) {
    printf("value under poiner > 0\n");
  } else {
    printf("value on pointer 0\n");
  }

  return 0;
}
