#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
// #define v vector
template <typename T> using v = std::vector<T>;
#define p pair
using namespace std;
char el = '\n';

int sum(int l, int r, v<int> &f) {
  if (l - 1 < 0) {
    return f[r];
  }
  return f[r] - f[l - 1];
}

int main() {
  ios_base::sync_with_stdio(NULL);
  cin.tie(0); cout.tie(0);
  
  int n, d;
  cin >> n >> d;
  v<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  v<int> f(n, a[0]);
  for (int i = 1; i < n; i++) {
    f[i] = f[i - 1] + a[i];
  }
  
  int cnt = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 1; i < n; j++) {
      if (sum(i, j, f) % d == 0) {
        cnt++;
      }
    }
  }
  
  return 0;
}