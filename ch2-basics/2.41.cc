#include <iostream>

struct S {
  int id;
  int val;
};

S s1, s2, *sptr;

int main(void) {
  sptr = &s2;

  std::cout << "enter s1" << std::endl;
  std::cin >> s1.id >> s1.val;

  std::cout << "enter s2" << std::endl;
  std::cin >> sptr->id >> sptr->val;

  if (s1.id == s2.id) {
    std::cout << "same id" << std::endl;
    std::cout << "total val=" << s1.val + sptr->val << std::endl;
  } else if (s1.id != s2.id) {
    std::cerr << "Id's are not same";
    return -1;
  }

  return 0;
}
