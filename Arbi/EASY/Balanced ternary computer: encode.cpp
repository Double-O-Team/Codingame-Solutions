#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
using namespace std;
 
 
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()
 
 
int32_t main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  int n;
  cin >> n;
  if(n == 0){
      cout << 0 << endl;
      return 0;
  }
  cin.ignore();
  bool negative = n < 0;
  n = abs(n);
  string answer = "";
  string neg = "0T1";
  string pos = "01T";
  while(n > 0) {
    int rem = n % 3;
    if(negative) {
      answer += neg[rem];  
    } else { 
      answer += pos[rem];
    }
    if(rem == 2)++n;
    n /= 3;
  }
  reverse(begin(answer) , end(answer));
  cout << answer << '\n';
}
