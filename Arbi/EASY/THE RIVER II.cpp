#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()

int nextRiver(int n) {
    int s = n;
    while (s > 0) {
        n = n + (s % 10);
        s = s / 10;
    }
    return n;
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i = n - 1; i > 0; i--) {
        int cur = i;
        cur = nextRiver(cur);
        if(cur == n) {
            return cout << "YES\n", 0;
        }
    }
    cout << "NO\n";
}
