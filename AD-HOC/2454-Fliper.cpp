#include <iostream>
using namespace std;

int main() {
  unsigned short int p, r;

  scanf("%hu %hu", &p, &r);

  printf(p ? (r ? "A\n" : "B\n") : "C\n");

  return 0;
}