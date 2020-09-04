#include <iostream>
#include <map>

using namespace std;

int main() {
  unsigned int i, n, m, p, qty;
  double total;
  string name;

  cout.precision(2);
  cout << fixed;

  for (cin >> n; n--; ) {
    map <string, double> frutas;

    for (cin >> m; m--; ) {
      cin >> name;
      cin >> frutas[name];
    }

    cin >> p;

    for (total=0; p--; ) {
      cin >> name >> qty;

      total += frutas[name]*qty;
    }

    cout << "R$ " << total << endl;
  }

  return 0;
}