#include <iostream>
using namespace std;

int main() {
  unsigned int qty, V;
  double valor;
  scanf("%lf", &valor);

  V = int(valor*100);

  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", V/10000);
  V %= 10000;
  printf("%d nota(s) de R$ 50.00\n", V/5000);
  V %= 5000;
  printf("%d nota(s) de R$ 20.00\n", V/2000);
  V %= 2000;
  printf("%d nota(s) de R$ 10.00\n", V/1000);
  V %= 1000;
  printf("%d nota(s) de R$ 5.00\n", V/500);
  V %= 500;
  printf("%d nota(s) de R$ 2.00\n", V/200);
  V %= 200;

  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n", V/100);
  V %= 100;
  printf("%d moeda(s) de R$ 0.50\n", V/50);
  V %= 50;
  printf("%d moeda(s) de R$ 0.25\n", V/25);
  V %= 25;
  printf("%d moeda(s) de R$ 0.10\n", V/10);
  V %= 10;
  printf("%d moeda(s) de R$ 0.05\n", V/5);
  V %= 5;
  printf("%d moeda(s) de R$ 0.01\n", V);

  return 0;
}