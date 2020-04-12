#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

bool compare (pair <string, int> a, pair <string, int> b) {
  return (
    a.first.length()!=b.first.length() ? a.first.length()>b.first.length() :
    a.second<b.second
  );
}

int main() {
  unsigned int i, j, n;
  pair <string, unsigned int> token[51]; 
  string text;

  cin >> n;
  cin.get();

  while (n--) {
    getline(cin, text); 
    stringstream ss(text); 
  
    for (i=0; getline(ss, token[i].first, ' '); i++) {
      token[i].second = i;
    }

    sort(token, token+i, compare);

    for (j=0; j<i; j++) {
      if (j) cout << ' ';
      cout << token[j].first;
    }

    cout << endl;
  }
  
  return 0;
}