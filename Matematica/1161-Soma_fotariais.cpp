#include <iostream>
using namespace std;

unsigned long long int fat(unsigned int x) {
  return (x <= 1 ? 1 : x*fat(x-1));
}

int main() {
  unsigned int n, m;

  while (scanf("%u %u", &n, &m) != EOF) {
    printf("%llu\n", fat(n)+fat(m));
  }

  return 0;
}