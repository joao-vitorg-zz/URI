#include <iostream>
using namespace std;

int main() {
  unsigned int qty, h;
  double salario;

  scanf("%d", &qty);
  scanf("%d", &h);
  scanf("%lf", &salario);

  printf("NUMBER = %d\n", qty);
  printf("SALARY = U$ %.2lf\n", h*salario);

  return 0;
}