#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()


int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    unsigned long long n;
    cin >> n;
    n++;
    string s = to_string(n);
    auto compare = [&](const auto &x , const auto &y) -> bool {
     return x > y;
    };
    auto f = adjacent_find(all(s) , compare);
    //cout << (*f) << '\n';
    if (f != end(s)) {
     fill(next(f), end(s), *f);
    }
    cout << s << '\n';
}
