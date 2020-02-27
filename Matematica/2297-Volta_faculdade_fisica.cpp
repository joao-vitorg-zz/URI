#include <iostream>
using namespace std;

int main() {
  int v;
  unsigned int t;

  while (scanf("%d %u", &v, &t) != EOF) {
    printf("%d\n", 2*v*t);
  }
}