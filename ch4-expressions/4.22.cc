#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  int grade;
  cin >> grade;

  // conditional expression
  string finalgrade = (grade > 90) ? "high pass"
                                   : (grade <= 75 && grade > 60)
                                         ? "low pass"
                                         : (grade < 60) ? "fail" : "pass";

  // if-else
  if (grade > 90) {
    finalgrade = "high pass";
  } else if (grade > 75) {
    finalgrade = "pass";
  } else if (grade > 60) {
    finalgrade = "low pass";
  } else {
    finalgrade = "fail";
  }

  cout << finalgrade << endl;

  return 0;
}
