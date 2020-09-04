#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(int a, int b) {
  if (a&1==b&1) {
    if (a&1) {
      return a>b;
    }
    return a<b;
  }
  return b&1;
}

int main() {
  unsigned int n, numero;
  vector <unsigned int> numeros;

  for (cin >> n; n--;) {
    cin >> numero;
    numeros.push_back(numero);
  }

  sort(numeros.begin(), numeros.end(), compare);

  for (auto N : numeros) {
    cout << N << endl;
  }

  return 0;
}