#include <iostream>
using namespace std;

int main() {
  unsigned int i, j, k, n, x, y, num, from, to;
  unsigned int arr[101];

  for (j=0; cin >> n; j++) {
    fill(arr, arr+101, 0);

    for (i=0; i<n; i++) {
      cin >> x >> y;

      for (k=x; k<=y; k++) {
        arr[k]++;
      }
    }

    cin >> num;

    if (arr[num]) {
      for (i=1, from=0; i<num; i++) {
        from += arr[i];
      }

      to = from + arr[num] - 1;

      cout << num <<" found from " << from << " to " << to << endl;
    } else {
      cout << num << " not found" << endl;
    }
  }

  return 0;
}