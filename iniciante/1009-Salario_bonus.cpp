#include <iostream>
using namespace std;

int main() {
  char nome[10];
  double salario;
  double vendas;

  scanf("%s", nome);
  scanf("%lf", &salario);
  scanf("%lf", &vendas);

  printf("TOTAL = R$ %.2lf\n", salario + vendas*0.15);

  return 0;
}