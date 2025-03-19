#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
//#define v vector
#define all(a) (a).begin(), (a).end()
template <typename T> using v = std::vector<T>;
template <typename T> using p = std::pair<T, T>;
using namespace std;
char el = '\n';

void solve(ull k) {
  ull sum = k * (3 * k + 1) / 2;
  cout << sum << '\n';
}

int main() {
  ull n;
  cin >> n;
  while (n--) {
    ull k;
    cin >> k;
    solve(k);
  }
}
