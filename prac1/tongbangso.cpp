#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
#define v vector
char el = '\n';

int main() {
  int m, n;
  cin >> m >> n;
  int a[m][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if ((i + j) % 2 == 1) {
        a[i][j] = 0;
      } else {
        a[i][j] = (i - 1) * n + j;
      }
      cout << a[i][j] << " ";
    }
    cout << el;
  }
}