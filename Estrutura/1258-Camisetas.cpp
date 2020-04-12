#include <iostream>
#include <algorithm>

using namespace std;

struct camisa {
  string nome, cor;
  char tamanho;

  bool operator< (camisa b) {
    return (cor!=b.cor         ? cor<b.cor :
            tamanho!=b.tamanho ? tamanho>b.tamanho :
            cor<b.cor);
  }
};

int main() {
  unsigned int i, n;
  bool imprime=false;

  while (cin >> n) {
    if (n==0) break;
    camisa camisetas[n];
  
    cin.get();
    for (i=0; i<n; i++) {
      getline(cin, camisetas[i].nome);
      cin >> camisetas[i].cor >> camisetas[i].tamanho;
      cin.get();
    }

    sort(camisetas, camisetas+n);

    if (imprime) cout << endl;
    imprime = true;

    for (i=0; i<n; i++) {
      cout << camisetas[i].cor << ' ' << camisetas[i].tamanho << ' ' << camisetas[i].nome << endl;
    }

  }

  return 0;
}