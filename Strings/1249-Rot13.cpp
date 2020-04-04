#include <iostream>
#include <cstring>

using namespace std;

int main() {
  short unsigned int i;
  char word[51];

  while (fgets(word, 51, stdin) != NULL) {
    for (i=0; word[i]; i++) {

      if (isalpha(word[i])) {
        word[i] += word[i]<'n' ? 13 : -13;
      }
    }

    cout << word;
  }

  return 0;
}