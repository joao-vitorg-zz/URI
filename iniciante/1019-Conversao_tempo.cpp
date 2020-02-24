#include <iostream>
using namespace std;

int main() {
  unsigned int seg, h, m;
  
  scanf("%d", &seg);

  h = seg/3600;
  seg %= 3600;
  
  m = seg/60;
  seg %= 60;
  
  printf("%d:%d:%d\n", h, m, seg);

  return 0;
}