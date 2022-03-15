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
    vector <int> a(n);
    for(int &i : a)cin >> i;
    sort(all(a));
    int ans = INT_MAX;
    for(int i = 1;i < n;i++) {
     ans = min(ans , a[i] - a[i - 1]);
    }
    cout << ans << '\n';
}
