#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()


int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    long long n;
    cin >> n;
    for(long long i = n + 1;i <= 2 * n + 1;i++){
     if((n *1LL* i) % (i - n) == 0){
      long long y = (n *1LL* i) / (i - n);
      cout << "1/" << n << " = " << "1/" << y << " + " << "1/" << i << '\n';
     }
    }
}
