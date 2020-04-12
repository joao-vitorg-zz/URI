#include <iostream>
using namespace std;

int main() {
  unsigned int n, q, p;
  double sum=0, prices[] = {1.5, 2.5, 3.5, 4.5, 5.5};

  cout.precision(2);
  cout << fixed;

  for (cin >> n; n--; ) {
    cin >> p >> q;
    sum += prices[p-1001]*q;
  }

  cout << sum << endl;

  return 0;
}