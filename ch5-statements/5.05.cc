#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {

  int ng;
  string lg;
  vector<string> scores = {"F", "D", "C", "B", "A", "A++"};

  cin >> ng;

  if (ng < 50) {
    lg = scores[0];
  } else if (ng > 100) {
    cout << "bad input";
    return 0;
  } else {
    lg = scores[(ng - 50) / 10];
  }

  cout << "grade " << ng << "=" << lg << endl;

  return 0;
}
