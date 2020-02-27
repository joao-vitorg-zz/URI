#include <iostream>
using namespace std;

int main() {
  unsigned int seg, h, m;
  
  scanf("%u", &seg);

  h = seg/3600;
  seg %= 3600;
  
  m = seg/60;
  seg %= 60;
  
  printf("%u:%u:%u\n", h, m, seg);

  return 0;
}