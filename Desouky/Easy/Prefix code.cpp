#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n; cin.ignore();
    map<string, int>codes;
    int mx = 0;
    for (int i = 0; i < n; i++) {
        string b;
        int c;
        cin >> b >> c; cin.ignore();
        codes[b] = (c);
        // mx = max(mx,int(b.size()));
    }

    string s;
    cin >> s; cin.ignore();
    string val = "" , ans = "";
    int start = 0;
    for(int x = 0; x<s.size(); x++){
        val += s[x];
        if(codes[val]){
            ans += char(codes[val]);
            val = "";
            start = x+1;
        }
        if(val.size() > mx){
            cout<<"DECODE FAIL AT INDEX "<<start;
            return 0;
        }
    }

    if (val != "" and codes[val] == 0) cout<<"DECODE FAIL AT INDEX "<<start;
    else if(val!="" and codes[val]) cout<<ans+char(codes[val]);
    else cout<<ans;
    
    

}
