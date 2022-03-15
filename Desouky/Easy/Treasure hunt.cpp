#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int h;
int w;
string grid[105];
bool vis[105][105];
bool valid(int r, int c){
    return r >= 0 and r < h and c >= 0 and c < w and !vis[r][c] and grid[r][c] != '#';
}
int ans = 0;
void solve(int r, int c, int total){
    ans = max(ans, total);
    if(!valid(r, c))return;
    int sum = 0;
    if(grid[r][c] >= '1' and grid[r][c] <= '9') sum += (grid[r][c] -'0');

    vis[r][c] = 1;
    solve(r+1 , c , total + sum);
    vis[r][c] = 0;

    vis[r][c] = 1;
    solve(r-1 , c , total + sum);
    vis[r][c] = 0;
    
    vis[r][c] = 1;
    solve(r , c+1 , total + sum);
    vis[r][c] = 0;
    
    vis[r][c] = 1;
    solve(r , c-1 , total + sum);
    vis[r][c] = 0;
}

int main()
{
    cin >> h >> w; cin.ignore();
    for (int i = 0; i < h; i++) {
        string row;
        getline(cin, row);
        grid[i] = row;
    }

    pair<int , int> s;
    for(int x = 0; x<h; x++){
        for(int y =0; y<w; y++){
            if(grid[x][y] == 'X') s = {x, y};
        }
    }

    memset(vis, 0, sizeof vis);
    solve(s.first, s.second,0);

    cout<<ans<<endl;
    return 0;
}
