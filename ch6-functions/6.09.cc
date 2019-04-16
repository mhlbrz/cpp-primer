#include "6.08.h"

int fact(int i) {
  int res = 1;
  while (i > 0) {
    res *= --i;
  }
  return res;
}
