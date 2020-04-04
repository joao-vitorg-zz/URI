#include <iostream>
using namespace std;

int main(){
  unsigned int A, B;

  while(scanf("%u %u", &A, &B) != EOF){
    cout << (A^B) << endl;
  }

  return 0;
}