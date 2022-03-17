#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
vector<pair<int ,int>>allC;
string grid[100][100];
bool arr[30][30];
int width;
int n;int l;
int ans;
void solve(){
    for(auto it: allC){
        int row = it.first , col = it.second;
        for(int x = 0; x<n; x++){
            for(int y = 0; y<n; y++){
                if(abs(x - row) < l and abs(y-col)<l) arr[x][y] = 1;
            }
        }
    }
    for(int x = 0; x<n; x++){
        for(int y = 0; y<n; y++){
            if(arr[x][y]==0)ans++;
        }
    }
}
int main(){
    cin >> n; cin.ignore();    
    cin >> l; cin.ignore();
    width = l;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            string cell;
            cin >> cell; cin.ignore();
            grid[i][j] = cell;
            if(grid[i][j] == "C") allC.push_back({i, j});
        }
    }
    solve();
    cout<<ans;
}
