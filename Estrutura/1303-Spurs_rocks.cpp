#include <iostream>
#include <algorithm>

using namespace std;

struct casos {
  unsigned int time=0, p=0, p_v=0, p_d=0;
  double ca;

  void calc_ca() {
    ca = (p_d==0 ? p_v : (double) p_v/p_d);
  }

  bool operator<(casos b) {
    return (
      p!=b.p ? p>b.p :
      ca!=b.ca ? ca>b.ca :
      p_v!=b.p_v ? p_v>b.p_v :
      time<b.time
    );
  }
};

int main() {
  unsigned int i, j, n, stop, t1, t2, p1, p2;

  for (j=1; cin >> n; j++) {
    if (!n) break;

    casos times[n+1];
    stop = (n*n-n)/2;

    for (i=0; i<stop; i++) {
      cin >> t1 >> p1 >> t2 >> p2;
    
      times[t1].p_v += p1;
      times[t2].p_v += p2;
      times[t1].p_d += p2;
      times[t2].p_d += p1;

      if (p1>p2) {
        times[t1].p+=2;
        times[t2].p+=1;
      } else {
        times[t2].p+=2;
        times[t1].p+=1;
      }
    }

    for (i=1; i<=n; i++) {
      times[i].time = i;
      times[i].calc_ca();
    }

    sort(times+1, times+n+1);

    if (j!=1) cout << endl;
    cout << "Instancia " << j << endl;

    for (i=1; i<=n; i++) {
      if (i!=1) cout << ' ';

      cout << times[i].time;
    }

    cout << endl;
  }
  
  return 0;
}
