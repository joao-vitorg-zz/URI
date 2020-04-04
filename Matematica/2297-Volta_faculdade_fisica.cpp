#include <iostream>
using namespace std;

int main() {
  int v;
  unsigned int t;

  while (scanf("%d %u", &v, &t) != EOF) {
    cout << 2*v*t << endl;
  }
}