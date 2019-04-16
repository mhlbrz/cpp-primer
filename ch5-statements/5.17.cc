#include <iostream>
#include <string>
#include <vector>

using namespace std;

using vi = std::vector<int>;

// is v1 or v2 is a prefix another one
bool comp(vi v1, vi v2) {
  if (v1 == v2) {
    std::cout << "v1 = v2" << std::endl;
    return true;
  }
  vi *shortVecP = &v1;
  vi *longVecP = &v2;
  if (v1.size() > v2.size()) {
    shortVecP = &v2;
    longVecP = &v1;
  }
  vi tmp(longVecP->begin(), (longVecP->begin() + shortVecP->size()));
  std::cout << "short len = " << shortVecP->size() << std::endl;
  return tmp == *shortVecP;
}

// is v1 or v2 is a prefix another one
bool cmp2(vi v1, vi v2) {
  auto slen = v1.size() > v2.size() ? v2.size() : v1.size();
  bool eq = true;
  for (decltype(v1.size()) i = 0; i != slen; ++i) {
    if (v1[i] != v2[i]) {
      eq = false;
      break;
    }
  }
  return eq;
}

int main(void) {
  std::vector<int> v1 = {0, 1, 1, 2};
  std::vector<int> v2 = {0, 1, 1, 2, 3, 5, 8};
  std::vector<int> v3 = {1, 1, 1, 2, 3, 5, 8};
  std::vector<int> v4 = {0, 1, 1};

  bool ans;

  ans = cmp2(v1, v2);
  std::cout << "v1==v2 = " << ans << std::endl;
  ans = cmp2(v1, v3);
  std::cout << "v1==v3 = " << ans << std::endl;
  ans = cmp2(v1, v4);
  std::cout << "v1==v4 = " << ans << std::endl;

  return 0;
}
