
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {

  // initialize vector with 10 elements

  // 1. size and default value in parenthesis
  cout << "vect(10,42):" << endl;
  vector<int> iv1(10, 42);
  for (auto i : iv1) {
    cout << i << " ";
  }
  cout << endl;

  // 2. add 10 elements in { }
  cout << "vect {42. ..., 42}" << endl;
  vector<int> iv2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
  for (auto i : iv1) {
    cout << i << " ";
  }
  cout << endl;

  // 3. push_back
  cout << "push_back" << endl;
  vector<int> iv3;
  for (int i = 0; i < 10; i++) {
    iv3.push_back(i);
  }
  for (auto i : iv1) {
    cout << i << " ";
  }
}
