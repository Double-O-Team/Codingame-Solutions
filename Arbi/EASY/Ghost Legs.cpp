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
  cin >> m >> n;
  cin.ignore();
  vector <string> g(n);
  for(int i = 0;i < n;i++) {
   string line;
   getline(cin, line);

   g[i] = line;
  }
  for(int j = 0;j < m;j += 3){
    int curj = j;
    int row = 0;
    while(row < n - 1) {
     ++row;
     if(g[row][curj] != '|' && g[row][curj] != ' ' && g[row][curj] != '-'){
      cout << g[0][j] << g[row][curj] << '\n';
     } else if(curj + 1 < m && g[row][curj + 1] == '-'){
       curj += 3;
     } else if(curj > 0 && g[row][curj - 1] == '-'){
      curj -= 3;
     }
    }
  }
}
