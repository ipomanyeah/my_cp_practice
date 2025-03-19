#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
//#define v vector
template <typename T> using v = std::vector<T>;
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  v<int> a(n);
  v<int> dp(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int mn = INT_MAX;
  dp[0] = 0;
  for (int i = 1; i < n; i++) {
    for (int j = 1; j <= k; j++) {
      int o;
      if (n - j >= 0) {
        o = dp[i] + abs(a[n] - a[n - j]);
      } else {
        break;
      }
      mn = min(mn, o);
    }
    dp[i] = mn;
  }

  cout << dp[n - 1];
}