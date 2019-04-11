
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool find(string word) { return true; }

int main(void) {
  string s = "amon amarth";

  // iter must be initialized
  string::iterator iter = s.begin();
  while (iter != s.end()) {
    cout << *iter << endl;
    ++iter;
  }

  // status is defined and initialized inside loop
  // not visible outside ot the loop

  // while (bool status = find(s)) {
  bool status;
  while (status = find(s)) {
  }
  if (!status) {
  }

  return 0;
}
