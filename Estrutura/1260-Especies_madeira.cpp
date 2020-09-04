#include <iostream>
#include <map>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cout.precision(4);
  cout << fixed;

  unsigned int i, t, total;
  map <string, unsigned int> arvores;
  bool flag=false;
  string arvore;

  cin >> t;
  cin.ignore();
  cin.ignore();

  while (t--) {
    if (flag) {
      arvores.clear();
      cout << endl;
    }
    else flag=true;

    for (total=0; getline(cin, arvore) && arvore!=""; total++) {
      arvores[arvore]++;
    }

    for (auto A : arvores) {
      cout << A.first << ' ' << (double) A.second/total*100 << endl;
    }
  }

  return 0;
}
