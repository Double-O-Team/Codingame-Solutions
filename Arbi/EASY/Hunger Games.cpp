#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()



vector<string> get(string s) {
   vector <string> ret;
   string cur = "";
   for(auto it : s) {
    if(isalpha(it)){
     cur += it;
    } else {
     if(cur.empty())continue;
     ret.push_back(cur);
     cur = "";
    }
   }
   if(!cur.empty())ret.push_back(cur);
   return ret;
}

int32_t main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  int n;
  cin >> n;
  vector <string> persons;
  for(int i = 0;i < n;i++) {
    string x;
    cin >> x;
    persons.push_back(x);
  }
  int m;
  cin >> m;
  map<string , vector<string>> killer;
  for(int i = 0;i < m;i++) {
    string a , b;
    cin >> a >> b;
    cin.ignore();
    string s;
    getline(cin , s);
    vector <string> cur = get(s);
    for(auto it : cur)killer[a].push_back(it);
    sort(all(killer[a]));
  }
  map<string , pair<string , vector<string>>> ans;
  for(auto item : killer) {
    string kiler = item.first;
    for(auto kiled : item.second){
     vector <string> cur = killer[kiled];
     if(cur.empty())cur.push_back("None");
     ans[kiled] = make_pair(kiler , cur);
    }
  }
  for(auto item : killer) {
    string kiler = item.first;
    if(ans[kiler].first.empty()){
     ans[kiler] = make_pair("Winner" , killer[kiler]);
    }
  }
  int idx = 0;
  for(auto person : ans) {
    cout << "Name: " << person.first << '\n';
    cout << "Killed: ";
    auto cur = ans[person.first].second;
    for(int i = 0;i < sz(cur);i++){
     if(i)cout << ", ";
     cout << cur[i];
    }
    cout << '\n';
    cout << "Killer: " << ans[person.first].first;
    if(idx != n - 1)cout << endl << endl;
    ++idx;
  }
}
