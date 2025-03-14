#include <bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;
char el = '\n';

ull power(ull a, ull b) {
  ull res = 1;
  while (b > 0) {
    if (b & 1) {
      res *= a;
    }
    a *= a;
    b >>= 1;
  }
  return res;
}

int main() {
  ull a, n;
  cin >> a >> n;
  ull r = a % 10;
  ull b = n % 4;
  cout << power(r, b) % 10;
  return 0;
}