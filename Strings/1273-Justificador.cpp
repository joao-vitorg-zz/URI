#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main() {
  short unsigned int i, j, n, maxSize;
  bool newLine=false;

  while (cin >> n && n!=0) {
    newLine ? printf("\n") : newLine=!newLine; 

    char words[n][51];

    for (i=0, maxSize=0; i<n; i++) {
      cin >> words[i];

      if (strlen(words[i]) > maxSize) {
        maxSize = strlen(words[i]); 
      }
    }

    for (i=0; i<n; i++) {
      cout << setw(maxSize) << words[i] << endl;
    }
  }

  return 0;
}