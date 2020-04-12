#include <iostream>
#include <algorithm>

#define F first
#define S second

using namespace std;

int main() {
  pair <int, int> N, D, final;
  unsigned int n, mdc;
  char op, aux;

  for (cin >> n; n--;) {
    cin >> N.F >> aux >> D.F >> op >> N.S >> aux >> D.S;

    switch (op) {
      case '+':
        final = {(N.F*D.S)+(N.S*D.F), D.F*D.S};
        break;
      case '-':
        final = {(N.F*D.S)-(N.S*D.F), D.F*D.S};
        break;
      case '*':
        final = {N.F*N.S, D.F*D.S};
        break;
      case '/':
        final = {N.F*D.S, D.F*N.S};
        break;
    }

    mdc = abs(__gcd(final.F, final.S));
    printf("%d/%d = %d/%d\n", final.F, final.S, final.F/mdc, final.S/mdc);
  }

  return 0;
}