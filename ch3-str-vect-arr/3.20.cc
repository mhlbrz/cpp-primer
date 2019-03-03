
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  vector<int> iv;
  int i = 0;

  // read ints into vector
  while (true) {
    cin >> i;
    if (i == 0) {
      break;
    }
    iv.push_back(i);
  }

  // sum of adjacent elements
  cout << "adjacent elems" << endl;
  for (decltype(iv.size()) ind = 0; ind < iv.size() - 1; ind++) {
    cout << "sum of ind= " << ind << "," << ind + 1 << " - "
         << "vals " << iv[ind] << "+" << iv[ind + 1] << "="
         << iv[ind] + iv[ind + 1] << endl;
  }

  cout << endl;

  // sun of 1,n -> 2,n-1 -> 3,n-2
  cout << "first last elems" << endl;
  for (decltype(iv.size()) ind = 0; ind < (iv.size()) / 2; ind++) {
    int a = iv[ind], b = iv[iv.size() - 1 - ind];
    cout << "ind=" << ind << ',' << iv.size() - 1 - ind << " - "
         << "vals=" << a << '+' << b << "=" << a + b << endl;
  }

  return 0;
}
