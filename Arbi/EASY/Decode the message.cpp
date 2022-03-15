#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()


int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    long long    P;
    cin >> P;
    cin.ignore();
    string in , res;
    getline(cin, in);

    while (P >= 0) {
     res += in[P % in.size()];
     P = P / in.size() - 1;
    }
    cout << res << '\n';
}
