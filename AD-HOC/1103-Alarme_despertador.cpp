#include <iostream>
using namespace std;

int main() {
  short unsigned int a, p, h1, h2, m1, m2; 

  while (scanf("%hu %hu %hu %hu", &h1, &m1, &h2, &m2) != 0) {
    if (h1==0 && h2==0 && m1==0 && m2==0) break;
    
    a = (h1*60+m1);
    p = (h2*60+m2);

    printf("%hu\n", (p>a ? p-a: (1440-a)+p));
  }

  return 0;
}