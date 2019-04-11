#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {

  int ng;
  string lg;
  vector<string> scores = {"F", "D", "C", "B", "A", "A++"};

  cin >> ng;

  lg = (ng < 50)
           ? scores[0]
           : (ng > 100) ? scores[scores.size() - 1] : scores[(ng - 50) / 10];

  cout << "grade " << ng << "=" << lg << endl;

  return 0;
}
