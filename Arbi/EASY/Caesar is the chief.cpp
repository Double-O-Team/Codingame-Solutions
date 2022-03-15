#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()


int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
     string text_to_decode;
     getline(cin, text_to_decode);
     //cin.ignore();
     text_to_decode += " ";
     string cur = "";
     vector <string> words;
     for(auto item : text_to_decode) {
       if(item == ' '){
         words.push_back(cur);
         cur = "";
       } else {
         cur += item;
       }
     }
     for(int i = 0;i < 26;i++){
      vector <string> cur = words;
      bool valid = false;
      for(auto &item : cur){
       for(auto &c : item){
        if(isupper(c)){
         c = char((c + i) % 26 + 'A');
        }
       }
       valid |= item == "CHIEF";
      }
      if(valid){
       for(int i = 0;i < sz(cur);i++){
        if(i)cout << ' ';
        cout << cur[i];
       }
       cout << '\n';
       return 0;
      }
     }
     cout << "WRONG MESSAGE\n";
}
