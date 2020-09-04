#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

bool compare(pair <unsigned int, unsigned int> a, pair <unsigned int, unsigned int> b) {
  return (
    a.second!=b.second ? a.second<b.second :
    a.first>b.first
  );
}

int main() {
  unsigned int i, j;
  char text[1001];
  bool imprime=false;

  while (cin >> text) {
    if (imprime) cout << endl;
    else imprime=true;

    map <unsigned int, unsigned int> cases;
    vector <pair <unsigned int, unsigned int>> final;

    for (i=0; text[i]; i++) {
      cases[text[i]]++;
    }

    copy(cases.begin(), cases.end(), back_inserter(final));
    sort(final.begin(), final.end(), compare);

    for (auto F: final) {
      cout << F.first << ' ' << F.second << endl;
    }
  }

  return 0;
}