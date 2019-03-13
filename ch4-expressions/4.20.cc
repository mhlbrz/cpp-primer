#include <iostream>
#include <string>
#include <vector>

using namespace std;

// which is legal

vector<string> vs = {"hello", "", "bye", "cruel"};

int main(void) {
  vector<string>::iterator iter = vs.begin();
  // *iter++ rvalue, points to current elemnt of iter, then go to next elem
  std::cout << *iter++ << std::endl;

  // (*iter)++ invalid, cannot increment string

  // *iter.empty() - not ok, *iter has no member empty

  // iter->empty() - ok, =(*iter).empty()
  cout << iter->length() << " " << iter->empty() << endl;

  // ++*iter; not ok, increment string

  // iter++->empty(); ok, check string length of current elem iter points to

  // should be true (1), poins to second string in vector
  cout << iter++->empty() << endl;

  return 0;
}
