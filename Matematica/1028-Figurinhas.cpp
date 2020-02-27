#include <iostream>
using namespace std;

int mdc(int f1, int f2) {
  int m = min(f1, f2);
  int mod = max(f1, f2) % m;
  
  return (mod ? mdc(m, mod) : m);
}

int main() {
  unsigned int i, n, f1, f2;

  scanf("%u", &n);

  for (i=0; i< n; i++) {
    scanf("%u %u", &f1, &f2);

    printf("%u\n",  mdc(f1, f2));
  }

  return 0;
}