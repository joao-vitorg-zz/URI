#include <iostream>
using namespace std;

int main() {
  int h, km;

  scanf("%d %d", &h, &km);

  printf("%.3f\n", (km/12.0) * h);

  return 0;
}