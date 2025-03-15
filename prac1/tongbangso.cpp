// #include <bits/stdc++.h>
// typedef unsigned long long ull;
// typedef long long ll;
// using namespace std;
// #define v vector
// char el = '\n';

// int main() {
//   ll m, n;
//   ll s = 1532023;
//   cin >> m >> n;
//   ll a[m][n];
//   for (ll i = 0; i < m; i++) {
//     for (ll j = 0; j < n; j++) {
//       if ((i + j) % 2 != 0) {
//         a[i][j] = ((((i - 1) % s) * (n % s)) % s + (j % s)) % s;
//       } else {
//         a[i][j] = 0;
//       }
//       cout << a[i][j] << " ";
//     }
//     cout << el;
//   }
//   return 0;
// }

#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
#define v vector
char el = '\n';

int main() {
  ll m, n;
  ll s = 1532023;
  cin >> m >> n;
  ll a[m][n];
  for (ll i = 0; i < m; i++) {
    for (ll j = 0; j < n; j++) {
      if ((i + j) % 2 != 0) {
        a[i][j] = (((((i - 1) % s + s) % s) * (n % s)) % s + (j % s)) % s;
      } else {
        a[i][j] = 0;
      }
      cout << a[i][j] << " ";
    }
    cout << el;
  }
  return 0;
}