#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

#define F first
#define S second

using namespace std;

struct medalhas {
  unsigned int o=0, p=0, b=0;
};

bool compare(pair <string, medalhas> x, pair <string, medalhas> y) {
  return (
    x.S.o!=y.S.o ? x.S.o>y.S.o : 
    x.S.p!=y.S.p ? x.S.p>y.S.p :
    x.S.b!=y.S.b ? x.S.b>y.S.b :
    x.F<y.F
  );
}

int main() {
  unsigned int i, j, n;
  string pais, modalidade;
  map <string, medalhas> paises;
  vector <pair <string, medalhas>> lista;

  while (getline(cin, modalidade)) {
    getline(cin, pais);
    paises[pais].o++;
  
    getline(cin, pais);
    paises[pais].p++;
  
    getline(cin, pais);
    paises[pais].b++;
  }

  copy(paises.begin(), paises.end(), back_inserter(lista));
  sort(lista.begin(), lista.end(), compare);

  cout << "Quadro de Medalhas" << endl;

  for (auto L : lista) {
    cout << L.F << ' ';
    cout << L.S.o << ' ';
    cout << L.S.p << ' ';
    cout << L.S.b << endl;
  }

  return 0;
}