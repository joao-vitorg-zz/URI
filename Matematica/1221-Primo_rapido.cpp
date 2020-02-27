#include <iostream>
#include <cmath>

using namespace std;

int main() {
  short unsigned int i, j, n, mod, aux;
  unsigned long long int x;

  scanf("%hu", &n);

  for (i=0; i<n; i++) {
    scanf("%llu", &x);
    mod = x%6;

    if (x==2 || x==3) {
      printf("Prime\n");
    }
    else if (mod==5 || mod==1) {
      mod = int(sqrt(x));

      for (j=2, aux=1; j<=mod; j++) {
        if (x%j == 0) {
          aux = 0;
          break;
        }
      }

      printf(aux ? "Prime\n" : "Not Prime\n");
    }
    else {
      printf("Not Prime\n");
    }
  }

  return 0;
}