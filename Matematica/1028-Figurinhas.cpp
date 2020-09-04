#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  short unsigned int i, n, f1, f2;

  cin >> n;

  for (i=0; i< n; i++) {
    cin >> f1 >> f2;
    cout << __gcd(f1, f2) << endl;
  }

  return 0;
}