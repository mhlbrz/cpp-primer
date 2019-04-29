#include <string>

using namespace std;

const string s = "str1";
string s1 = "str2";

// is_empty is ambigious with std namespace
// if param is not const then it cannot accept const argument
bool empty_str(const string &s) { return s.empty(); }

int main(void) {
  empty_str(s);
  empty_str(s1);
  return 0;
}
