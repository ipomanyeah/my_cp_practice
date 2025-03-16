#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
char el = '\n';

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> dp(n, 0);
  dp[0] = a[0];
  dp[1] = max(a[0], a[1]);
  for (int i = 2; i < n; i++) {
    dp[i] = max(a[i] + dp[i - 2], dp[i - 1]);
  }
  cout << dp[n-1];
  return 0;
}