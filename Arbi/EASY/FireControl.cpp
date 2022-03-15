#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()



int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    char g[10][10];
    /// -> layers , [row , col]
    queue<pair<int , pair<int , int>>> Q;
    bool vis[10][10];
    for(int i = 0;i < 6;i++) {
     for(int j = 0;j < 6;j++) {
        cin >> g[i][j];
        if(g[i][j] == '*'){
         Q.push({0 , {i , j}});
         vis[i][j] = 1;
        }
      }
    }
    if(Q.empty()) {
     return cout << "RELAX\n" , 0;
    }
    int cnt = 0;
    memset(vis , false , sizeof vis);
    int  ans = 0;
    int id = 1;
    const int di[] = {0 , 0 , 1 , -1 , 1 , 1 , -1 , -1};
    const int dj[] = {1 , -1 , 0 , 0 , 1 , -1 , 1 , -1};
    int init = Q.size();
    while(!Q.empty()){
      auto node = Q.front();
      Q.pop();
      int layer = node.first;
      int row = node.second.first;
      int col = node.second.second;
      if(layer == 2){
       ++cnt;
       continue;
      }
      for(int dir = 0;dir < 8;dir++){
        int i = row + di[dir];
        int j = col + dj[dir];
        if(i < 0 || j < 0 || j > 5 || i > 5)continue;
        if(vis[i][j])continue;
        if(g[i][j] == '#'){
         ans = max(ans , id);
         g[i][j] = char(id + '0');
         ++id;
        }
        vis[i][j] = 1;
        if(g[i][j] != 'o')
         Q.push({layer + 1 , {i , j}});
        else
         Q.push({layer , {i , j}});
       }
    }
    //cout << ans << '\n';
    if(ans == 0 || cnt < init) {
     cout << "JUST RUN\n";
    } else {
     cout << ans << '\n';
    }
    for(int i = 0;i < 6;i++) {
     for(int j = 0;j < 6;j++) {
        cerr << g[i][j] << ' ';
      }
      cerr << '\n';
    }
}
