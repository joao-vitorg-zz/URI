#include <iostream>
using namespace std;

int main() {
  unsigned int qty, h;
  double salario;

  scanf("%u %u %lf", &qty, &h, &salario);

  printf("NUMBER = %u\n", qty);
  printf("SALARY = U$ %.2lf\n", h*salario);

  return 0;
}