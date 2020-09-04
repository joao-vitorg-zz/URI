#include <iostream>
using namespace std;

int main() {
  unsigned int qty, V;
  double valor;
  scanf("%lf", &valor);

  V = int(valor*100);

  cout << "NOTAS:" << endl;

  cout << V/10000 << " nota(s) de R$ 100.00" << endl;
  V %= 10000;
  cout << V/5000 << " nota(s) de R$ 50.00" << endl;
  V %= 5000;
  cout << V/2000 << " nota(s) de R$ 20.00" << endl;
  V %= 2000;
  cout << V/1000 << " nota(s) de R$ 10.00" << endl;
  V %= 1000;
  cout << V/500 << " nota(s) de R$ 5.00" << endl;
  V %= 500;
  cout << V/200 << " nota(s) de R$ 2.00" << endl;
  V %= 200;

  cout << "MOEDAS:" << endl;

  cout << V/100 << " moeda(s) de R$ 1.00" << endl;
  V %= 100;
  cout << V/50 << " moeda(s) de R$ 0.50" << endl;
  V %= 50;
  cout << V/25 << " moeda(s) de R$ 0.25" << endl;
  V %= 25;
  cout << V/10 << " moeda(s) de R$ 0.10" << endl;
  V %= 10;
  cout << V/5 << " moeda(s) de R$ 0.05" << endl;
  V %= 5;
  cout << V << " moeda(s) de R$ 0.01" << endl;

  return 0;
}