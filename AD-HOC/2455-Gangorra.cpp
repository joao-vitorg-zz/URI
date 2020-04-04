#include <iostream>
using namespace std;

int main() {
  unsigned int l, r, p1, p2, c1, c2;

  cin >> p1 >> c1 >> p2 >> c2;

  r = p1*c1;
  l = p2*c2;

  cout << (r==l ? 0 : (r<l ? 1 : -1)) << endl;

  return 0;
}