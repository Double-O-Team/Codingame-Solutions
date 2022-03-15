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
    int r1 , r2;
    cin >> r1 >> r2;
    bool stop = false;
    while(!stop){
     if(r1 < r2)r1 = nextRiver(r1);
     else if(r2 < r1)r2 = nextRiver(r2);
     else stop = true;
    }
    cout << r1 << '\n';
}
