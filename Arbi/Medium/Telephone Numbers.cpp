#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()

/**
   Author : 3RB
**/

int ans = 0;

struct TrieNode{
   vector <TrieNode*>children;
   TrieNode() :
       children(vector <TrieNode*>(26 , nullptr)){}
};

void insert(TrieNode*root, string number) {
  TrieNode *cur = root;
  int count = 0;
  for(auto item : number) {
   if(cur->children[item - 'a'] == nullptr){
    ++count;
    cur ->children[item - 'a'] = new TrieNode();
   }
   cur = cur->children[item - 'a'];
  }
  ans += count;
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    TrieNode *trie = new TrieNode();
    for(int i = 0;i < n;i++) {
       string number;
       cin >> number;
       insert(trie , number);
    }
    cout << ans << '\n';
}
