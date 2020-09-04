#include <iostream>
using namespace std;

int main() {
  unsigned int i, j, n, m, q, s, num, sum;
  bool flag;

  cin >> n >> m;
  unsigned int arr[n][m];

  for (i=0; i<n; i++) {
    for (j=0; j<m; j++) {
      cin >> num;
      arr[i][j] = num ? 1 : 0;

      if (i>0) arr[i][j] += arr[i-1][j];
      if (j>0) arr[i][j] += arr[i][j-1];
      if (i>0 && j>0) arr[i][j] -= arr[i-1][j-1];
    }
  }

  for (cin >> q; q--; ) {
    flag=false;
    cin >> s;

    for (i=s-1; i<n && !flag; i++) {
      for (j=s-1; j<m; j++) {
        sum = arr[i][j];

        if (i>=s) sum -= arr[i-s][j];
        if (j>=s) sum -= arr[i][j-s];
        if (i>=s && j>=s) sum += arr[i-s][j-s];

        if (sum==s*s) {
          flag=true;
          break;
        }
      }
    }

    cout << (flag ? "yes": "no") << endl;
  }

  return 0;
}
