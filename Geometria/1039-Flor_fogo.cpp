#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int r1, x1, y1, r2, x2, y2;
  double distance;

  while (scanf("%d %d %d %d %d %d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF) {
    distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    printf("%s\n", (r1 >= distance+r2 ? "RICO" : "MORTO"));
  }

  return 0;
}