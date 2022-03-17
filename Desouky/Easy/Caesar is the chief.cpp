#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int validCheif(string s){
    if((s[1]-s[0] == ('H' - 'C'))
     and (s[2]-s[1] == ('I' - 'H')) 
     and (s[3]-s[2] == ('E' - 'I'))
      and (s[4]-s[3] == ('F'-'E')))return (s[0] - 'C');
    else return -1;
}

int ans;
bool valid(string s){
    if(s.size()<5)return false;
    vector<string>sizeOfFive;
    int sz = 0;
    string str = "";
    for(int x = 0; x<s.size(); x++){
        if(s[x] == ' '){
            if(sz == 5) sizeOfFive.push_back(str);
            sz = 0;
            str = "";
        }else{
            sz++;
            str += s[x]; 
        }
    }
    ans = INT_MAX;
    if(sz == 5) sizeOfFive.push_back(str);
    for(auto it: sizeOfFive){
        int val = validCheif(it);
        if(val != -1) ans = min(ans, val); 
    }
    if(ans != INT_MAX)return true;
    return false;
}


int main()
{
    string s;
    getline(cin, s);
    if(valid(s)){
        for(int x = 0; x<s.size(); x++){
            if(s[x] == ' '){cout<<" ";continue;}
            if(s[x] - ans >= 'A' and s[x]-ans <= 'Z')cout<<char(s[x]-ans);
            else cout<<char(s[x]-ans+26);
        }
    }
    else cout<<"WRONG MESSAGE";
}
