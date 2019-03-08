// print multidimentional array
#include <iostream>

using namespace std;

int main(void) {
  int ia[3][4] = {{11, 12, 13, 14}, {21, 22, 23, 24}, {31, 32, 33, 34}};

  // prints elemts of ia using different methods

  // range for loop
  for (int(&row)[4] : ia) {
    for (int &col : row) {
      std::cout << "range for: " << col << std::endl;
    }
  }

  cout << " -------------------------------- " << endl;

  // for loop subscript
  constexpr size_t rowCnt = 3, colCnt = 4;
  for (size_t i = 0; i < rowCnt; ++i) {
    for (size_t j = 0; j < colCnt; ++j) {
      cout << "subscript: " << ia[i][j] << endl;
    }
  }

  cout << " -------------------------------- " << endl;

  // for loop pointers
  for (int(*row)[4] = ia; row != ia + 3; ++row) {
    for (int *col = *row; col != *row + 4; ++col) {
      cout << "pointer: " << *col << endl;
    }
  }

  cout << " -------------------------------- " << endl;

  // using type alias for the type loop variables
  using int_arr = int[4];

  for (int_arr *row = ia; row != ia + 3; ++row) {
    for (int *col = *row; col != *row + 4; ++col) {
      cout << "type alias: " << *col << endl;
    }
  }

  cout << " -------------------------------- " << endl;

  // using auto
  for (auto &row : ia) {
    for (auto col : row) {
      cout << "auto: " << col << endl;
    }
  }

  return 0;
}
