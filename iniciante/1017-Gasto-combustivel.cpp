#include <iostream>
using namespace std;

int main() {
  int h, km;

  scanf("%d", &h);
  scanf("%d", &km);

  printf("%.3f\n", (km/12.0) * h);

  return 0;
}