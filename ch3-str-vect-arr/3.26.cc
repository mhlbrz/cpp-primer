#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  string text = "abcdefghijklmnop";
  char sought = 'd';

  auto beg = text.begin(), end = text.end();
  auto mid = text.begin() + (end - beg) / 2; // original midpoint
  while (mid != end && *mid != sought) {
    if (sought < *mid) // is the element we want in the first half?
      end = mid;       // if so, adjust the range to ignore the second half
    else               // the element we want is in the second half
      beg = mid + 1;   // start looking with the element just after mid
    mid = beg + (end - beg) / 2;
    /*
      what if mid = (beg + end) / 2 ?
      answer: we cannot add iterator to iterator, only integral type
      but we can subtract iter-iter = integral type
    */
  }
  cout << "found at posstion " << mid - text.begin() << endl;
  return 0;
}
