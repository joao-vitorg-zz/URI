#include <iostream>
#include <map>

using namespace std;

struct presente {
  string p1, p2, p3;

  void achar(string p) {
    if (p1==p || p2==p || p3==p) {
      cout << "Uhul! Seu amigo secreto vai adorar o/" << endl;
    } else {
      cout << "Tente Novamente!" << endl;
    }
  }
};

int main() {
  unsigned int n;
  string nome, p, p1, p2, p3;
  map <string, presente> participante;

  for (cin >> n; n--; ) {
    cin >> nome >> p1 >> p2 >> p3;
    participante[nome] = {p1, p2, p3};
  }

  while (cin >> nome) {
    cin >> p;
    participante[nome].achar(p);
  }

  return 0;
}