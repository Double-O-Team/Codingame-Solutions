#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()

int ans = 0;

void solve(int idx , int val , int sum) {
  if(idx > 4)return;
  if(sum == 50) {
    ans += val;
    return;
  }
  for(int i = 1;i <= 12 && 50 - sum >= i;i++){
    solve(idx + 1 , val * (i == 1 ? 1 : 2) , sum + i);
  }
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    solve(0 , 1 , n);
    cout << ans << '\n';
}
