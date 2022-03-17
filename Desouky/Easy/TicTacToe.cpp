#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


vector<string>grid;
bool check(){
    if(grid[0][0] == 'O' and grid[0][1] == 'O' and grid[0][2]=='O')return true;
    if(grid[1][0] == 'O' and grid[1][1] == 'O' and grid[1][2]=='O')return true;
    if(grid[2][0] == 'O' and grid[2][1] == 'O' and grid[2][2]=='O')return true;
    if(grid[0][0] == 'O' and grid[1][0] == 'O' and grid[2][0]=='O')return true;
    if(grid[0][1] == 'O' and grid[1][1] == 'O' and grid[2][1]=='O')return true;
    if(grid[0][2] == 'O' and grid[1][2] == 'O' and grid[2][2]=='O')return true;
    if(grid[0][0] == 'O' and grid[1][1] == 'O' and grid[2][2]=='O')return true;
    if(grid[2][0] == 'O' and grid[1][1] == 'O' and grid[0][2]=='O')return true;
    return false;
}

void print(){
    for(int x = 0; x<3; x++){
        for(int y = 0; y<3; y++){
            cout<<grid[x][y];
        }
        cout<<"\n";
    }
}

int main()
{
    for (int i = 0; i < 3; i++) {
        string line;
        getline(cin, line);
        grid.push_back(line);
    }
    bool flag = 1;
    for(int x = 0; x<3; x++){
        for(int y = 0; y<3; y++){
            if(grid[x][y] == '.'){
                grid[x][y] = 'O';
                if(check()){
                    print();
                    return 0;
                }
                grid[x][y] = '.';
                
            }
        }
    }
    if(flag)cout<<"false";
}
