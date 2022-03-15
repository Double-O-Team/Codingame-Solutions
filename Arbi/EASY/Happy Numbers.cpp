#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()

ll sum(string cur) {
  ll ret = 0;
  for(auto it : cur) {
    int val = (it - '0') * (it - '0');
    ret += val;
  }
  return ret;
}

bool isHappy(string s) {
  string cur = to_string(sum(s));
  int cycle = 0;
  while(cycle < 100 && sum(cur) != 1) {
    cur = to_string(sum(cur));
    ++cycle;
  }
  return sum(cur) == 1;
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
     int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        string x;
        getline(cin, x);
        if(isHappy(x)) {
          cout << x << " :)\n";
        } else {
          cout << x << " :(\n";
        }
    }
}
