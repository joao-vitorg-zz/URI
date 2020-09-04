#include <iostream>
using namespace std;

int main() {
  unsigned int seg, h;
  
  cin >> seg;

  h = seg/3600;
  seg %= 3600;
  
  printf("%u:%u:%u\n", h, seg/60, seg%60);

  return 0;
}