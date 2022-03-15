#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()


int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    string b;
    getline(cin, b);
    int answer = 0;
    for(int i = 0;i < b.size();i++) {
        if(b[i] == '1')continue;
        b[i] = '1';
        int cnt = b[0] == '1' , res = 0;
        for(int j = 1;j < b.size();j++) {
          if(b[j] == '1' && b[j - 1] == '1')++cnt;
          else {
            res = max(res , cnt);
            cnt = 1;
          }
        }
        b[i] = '0';
        res = max(res , cnt);
        answer = max(answer , res);
    }
    cout << answer << '\n';
}
