#include <iostream>
using namespace std;

int main() {
  double x, y;
  
  scanf("%lf", &x);
  scanf("%lf", &y);

  printf("%.3lf km/l\n", x/y);

  return 0;
}