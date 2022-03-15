#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()


int32_t main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  int n;
  cin >> n;
  vector <string> participants(n);
  for(auto &participant : participants) {
    cin >> participant;
  }
  sort(begin(participants) , end(participants));

  vector <string> valid2 , valid1;
  for(int i = 0;i < n / 2;i++){
    valid1.push_back(participants[i]);
  }
  for(int i = n / 2;i < n;i++){
    valid2.push_back(participants[i]);
  }
  string ans = "";
  for(char i = 'A';i <= 'Z';i++) {
    string cur = "";
    cur += i;
    if(cur >= valid1.back() && cur < valid2[0]){
     return cout << i << '\n' , 0;
    }
  }
  for(int mask = 1;mask < (1 << 20);mask++){
    string cur = "";
    for(int i = 0;i < 26;i++) {
     if(mask & (1 << i)){
      cur += char(i + 'A');
     }
    }
    if(cur >= valid1.back() && cur < valid2[0]) {
     if(ans.empty())ans = cur;
     else if(cur.size() < ans.size())ans = cur;
    }
  }
  if(ans.empty())ans = valid1.back();
  cout << ans << '\n';
}
