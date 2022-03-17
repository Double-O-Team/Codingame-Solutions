#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

char grid[150][150];
vector<int>v;

int main()
{
    int w;
    cin >> w; cin.ignore();
    int h;
    cin >> h; cin.ignore();
    string t;
    getline(cin, t);
    stringstream in(t);
    string num;
    while(getline(in, num, ' ')){
        v.push_back(stoi(num));
    }
    reverse(v.begin() , v.end());
    int stars = v.back();
    v.pop_back();
    int idx = 0;
    for(int x = 0; x<h; x++){
        for(int y = 0; y<w; y++){
            if(stars == 0){
                idx++;
                stars = v.back();
                v.pop_back();
            }
            if(idx%2==0){
                grid[x][y] = '*';
            }else {
                grid[x][y] = ' ';
            }
            stars--;
        }
    }
    for(int x = 0; x<h; x++){
        for(int y = 0; y<w; y++){
            if(y == 0)cout<<"|";
            cout<<grid[x][y];
            if(y == w-1)cout<<"|";
        }
        cout<<"\n";
    }
    
    



}
