#include <iostream>
using namespace std;

int main() {
  unsigned int i, c, r, nc, n, k;

  cin >> nc;

  unsigned int m[nc];

  for (i=0; i < nc; i++) {
    cin >> n >> k;

    for (c=2, r=0; c<=n; c++) {
      r = (r+k) % c;
    }

    m[i] = r;
  }

  for (i=0; i < nc; i++) {
    printf("Case %u: %u\n", i+1, m[i]+1);
  }

  return 0;
}