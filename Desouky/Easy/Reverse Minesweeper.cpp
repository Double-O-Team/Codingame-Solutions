#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> dirs{{0, 1}, {0, -1}, {1, 0}, {-1, 0},{1,1},{1,-1},{-1,1},{-1,-1}};

int w , h;
vector<string>grid;
int arr[50][50];
bool valid(int x, int y){
    return x>=0 and x<h and y>=0 and y<w;
}

void run(int row, int col){
    for(int x = 0; x<8; x++){
        int r = row + dirs[x].first;
        int c = col + dirs[x].second;
        if(valid(r, c) and arr[r][c] != -1){
            arr[r][c]++;
        }
    }
}

int main()
{
    
    cin >> w; cin.ignore();
    
    cin >> h; cin.ignore();
    grid.resize(h);
    for (int i = 0; i < h; i++) {
        string line;
        getline(cin, line);
        grid[i] = line;
    }
    memset(arr, 0, sizeof arr);
    for(int x = 0; x<h; x++){
        for(int y = 0; y<w; y++){
            if(grid[x][y] == 'x') arr[x][y] = -1;
        }
    }
    
    for(int x = 0; x<h; x++){
        for(int y = 0; y<w; y++){
            if(grid[x][y] == 'x')run(x, y);
        }
    }
    for(int x = 0; x<h; x++){
        for(int y = 0; y<w; y++){
            if(arr[x][y] == -1)cout<<".";
            else if(arr[x][y] == 0)cout<<".";
            else cout<<arr[x][y];
        }
        cout<<"\n";
    }

}
