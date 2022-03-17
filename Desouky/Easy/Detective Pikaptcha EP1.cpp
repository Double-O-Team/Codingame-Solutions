#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#define F first 
#define S second 
using namespace std;
int grid[150][150];
int width;
int height;

bool valid(int r, int c){
    return r>=0 and r<height and c>=0 and c<width and grid[r][c] != -1 ;
}

void solve(){
    vector<pair<int, int>>dirs = {{0,1},{0,-1},{1,0},{-1,0}};
    for(int x = 0; x<height; x++){
        for(int y = 0; y<width; y++){
            if(grid[x][y]==-1)continue;
            for(int i = 0; i<4; i++){
                if(valid(x+dirs[i].F , y+dirs[i].S)){
                    grid[x][y]++;
                }
            }
        }
    }

    for(int x=0; x<height; x++){
        for(int y = 0; y<width; y++){
            if(grid[x][y] == -1)cout<<"#";
            else cout<<grid[x][y];
        }
        cout<<"\n";
    }
}


int main()
{
    cin >> width >> height; cin.ignore();
    for (int i = 0; i < height; i++) {
        string line;
        cin >> line; cin.ignore();
        for(int x = 0; x<width; x++){
            grid[i][x] = (line[x] == '#')? -1 : 0;
        }
    }
    solve();

}
