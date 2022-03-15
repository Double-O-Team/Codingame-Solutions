#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()


int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n , m;
    cin >> n >> m;
    int g[n][m];
    for(int i = 0;i < n;i++){
     for(int j = 0;j < m;j++){
        cin >> g[i][j];
     }
    }
    int sgn = 0;
    char gg[n][m];
    for(int i = 0;i < n;i++){
     for(int j = 0;j < m;j++){
      cin >> gg[i][j];
     }
    }
    bool first = true;
    int last = 0;
    for(int i = 0;i < n;i++){
     for(int j = 0;j < m;j++){
      if(gg[i][j] == 'X'){
       if(first){
        last = g[i][j];
        first = false;
       } else if((last < 0 && g[i][j] < 0) || last > 0 && g[i][j] > 0){
         return cout << "false\n" , 0;
       } else {
        last = g[i][j];
       }
      }
     }
    }
    cout << "true\n";
}
