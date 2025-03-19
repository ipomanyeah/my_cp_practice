// https://oj.qnoi.info/problem/hdt_230
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
  if (k <= 2) {
    cout << 2;
    return;
  } else {
    ull b = 3 * k - 1;
    cout << k * (2 + b) / 2 << el;
  }
}

void cn(string s) {
  int cnt = 0;
  for (int i = 0; i < s.length() - 1; i++) {
    if (s[i] == '1') {
      cnt++;
    }
  }
  cout << cnt;
}

int main() {
  string s;
  cin >> s;
  if (s.find("2") != string::npos || s.find("4") != string::npos ||
      s.find("5") != string::npos || s.find("6") != string::npos ||
      s.find("7") != string::npos || s.find("8") != string::npos ||
      s.find("9") != string::npos) {
    cout << "NO" << el;
    cn(s);
  } else {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
      sum += s[i] - '0';
    }
    if (sum % 3 == 0) {
      cout << "YES";
    } else {
      cout << "NO" << el;
      cn(s);
    }
  }
  return 0;
}
