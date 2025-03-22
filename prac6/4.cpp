#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
typedef std::string str;
#define v vector
#define p pair
#define all(a) (a).begin(), (a).end()
#define allc(a) (a), sizeof((a)) / sizeof((a)[0]);
using namespace std;
char el = '\n';

int main() {
  int m, n;
  cin >> m >> n;
  v<int> a(m);
  for (int i = 0; i < m; i++) {
    cin >> a[i];
  }
  v<int> b(n);
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }

  int mn = abs(a[0] - b[0]);
  if (m > n) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        mn = min(mn, abs(b[i] - a[j]));
      }
    }
  }
  else {
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        mn = min(mn, abs(b[i] - a[j]));
      }
    }
  }
  cout << mn;
  return 0;
}