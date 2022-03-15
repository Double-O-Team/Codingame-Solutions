#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()


int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n , l;
    cin >> l >> n;
    vector <int> a(n);
    for(int &i : a)cin >> i;
    int minimum = *min_element(all(a));
    int maximum = *max_element(all(a));
    //cerr << minimum << ' ' << maximum << '\n';
    cout << max(l - minimum , maximum) << '\n';
}
