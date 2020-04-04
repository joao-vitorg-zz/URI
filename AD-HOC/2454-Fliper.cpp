#include <iostream>
using namespace std;

int main() {
  unsigned short int p, r;

  cin >> p >> r;

  cout << (p ? (r ? 'A' : 'B') : 'C') << endl;
  return 0;
}