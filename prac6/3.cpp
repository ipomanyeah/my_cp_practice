#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
typedef std::string str;
#define v vector
#define p pair
#define all(a) (a).begin(), (a).end()
#define allc(a) (a), sizeof((a)) / sizeof((a)[0]);
using namespace std;
char el = '\n';

int main(){
  str s;
  getline(cin, s);
  set<int> a;
  
  str cr = "";
  for (int i = 0; i < s.size(); i++) {
    if (isdigit(s[i])) {
      cr += s[i];
    } else {
      if (!cr.empty()) {
        a.insert(stoi(cr));
        cr = "";
      }
    }
  }
  cout << a.size();
  return 0;
}
