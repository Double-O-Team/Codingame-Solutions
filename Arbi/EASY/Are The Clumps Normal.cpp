#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()


int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    string s , ans = "Normal";
    int s_prev = 0, s_cur = 0;
    int s_rest = -1;
    cin >> s;
    cin.ignore();
    for(int i = 2;i < 10;i++) {
        int l_rest = 0;
        s_cur = 0;
        s_rest = (s[0] - '0') % i;
        for (auto& c : s) {
            l_rest = (c - '0') % i;
            if (s_rest != l_rest) {
              ++s_cur;
            }
            s_rest = l_rest;
        }
        if (s_cur < s_prev ) {
            ans = to_string(i);
            break;
        }
        s_prev = s_cur;
    }
    cout << ans << '\n';
}
