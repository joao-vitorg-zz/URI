#include <iostream>
using namespace std;

int main() {
  unsigned int i, t, arr[2000]={0}, n;

  for (scanf("%u", &t); t--; ) {
    scanf("%u", &n);
    arr[n-1]++;
  }

  for (i=0; i<2000; i++) {
    if (arr[i]) {
      printf("%u aparece %u vez(es)\n", i+1, arr[i]);
    }
  }

  return 0;
}
