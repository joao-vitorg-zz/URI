#include <iostream>
#include <algorithm>

using namespace std;

struct participante {
	string pais;
	unsigned int o, p, b;

  bool operator< (participante other) {
    return (o!=other.o ? o>other.o : 
            p!=other.p ? p>other.p : 
            b!=other.b ? b>other.b : 
            pais<other.pais);
  }
};

int main() {
	unsigned int i, n;

	cin >> n;
	participante medalhas[n];

	for (i=0; i<n; i++) {
		cin >> medalhas[i].pais >> medalhas[i].o >> medalhas[i].p >> medalhas[i].b;
	}

	sort(medalhas, medalhas+n);
	
	for (i=0; i<n; i++) {
		cout << medalhas[i].pais << ' ' << medalhas[i].o << ' '<< medalhas[i].p << ' '<< medalhas[i].b << endl;
	}

	return 0;
}