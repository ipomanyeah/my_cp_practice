#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
char el = '\n';

class Solution {
public:
  int minCost(string colors, vector<int> &neededTime) {
    int l = 0;
    int sum = 0;
    for (int r = 1; r < colors.length(); r++) {
      if (colors[l] == colors[r]) {
        if (neededTime[l] < neededTime[r]) {
          sum += neededTime[l];
          l = r;
        }
        else {
          sum += neededTime[r];
        }
      }
      else {
        l = r;
      }
    }
    return sum;
  }
};

int main() {
  Solution sol;
  vector<int> ned = {1, 2, 3, 4, 5};
  cout << sol.minCost("abaac", ned);
}