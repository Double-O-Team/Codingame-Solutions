#include <bits/stdc++.h>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    cin >> n; cin.ignore();
    map<string , int> frq;
    vector < string> all;
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word; cin.ignore();
        string cur = "";
        for(auto it : word){
         cur += it;
         frq[cur]++;
        }
        all.push_back(word);
    }
    for (int i = 0; i < n; i++) {
     bool res = false;
     string cur = "";
     for(auto item : all[i]) {
        cur += item;
        if(frq[cur] == 1){
         cout << cur << '\n';
         res = true;
         break;
        }
     }
     if(res == false){
        cout << all[i] << '\n';
     } 
    }
}
