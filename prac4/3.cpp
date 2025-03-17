#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
//#define v vector
template <typename T>
using v = std::vector<T>;
using namespace std;

//ll s(ll n, v<ll>& a, v<ll> &dp) {
//	if (n == 0) {
//		return 0;
//	}
//	if (n == 1) {
//		return abs(a[0] - a[1]);
//	}
//
//	if (dp[n] != -1) {
//		return dp[n];
//	}
//
//	ll left = s(n - 1, a, dp) + abs(a[n] - a[n - 1]);
//	ll right = s(n - 2, a, dp) + abs(a[n] - a[n - 2]);
//	return dp[n] = min(left, right);
//
//}

int main() {
	ll n;
	cin >> n;
	v<ll> a(n);
	v<ll> dp(n, 0);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	// cout << s(n - 1, a, dp);
	dp[0] = 0;
	dp[1] = abs(a[0] - a[1]);
	int mn;
	for (int i = 2; i < n; i++) {
		int l = dp[i - 1] + abs(a[i] - a[i - 1]);
		int r = dp[i - 2] + abs(a[i] - a[i - 2]);
		dp[i] = min(l, r);
	}
	cout << dp[n-1];
}