#include <iostream>
using namespace std;

int calc(double x, int sum=0) {
  return (x <= 1 ? sum : calc(x/2, sum+1));
}

int main() {
  int i, n;
  double c;

  scanf("%u", &n);

  for (i=0; i < n; i++) {
    scanf("%lf", &c);

    printf("%d dias\n", calc(c));
  }

  return 0;
}