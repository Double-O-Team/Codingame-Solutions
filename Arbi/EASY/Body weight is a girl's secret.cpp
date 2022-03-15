#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()



int32_t main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  vector <int> in(10);
  for(int &i : in)cin >> i;
  vector <int> mask;
  for(int bit = 1;bit <= (1 << 10);++bit){
    int cnt = __builtin_popcount(bit);
    if(cnt == 4){
     mask.push_back(bit);
    }
  }
  for(int start = 1;start < in[0];++start){
    for(int bit = 0;bit < mask.size();++bit){
      int val = mask[bit];
      vector <int> res = {start};
      for(int i = 0;i < 10;i++){
        if(val & (1 << i)){
         res.push_back(in[i] - start);
        }
      }
      multiset <int> have(all(in));
      for(int i = 0;i < 5;i++){
       for(int j = i + 1;j < 5;j++){
        if(have.count(res[i] + res[j])){
         have.erase(have.find(res[i] + res[j]));
        }
       }
      }
      if(have.empty()){
       for(int i = 0;i < 5;i++) {
        if(i)cout << ' ';
        cout << res[i];
       }
       return 0;
      }
    }
  }
}
