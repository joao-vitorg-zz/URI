#include <iostream>
using namespace std;

int main() {
  unsigned int idade;

  cin >> idade;

  cout << idade/365 << " ano(s)" << endl;
  idade %= 365;
  cout << idade/30 << " mes(es)" << endl;
  cout << idade%30 << " dia(s)" << endl;

  return 0;
}