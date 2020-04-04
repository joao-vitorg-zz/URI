#include <iostream>
using namespace std;

unsigned long long int fat(unsigned int x) {
  return (x <= 1 ? 1 : x*fat(x-1));
}

int main() {
  unsigned int n, m;

  while (scanf("%u %u", &n, &m) != EOF) {
    cout << fat(n)+fat(m) << endl;
  }

  return 0;
}