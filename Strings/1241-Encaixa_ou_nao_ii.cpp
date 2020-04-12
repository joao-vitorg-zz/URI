#include <iostream>
using namespace std;

int main() {
  string a, b;
  int n;

  cin >> n;

  while (n--) {
    cin >> a >> b;

    if (a.size()>=b.size() && a.rfind(b)==a.size()-b.size()) {
      cout << "encaixa" << endl;
    }
    else {
      cout << "nao encaixa" << endl;
    }
  }

  return 0;
}