#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int l;
    cin >> l; cin.ignore();
    int n;
    cin >> n; cin.ignore();
    vector<pair<long long , long long>> painted;
    for (int i = 0; i < n; i++) {
        int st;
        int ed;
        cin >> st >> ed; cin.ignore();
        painted.push_back({st, ed});
        // cout<<st<<" "<<ed<<"\n";
    }

    sort(painted.begin() , painted.end());
    bool flag = true;

    if(painted[0].first != 0) {flag = false;cout<<"0 "<<painted[0].first<<endl;}
    
    long long last = painted[0].second;
    for(int x = 1; x<n; x++){
        if(painted[x].first <= last){
            last = max(last, painted[x].second);    
            continue;
        }
        flag = false;
        cout<<last<<" "<<painted[x].first<<endl;
        last = painted[x].second;
    }
    
    if(last != l) {cout<<last<<" "<<l<<endl;flag = false;}
    if(flag)cout<<"All painted";
}
