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
    map<string , int> have;
    int maximum = 0;
    for(int i = 0;i < n;i++) {
     string key;
     int value;
     cin >> key >> value;cin.ignore();
     have[key] = value;
     maximum = max(maximum , (int)key.size());
    }
    string test;
    cin >> test;cin.ignore();
    n = (int)test.size();
    int idx = -1;
    int res = 0;
    string cur = "" , ans = "";
    bool found = true;
    while(++idx < n && found) {
     cur += test[idx];
     if(cur.size() > maximum){
      found = false;
     }else if(have.count(cur)){
       ans += char(have[cur]);
       cur.clear();
       res = idx + 1;
     }
    }
    found = cur.empty();
    cout << (found ? ans : "DECODE FAIL AT INDEX " + to_string(res)) << '\n';
}
