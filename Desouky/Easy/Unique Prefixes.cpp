#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
vector<string>v;
map<string, int>mp;
int main()
{
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word; cin.ignore();
        v.push_back(word);
        string sub = "";
        for(int x = 0; x<word.size(); x++){
            sub += word[x];
            mp[sub]++;
        }
    }

    for (int i = 0; i < n; i++) {
        string sub = "";
        bool printed = false;
        for(int x = 0; x < v[i].size(); x++){
            sub += v[i][x];
            if(mp[sub] == 1){
                cout<<sub<<"\n";
                printed = true;
                
                break;
            }
        }
        if(!printed){
            cout<<v[i]<<"\n";
        }
    }
}
