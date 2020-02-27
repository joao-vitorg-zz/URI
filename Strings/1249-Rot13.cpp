#include <iostream>
#include <cstring>

using namespace std;

int main() {
  short unsigned int i, size;
  char word[51];

  while (fgets(word, 51, stdin) != NULL) {
    size = strlen(word);

    for (i=0; i<size; i++) {
      if ('z'>=word[i] && word[i]>='a') {
        word[i]<'n' ? word[i] += 13 : word[i] -= 13;
      }
      else if ('Z'>=word[i] && word[i]>='A') {
        word[i]<'N' ? word[i] += 13 : word[i] -= 13;
      } 
    }

    printf("%s", word);
  }

  return 0;
}