#include <iostream>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cout.precision(2);
  cout << fixed;

  unsigned int t, n, qty;
  map <string, double> lista;
  double capacidade, capacidade_sum;
  string presente;

  for (cin >> t; t--; ) {
    for (cin >> n; n--; ) {
      cin.ignore();

      getline(cin, presente);
      cin >> lista[presente];
    }

    cin >> capacidade;
    cin.ignore();

    for (capacidade_sum=0; getline(cin, presente); cin.ignore()) {
      cin >> qty;
  
      if (presente=="-" && qty==0) {
        break;
      } 
      if (lista.find(presente) == lista.end()) {
        cout << "NAO LISTADO: " << presente << endl;
        continue;
      }

      capacidade_sum += lista[presente]*qty;
    }
    
    cout << "Peso total: " << capacidade_sum << " kg" << endl;
    cout << "Numero de trenos: " << (unsigned int) ceil(capacidade_sum/capacidade) << endl;
    cout << endl;
  }

  return 0;
}
