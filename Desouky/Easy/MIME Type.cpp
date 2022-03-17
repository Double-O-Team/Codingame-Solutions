#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


map<string , string> mp , original;

void solve(string s){
    int index = -1;
    for(int x = 0; x<s.size(); x++){
        if(s[x] =='.'){
            index = x;
        }
    }
    if(index == s.size()-1 or index == -1){
        cout<<"UNKNOWN\n";
        return;
    }else{
        string ext = "";
        for(int x = index+1; x<s.size(); x++){
            ext += tolower(s[x]);
        } 
        if(mp[ext] != ""){
            cout<<mp[ext]<<"\n";
        }else cout<<"UNKNOWN\n";
        
    }
}


int main()
{
    int n; 
    cin >> n; cin.ignore();
    int q; 
    cin >> q; cin.ignore();
    for (int i = 0; i < n; i++) {
        string ext; 
        string mt; 
        string cpy1 = ext , cpy2 = mt;
        cin >> ext >> mt; cin.ignore();
        for(auto &it: ext){
            it = tolower(it);
        }
        mp[ext] = mt;
    }

    for (int i = 0; i < q; i++) {
        string fname;
        getline(cin, fname); // One file name per line.
        solve(fname);
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;


    // For each of the Q filenames, display on a line the corresponding MIME type. If there is no corresponding type, then display UNKNOWN.
}
