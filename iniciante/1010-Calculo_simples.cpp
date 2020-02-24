#include <iostream>
using namespace std;

int main() {
  unsigned int codigo, qty, qty2;
  double preco, preco2;

  scanf("%d %d %lf", &codigo, &qty, &preco);
  scanf("%d %d %lf", &codigo, &qty2, &preco2);

  printf("VALOR A PAGAR: R$ %.2lf\n", qty*preco + qty2*preco2);

  return 0;
}