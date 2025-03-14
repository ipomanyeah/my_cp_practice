#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
#define v vector
char el = '\n';

bool isprime(ull k) {
  if (k <= 1) return false;
  if (k == 2) return true;
  for (int i = 2; i * i <= k; i++) {
    if (k % i == 0) return false;
  }
  return true;
}

bool sl(ull k) {
  ull cnt1 = 0;
  ull cnt2 = 0;
  string ks = to_string(k);
  for (int i = 0; i < ks.length(); i++) {
    if ((ks[i] - '0') % 2 == 0) {
      cnt2++;
    }
    else {
      cnt1++;
    }
  }
  return cnt1 != cnt2;
}

int main() {
  int n;
  cin >> n;
  ull cnt = 0;
  for (int i = 0; i < n; i++) {
    ull k;
    cin >> k;
    if (isprime(k) && sl(k)) {
      cnt++;
    }
  }
  cout << cnt;
}