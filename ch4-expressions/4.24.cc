#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  int grade;
  cin >> grade;

  string finalgrade;

  // if-else left associative
  if (90 < grade) {
    finalgrade = "high pass";
  } else if (75 < grade) {
    finalgrade = "pass";
  } else if (60 < grade) {
    finalgrade = "low pass";
  } else {
    finalgrade = "fail";
  }

  cout << finalgrade << endl;

  return 0;
}
