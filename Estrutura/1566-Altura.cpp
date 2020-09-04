#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  unsigned int i, j, n, h, aux, arr[231];

  for (cin >> n; n--; ) {
    fill(arr, arr+231, 0);
    bool flag=false;

    for (cin >> h; h--; ) {
      cin >> aux;

      arr[aux]++;
    }

    for (i=0; i<231; i++) {
      for (j=0; j<arr[i]; j++) {
        if (flag) cout << ' ';
        else flag=true;

        cout << i;
      }
    }

    cout << endl;
  }

  return 0;
}
