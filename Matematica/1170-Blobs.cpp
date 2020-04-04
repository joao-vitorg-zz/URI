#include <iostream>
using namespace std;

int calc(double x, int sum=0) {
  return (x <= 1 ? sum : calc(x/2, sum+1));
}

int main() {
  int i, n;
  double c;

  cin >> n;

  for (i=0; i < n; i++) {
    cin >> c;

    cout << calc(c) << " dias" << endl;
  }

  return 0;
}