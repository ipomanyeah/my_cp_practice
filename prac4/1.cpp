#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
#define v vector
char el = '\n';

int main() {
  int n;
  cin >> n;

  v<int> a(n);
  v<int> b(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }

  int sum = 0;
  int cnt1 = 0;
  int cnt2 = 0;
  for (int i = 0; i < n; i++) {
    if (cnt1 != 2 || cnt2 != 2) {
      if (a[i] > b[i]) {
        sum += a[i];
        cnt1++;
      } else {
        sum += b[i];
        cnt2++;
      }
    } else {
      if (cnt1 == 2) {
        sum += b[i];
        cnt2++;
        cnt1 = 0;
      } else if (cnt2 == 2) {
        sum += a[i];
        cnt1++;
        cnt2 = 0;
      }
    }
  }
  cout << sum;
  return 0;
}