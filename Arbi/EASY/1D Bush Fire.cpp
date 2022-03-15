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
        int ans = 0;
        for(int j = 0;j < sz(s);j++){
            if(s[j] == 'f'){
             ++ans;
             j += 2;
            }
        }
        cout << ans << '\n';
    }
}
