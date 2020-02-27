#include <iostream>
using namespace std;

int main() {
  unsigned int i, c, r, nc, n, k;

  scanf("%u", &nc);

  unsigned int m[nc];

  for (i=0; i < nc; i++) {
    scanf("%u %u", &n, &k);
    r = 0;

    for (c=2; c <= n; c++) {
      r = (r + k) % c;
    }

    m[i] = r;
  }

  for (i=0; i < nc; i++) {
    printf("Case %u: %u\n", i+1, m[i]+1);
  }

  return 0;
}