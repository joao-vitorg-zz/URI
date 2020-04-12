#include <iostream>
using namespace std;

int main() {
  unsigned int i, j, n, pt;
  char numero[10001];

  for (j=0; cin >> numero; j++) {
    for (i=0, pt=1; numero[i] && pt!=0; i++) {
      switch (numero[i]) {
        case '(': pt++; break;
        case ')': pt--; break;
      }
    }

    cout << (pt==1 ? "correct" : "incorrect") << endl;
  }

  return 0;
}