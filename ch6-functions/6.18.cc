#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct matrix {
  int m, n;
  matrix(int x, int y) {
    m = x;
    n = y;
  }
};

bool matrix_is_equal(matrix &m1, matrix &m2) {
  return m1.m == m2.m && m1.n == m2.n;
}

vector<int>::iterator change_val(int i, vector<int>::iterator iter) {
  *iter = i;
  return iter;
}

int main(void) {

  matrix m1 = matrix(10, 20);
  matrix m2 = matrix(10, 20);
  matrix m3 = matrix(20, 10);

  std::cout << "m1==m2 : " << matrix_is_equal(m1, m2) << std::endl;
  std::cout << "m2==m3 : " << matrix_is_equal(m2, m3) << std::endl;

  vector<int> vi = {1, 2, 3, 4, 5};
  vector<int>::iterator iter = vi.begin() + 2;
  change_val(20, iter);

  for (auto i : vi) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
