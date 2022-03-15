#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()



int32_t main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  int n;
  cin >> n;
  for(int i = 0;i < n;i++) {
    string s;
    cin >> s;
    vector <stack<char>> container;
    for(auto item : s) {
     bool found = false;
     for(auto &stk : container){
      if(item <= stk.top()){
       stk.push(item);
       found = true;
       break;
      }
     }
     if(found == false) {
      stack <char> cur;
      cur.push(item);
      container.push_back(cur);
     }
    }
    cout << (int)container.size() << '\n';
  }
}
