#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
//#define v vector
#define all(a) (a).begin(), (a).end()
template <typename T> using v = std::vector<T>;
using namespace std;
char el = '\n';

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a + b + c != 180) {
    cout << "KHONG";
  }
  else {
    int mx = max({a, b, c});
    if (mx == 90) {
      cout << "VUONG";
    }
    else if (mx < 90) {
      cout << "NHON";
    }
    else {
      cout << "TU";
    }
  }
  return 0;
}
