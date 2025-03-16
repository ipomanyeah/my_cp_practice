#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define v vector
using namespace std;
char el = '\n';

ull mod = 1000000000+7;

int main(){
  ull n;
  cin >> n;
  v<ull> dp;
  dp.push_back(1);
  dp.push_back(1);
  dp.push_back(2);
  for (ull i = 3; i <= n; i++) {
    dp.push_back((dp[i - 2] + dp[i - 1] + dp[i - 3]) % mod);
  }
  cout << dp[n];
}