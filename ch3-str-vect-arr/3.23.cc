#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  vector<int> iv{4, 12, 534, 132, 346, 723, 123, 67, 5, 4};

  // make current value of elemnt twice
  for (auto i = iv.begin(); i != iv.end(); ++i) {
    *i *= 2;
  }

  // print result
  for (auto i : iv) {
    cout << i << endl;
  }
}
