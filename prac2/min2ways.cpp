#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
#define v vector
char el = '\n';

int mn(int l, int r, v<int> a) {
  if (l == r)
    return a[l];
  int mid = (l + r) / 2;
  return min(mn(l, mid, a), mn(mid + 1, r, a));
}

int findmin(v<int> a) {
  if (a.size() == 0) {
    return 0;
  }
  return mn(0, a.size() - 1, a);
}

int main() {
  int n;
  cin >> n;
  v<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cout << findmin(a);
}