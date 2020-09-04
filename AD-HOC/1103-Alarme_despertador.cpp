#include <iostream>
using namespace std;

int main() {
  short unsigned int a, p, h1, h2, m1, m2; 

  while (cin >> h1 >> m1 >> h2 >> m2) {
    if (h1==0 && h2==0 && m1==0 && m2==0) break;
    
    a = (h1*60+m1);
    p = (h2*60+m2);

    cout << (p>a ? p-a: (1440-a)+p) << endl;
  }

  return 0;
}