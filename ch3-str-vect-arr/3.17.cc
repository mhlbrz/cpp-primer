#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {

  vector<string> sv;
  string s;

  // read words from cin and push to the vector
  while (true) {
    cin >> s;
    if (s == "0") {
      break;
    }
    sv.push_back(s);
  }

  // change each word in string vector to upper case
  for (auto &str : sv) {
    for (auto &c : str) {
      c = toupper(c);
    }
  }

  // print output 8 words per line
  for (decltype(sv.size()) i = 0; i < sv.size(); i++) {
    if (i != 0 && i % 8 == 0) {
      cout << endl;
    }
    cout << sv[i];
  }

  return 0;
}
