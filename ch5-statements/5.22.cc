#include <iostream>

int count = 10;
int get_size() {
  --count;
  return count;
}

int main(void) {
  /*
   backward jump over an initialized variable definition is okay
    begin:
      int sz = get_size();
      if (sz <= 0) {
            goto begin;
      }

      rewrite with no goto
   */
  int sz = get_size();
  while (sz > 0) {
    std::cout << "in loop f=" << sz << std::endl;
    sz = get_size();
  }

  return 0;
}
