#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
typedef std::string str;
template <typename T> using v = std::vector<T>;
template <typename T> using p = std::pair<T, T>;
#define all(a) (a).begin(), (a).end()
#define allc(a) (a), sizeof((a)) / sizeof((a)[0]);
using namespace std;
char el = '\n';

int main(){
  ll n, k;
  cin >> n >> k;
  v<ll> a(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(all(a));
  ll sum = 0, cnt = 0;
  for (int i = 0; i < n; i++) {
    if (sum + a[i] > k) {
      break;
    }
    sum += a[i];
    cnt++;
  }
  
  cout << cnt;
}
