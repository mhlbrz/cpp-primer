#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  vector<unsigned> scores(11, 0);
  unsigned grade;

  // grades clustering useing iterators

  while (cin >> grade) {
    ++*(scores.begin() + grade / 10);
  }

  for (unsigned i = 0; i < scores.size(); ++i) {
    cout << "# " << i * 10 << "-" << i * 10 + 10 << " count=" << scores[i]
         << endl;
  }

  return 0;
}
