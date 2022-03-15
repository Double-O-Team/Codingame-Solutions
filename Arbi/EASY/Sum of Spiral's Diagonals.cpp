#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()


long long solve(int n, int s) {
    if(n == 1)return s;
    if(n == 0)return 0;
    long long  sum = 4 * s + (n - 1) * 6;
    long long update_s = s + 4 * (n - 1);
    long long update_n = n - 2;
    return sum + solve(update_n, update_s);
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    cout << solve(n , 1);
}
