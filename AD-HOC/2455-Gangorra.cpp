#include <iostream>
using namespace std;

int main() {
  unsigned int l, r, p1, p2, c1, c2;

  scanf("%u %u %u %u", &p1, &c1, &p2, &c2);

  r = p1*c1;
  l = p2*c2;

  printf("%u\n", ((r == l) ? 0 : ((r < l) ? 1 : -1)));

  return 0;
}