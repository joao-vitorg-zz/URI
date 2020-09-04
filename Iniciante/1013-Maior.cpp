#include <iostream>
using namespace std;

int main() {
  unsigned int a, b, c;
  
  scanf("%u %u %u", &a, &b, &c);

  printf("%u eh o maior\n", max(max(a, b), c));

  return 0;
}