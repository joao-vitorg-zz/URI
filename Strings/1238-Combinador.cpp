#include <iostream>
#include <cstring>

using namespace std;

int main() {
  short unsigned int i, j, n, sizeWord1, sizeWord2, minWord;
  char word1[51], word2[51];

  cin >> n;

  for (i=0; i<n; i++) {
    cin >> word1 >> word2;

    sizeWord1 = strlen(word1);
    sizeWord2 = strlen(word2);
    minWord = min(sizeWord1, sizeWord2);

    for(j=0; j<minWord; j++) {
      cout << word1[j] << word2[j];
    }

    if(sizeWord1 < sizeWord2) {
      for(; j<sizeWord2; j++) {
        cout << word2[j];
      }
    } else if (sizeWord1 > sizeWord2) {
      for(; j<sizeWord1; j++) {
        cout << word1[j];
      }
    }

    cout << endl;
  }

  return 0;
}