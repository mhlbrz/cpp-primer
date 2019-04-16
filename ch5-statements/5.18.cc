#include <iostream>
#include <string>
#include <vector>

using namespace std;

int get_response() { return 0; }

int main(void) {

  // a. add curly braces for do{}
  do {
    int v1, v2;
    cout << "please enter two numbers" << endl;
    if (cin >> v1 >> v2) {
      cout << "Sum is " << v1 + v2 << endl;
    }
  } while (cin);

  // b. cannot decalre in do condition
  int ival;
  do {
    std::cout << "hello" << std::endl;
  } while ((ival = get_response()));

  // c. ival cannot be declared in do scope
  int ival1;
  do {
    ival1 = get_response();
  } while (ival1);

  return 0;
}
