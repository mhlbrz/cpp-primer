#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  ifstream f;
  vector<string> text;
  string line;
  int nl = 0;

  // read text from "text" file
  f.open("./text");
  while (getline(f, line)) {
    ++nl;
    text.push_back(line);
  }

  // change first paragraph to uppercase
  for (auto l = text.begin(); l != text.end() && !l->empty(); ++l) {
    for (auto &c : *l) {
      c = toupper(c);
    }
  }

  // print result
  for (auto l : text) {
    cout << l << endl;
  }

  return 0;
}
