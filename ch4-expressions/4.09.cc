#include <iostream>

/*
explain:
const char *cp = "hello world";
if (cp && *cp)

if (cp) - checks pointers validity
if (*cp) - checks null string(empty)
*/

int main(void) {
  const char *np = nullptr;
  if (!np) {
    std::cout << "null pointer" << std::endl;
  }

  const char *es = "";
  if (!*es) {
    std::cout << "empty string" << std::endl;
  }

  const char *cp = "hello world";
  if (cp && *cp) {
    std::cout << "valid pointer and non empty string" << std::endl;
  }

  return 0;
}
