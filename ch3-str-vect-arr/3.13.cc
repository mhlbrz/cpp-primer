#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  // how many elements in each

  vector<int> v1;     // no elements, empty
  vector<int> v2(10); // 10 integers with default value (0)
  std::cout << "v2 size is " << v2.size() << " v2[0]=" << v2[0] << std::endl;
  vector<int> v3(10, 42); // 10 integers with value = 42
  std::cout << "v3 size is " << v3.size() << " v3[0]=" << v3[0] << std::endl;
  vector<int> v4{10}; // 1 item with value 10
  std::cout << "v4 size is " << v4.size() << " v4[0]=" << v4[0] << std::endl;
  vector<int> v5{10, 42}; // 2 items with values = 10, 42
  std::cout << "v5 values = " << v5[0] << ',' << v5[1] << std::endl;
  vector<string> v6{10}; // 10 empty strings
  std::cout << "v6 size=" << v6.size() << " v6[0]=" << v6[0] << std::endl;
  vector<string> v7{10, "hi"}; // 10 strings with value = "hi"
  std::cout << "v7 size=" << v7.size() << " v7[0]=" << v7[0] << std::endl;

  return 0;
}
