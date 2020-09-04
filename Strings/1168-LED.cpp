#include <iostream>
using namespace std;

int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main() {
  unsigned long long int sum;
  short unsigned int i, j, n;
  char num[101];

  cin >> n;

  for (i=0; i < n; i++) {
    cin >> num;

    for (j=0, sum=0; num[j]; j++) {
      sum += leds[num[j]-48];
    }

    cout << sum << " leds" << endl;
  }

  return 0;
}