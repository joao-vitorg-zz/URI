#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  short unsigned int i, n, x;

  cin >> n;

  for (i=0; i<n; i++) {
    cin >> x;

    cout << (unsigned long long) (pow(2,x)/12000) << "kg" << endl;
  }

  return 0;
}