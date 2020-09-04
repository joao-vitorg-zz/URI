#include <iostream>
#include <cstring>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  unsigned int i, j, q;
  char n1[9], n2[9];

  while (true) {
    cin >> n1;
    cin >> n2;

    cout << n2;
    if (!n1[0] && !n2[0]) {
      break;
    }

    for (i=0, q=0; n1[i]; i++) {
      if ((n1[i] + n2[i]) >= 10) {
        q++;
        n1[i+1]++;
      }
    }

    if (q) {
      cout << q << " carry operations." << endl;
    } else {
      cout << "No carry operation." << endl;
    }
  }

  return 0;
}