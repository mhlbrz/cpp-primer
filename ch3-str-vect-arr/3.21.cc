#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  vector<int> v1;              // no elements, empty
  vector<int> v2(10);          // 10 integers with default value (0)
  vector<int> v3(10, 42);      // 10 integers with value = 42
  vector<int> v4{10};          // 1 item with value 10
  vector<int> v5{10, 42};      // 2 items with values = 10, 42
  vector<string> v7{10, "hi"}; // 10 strings with value = "hi"

  // output vector results using iterators
  int g = 0;
  for (auto i = v2.begin(); i != v2.end(); ++i) {
    std::cout << "v2: " << ++g << "\t" << *i << std::endl;
  }

  cout << string(50, '-') << endl;
  g = 0;
  for (auto i = v3.begin(); i != v3.end(); ++i) {
    std::cout << "v3: " << ++g << "\t" << *i << std::endl;
  }

  cout << string(50, '-') << endl;
  g = 0;
  for (auto i = v4.begin(); i != v4.end(); ++i) {
    std::cout << "v4: " << ++g << "\t" << *i << std::endl;
  }

  cout << string(50, '-') << endl;
  g = 0;
  for (auto i = v5.begin(); i != v5.end(); ++i) {
    std::cout << "v5: " << ++g << "\t" << *i << std::endl;
  }

  cout << string(50, '-') << endl;
  g = 0;
  for (auto i = v7.begin(); i != v7.end(); ++i) {
    std::cout << "v7: " << ++g << "\t" << *i << std::endl;
  }

  return 0;
}
