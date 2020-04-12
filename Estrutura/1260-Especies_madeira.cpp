#include <iostream>
#include <map>

using namespace std;

int main() {
  freopen("../.debug/input.txt", "r", stdin);
  freopen("../.debug/output.txt", "w", stdout);

  map <string, double> arvores;
  unsigned int n, total;
  string arvore;
  bool imprime;

  cout.precision(4);
  cout << fixed;

  cin >> n;
  cin.get();
  getline(cin, arvore);

  while (n--) {
    arvores.clear();
    total=0;

    if (imprime) cout << endl;
    else imprime=true;
  
    while (getline(cin, arvore) && arvore[0]) {
      arvores[arvore]++;
      total++;
    }

    for (auto A : arvores) { 
      cout << A.first << ' ' << A.second*100/total << endl;
    }
  }

  return 0;
}