#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> vi = {1, 2, 3, 5, 6, 7, 8, 9};

int main(void) {
  for (size_t i = 0; i < vi.size(); i++) {
    if (i % 2)
      vi[i] *= 2;
  }

  for (auto i : vi) {
    cout << i << endl;
  }
  return 0;
}
