#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
//#define v vector
#define all(a) (a).begin(), (a).end()
template <typename T> using v = std::vector<T>;
using namespace std;
char el = '\n';

bool c(int a) {
  int sum = 0;
  string s = to_string(a);
  for (int i = 0; i < s.size(); i++) {
    sum += s[i] - '0';
  }
  return a % sum == 0;
}

int main() {
  int n, q;
  cin >> n >> q;
  v<int> a(n);
  v<bool> b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    b[i] = c(a[i]);
  }
  a[0] = b[0];
  for (int i = 1; i < n; i++) {
    a[i] = a[i - 1] + b[i];
  }
  for (int i = 0; i < n; i++) {
    cerr << a[i] << " ";
  }
  cerr << el;
  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    if (l == 1) {
      cout << a[r - 1] << el;
    } else {
      cout << a[r - 1] - a[l - 2] << el;
    }
  }
}
