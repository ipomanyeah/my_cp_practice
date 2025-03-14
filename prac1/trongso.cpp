#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ull;
using namespace std;
char el = '\n';

int main() {
  int n;
  cin >> n;
  vector<string> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  double mx = 0;
  double sum = 0, cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < a[i].length(); j++) {
      if (isdigit(a[i][j])) {
        cnt++;
        sum += a[i][j] - '0';
      }
    }
    if (sum / cnt > mx) {
      mx = i;
    }
  }
  cout << a[mx];
}