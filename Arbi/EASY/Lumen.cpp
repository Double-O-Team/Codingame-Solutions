#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()



int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n , l;
    cin >> n >> l;
    cin.ignore();
    int ans = n * n;
    bool lighted[n + 1][n + 1];
    memset(lighted , false , sizeof lighted);
    for(int i = 0;i < n;i++) {
        string cur;
        getline(cin , cur);
       // cin.ignore();
        string s = "";
        for(auto it : cur){
            if(it == ' ')continue;
            s += it;
        }
        cerr << s << '\n';
        int cnt = 0;
        for(int j = 0;j < sz(s);j++){
            if(s[j] != 'C')continue;
            for(int ii = max(0 , i - l + 1);ii < min(n , i + l);ii++){
             for(int jj = max(0 , j - l + 1);jj < min(n , j + l);jj++){
                if(!lighted[ii][jj]){
                 lighted[ii][jj] = 1;
                 ++cnt;
                }
             }
            }
        }
        ans -= cnt;
    }
    cout << ans << '\n';
}
