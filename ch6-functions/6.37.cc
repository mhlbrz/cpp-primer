#include <iostream>
#include <string>
#include <vector>

using namespace std;

// return array, 3 ways

// type alias

using ar = string[10];

ar ta = {"a", "b", "c"};

ar *funcTypeAlias() { return &ta; }

// trailing return
string strar[10] = {"a", "b", "c"};
auto funcTrailing() -> string (*)[10] { return &strar; }

// decltype
decltype(strar) *funcDecltype() { return &strar; }

int main(void) { return 0; }
