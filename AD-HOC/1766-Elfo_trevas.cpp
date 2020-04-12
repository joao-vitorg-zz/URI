#include <iostream>
#include <algorithm>

using namespace std;

struct cenario{
  unsigned int peso, idade;
  double altura;
  char nome[101];

  bool operator< (cenario b) {
    return (peso!=b.peso     ? peso>b.peso     :
            idade!=b.idade   ? idade<b.idade   :
            altura!=b.altura ? altura<b.altura :
            nome<b.nome);
  }
};

int main() {
  unsigned int i, j, t, n, m;

  cin >> t;

  for (i=1; i<=t; i++) {
    cin >> n >> m;
    cenario rena[n];

    for (j=0; j<n; j++) {
      cin >> rena[j].nome >> rena[j].peso >> rena[j].idade >> rena[j].altura;
    }

    sort(rena, rena+n);

    cout << "CENARIO {" << i <<  "}" << endl;

    for (j=0; j<m; j++) {
      cout << (j+1) << " - " << rena[j].nome << endl;
    }
  }

  return 0;
}