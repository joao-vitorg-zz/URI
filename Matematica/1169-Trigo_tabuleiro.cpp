#include <iostream>
#include <cmath>

using namespace std;

int main() {
  short unsigned int i, n, x;

  scanf("%hu", &n);

  for (i=0; i<n; i++) {
    scanf("%hu", &x);

    printf("%llu kg\n", (unsigned long long) (pow(2, x) / 12000));
  }

  return 0;
}