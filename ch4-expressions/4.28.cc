#include <iostream>
#include <string>
#include <vector>

using namespace std;

int i;
int &ri = i;
int *pi = &i;

long li;
short si;

float f;

double d;
double *pd = &d;

char c = 'g';

int ia[4];

vector<int> vi = {1, 2, 3};
vector<int> vi2 = {1, 1, 1, 1, 1, 1, 1, 1};
vector<int> ev;

int main(void) {
  cout << "int=" << sizeof(i) << endl;
  cout << "ri=" << sizeof(ri) << endl;
  cout << "pi=" << sizeof(pi) << endl;
  cout << "li=" << sizeof(li) << endl;
  cout << "si=" << sizeof(si) << endl;
  cout << "f=" << sizeof(f) << endl;
  cout << "d=" << sizeof(d) << endl;
  cout << "pd=" << sizeof(pd) << endl;
  cout << "c=" << sizeof(c) << endl;
  cout << "ia=" << sizeof(ia) << endl;
  cout << "vi=" << sizeof(vi) << endl;
  cout << "vi2=" << sizeof(vi2) << endl;
  cout << "empt vect=" << sizeof(ev) << endl;

  return 0;
}
