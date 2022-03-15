#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()


int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    string sequence;
    getline(cin, sequence);
    cin.ignore();
    double numOfTag = 0;
    map<char , double> depth;
    char ans ;
    double res = 0;
    bool skip = false;
    for(auto item : sequence){
     if(item == '-'){
      --numOfTag;
      skip = true;
     } else if(skip){
      skip = false;
     } else {
      ++numOfTag;
      depth[item] += (1.0 / numOfTag);
     }
    }
    for(auto [key , value] : depth){
     if(value > res){
      ans = key;
      res = value;
     } else if(value == res && key < ans) {
      ans = key;
     }
    }
    cout << ans << '\n';
}
