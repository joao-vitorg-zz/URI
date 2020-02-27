#include <iostream>
using namespace std;

int main() {
  unsigned int idade;

  scanf("%u", &idade);

  printf("%u ano(s)\n", idade/365);
  idade %= 365;
  printf("%u mes(es)\n", idade/30);
  idade %= 30;
  printf("%u dia(s)\n", idade);

  return 0;
}