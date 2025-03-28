#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
char el = '\n';

class Solution {
  public:
    int hello(vector<int>& cost) {
      int n = cost.size();
      vector<int> dp(n + 1, 0);
      for (int i = 2; i <= n; i++) {
        dp[i] = min(cost[i - 2] + dp[i - 2], cost[i - 1] + dp[i - 1]);
      }
      return dp[n];
    }
  };

int main() {
  Solution sol;
  vector<int> a = {10,15,20};
  cout << sol.hello(a);
}