#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()

int n , m;
int g[50][50];

void solve(int i , int j) {
  int corner = 0;
  int prvi = i - 1 , nxti = i + 1;
  int prvj = j - 1 , nxtj = j + 1;
  if(i == n - 1)++corner , nxti = i;
  if(i == 0)++corner , prvi = i;
  if(j == 0)++corner , prvj = j;
  if(j == m - 1)++corner , nxtj = j;
  int cnt = 0;
  for(int r = prvi;r <= nxti;++r)
    for(int c = prvj;c <= nxtj;++c)
      cnt += g[r][c];
  if(cnt == 8)cout << j << ' ' << i;
  else if(cnt == 5 && corner == 1)cout << j << ' ' << i;
  else if(cnt == 3 && corner == 2)cout << j << ' ' << i;
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> m >> n;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> g[i][j];
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(g[i][j] == 0){
               solve(i , j);
            }
        }
    }
}
