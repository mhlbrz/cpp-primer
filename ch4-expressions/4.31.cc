#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  vector<int> ivec = {10, 20, 30, 40, 50};
  vector<int>::size_type cnt = ivec.size();

  // using prefix or postfix for incremeting loop variables
  // seems doesnt have an effect, but postfix might use more space due
  // to tmp assignment
  for (vector<int>::size_type ix = 0; ix < ivec.size(); ix++, cnt--) {
    ivec[ix] = cnt;
  }
  for (auto i : ivec) {
    cout << i << endl;
  }
  return 0;
}
