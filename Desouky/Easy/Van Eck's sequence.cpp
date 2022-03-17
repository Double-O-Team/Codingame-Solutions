#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
map<int , int>mp;
int arr[1000001];

int main(){
    int a1; cin >> a1; cin.ignore();
    int n ; cin >> n ; cin.ignore();
    vector<int>mp(int(1e6) , -1);

    arr[0] = a1;
    for(int x = 0; x<n; x++){
        if(mp[arr[x]] != -1){
            arr[x+1] = x - mp[arr[x]];
            mp[arr[x]] = x;
        }else{
            arr[x+1] = 0;
            mp[arr[x]] = x;
        }
    }
    cout<<arr[n-1]<<"\n";
}
