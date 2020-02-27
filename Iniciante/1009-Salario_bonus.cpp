#include <iostream>
using namespace std;

int main() {
  char nome[10];
  double salario;
  double vendas;

  scanf("%s %lf %lf", nome, &salario, &vendas);

  printf("TOTAL = R$ %.2lf\n", salario + vendas*0.15);

  return 0;
}