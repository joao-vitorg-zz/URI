#include <iostream>
using namespace std;

int main() {
  unsigned int a, b, c, d, e;

  scanf("%u %u %u %u %u", &a, &b, &c, &d, &e);

  printf("%u\n", (a*300 + b*1500 + c*600 + d*1000 + e*150)+225);

  return 0;
}