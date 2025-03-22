// https://oj.qnoi.info/problem/hdt_230
#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
//#define v vector
#define all(a) (a).begin(),(a).end()
template <typename T> using v = std::vector<T>;
template <typename T> using p = std::pair<T, T>;
using namespace std;
char el = '\n';

int main() {
  int n, k;
  cin >> n >> k;
  if (k > n) {
    cout << el;
  }
  v<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(all(a), greater<int>());
  cout << a[k - 1];
  return 0;
}
