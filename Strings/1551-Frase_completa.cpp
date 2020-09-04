#include <iostream>
using namespace std;

int main() {
  unsigned int i, n, sum;
  char text[1001];
  bool alpha[26];

  cin >> n;
  cin.get();

  while (n--) {
    fill(alpha, alpha+26, false);
    sum = 0;

    cin.getline(text, 1001);

    for (i=0; text[i]; i++) {
      if (isalpha(text[i])) {
        alpha[text[i]-'a'] = true;
      }
    }

    for (auto A : alpha) {
      if (A) sum++;
    }

    switch (sum) {
      case 26: 
        cout << "frase completa" << endl; break;
      case 13 ... 25:
        cout << "frase quase completa" << endl; break;
      default: 
        cout << "frase mal elaborada" << endl; break;
    }
  }

  return 0;
}