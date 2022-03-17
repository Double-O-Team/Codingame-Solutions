#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int grid[9][9];

bool validRow[9][10];
bool validCol[9][10];
bool validBox[10];
bool valid(){
    memset(validRow, true, sizeof(validRow));
    memset(validCol, true, sizeof(validCol));
    for(int x = 0; x<9; x++){
        for(int y = 0; y<9; y++){
            if(!validRow[x][grid[x][y]])return false;
            if(!validCol[y][grid[x][y]])return false;
            validRow[x][grid[x][y]] = 0;
            validCol[y][grid[x][y]] = 0;
        }
    }
    // all rows and cols are valid
    // check boxes
    memset(validBox, true, sizeof validBox);
    for(int x = 0; x<3; x++){
        for(int y = 0; y<3; y++){
            if(!validBox[grid[x][y]])return false;
            validBox[grid[x][y]] = 0;
        }
    }

    memset(validBox, true, sizeof validBox);
    for(int x = 0; x<3; x++){
        for(int y = 3; y<6; y++){
            if(!validBox[grid[x][y]])return false;
            validBox[grid[x][y]] = 0;
        }
    }


    memset(validBox, true, sizeof validBox);
    for(int x = 0; x<3; x++){
        for(int y = 6; y<9; y++){
            if(!validBox[grid[x][y]])return false;
            validBox[grid[x][y]] = 0;
        }
    }


    memset(validBox, true, sizeof validBox);
    for(int x = 3; x<6; x++){
        for(int y = 0; y<3; y++){
            if(!validBox[grid[x][y]])return false;
            validBox[grid[x][y]] = 0;
        }
    }
    memset(validBox, true, sizeof validBox);
    for(int x = 3; x<6; x++){
        for(int y = 3; y<6; y++){
            if(!validBox[grid[x][y]])return false;
            validBox[grid[x][y]] = 0;
        }
    }


    memset(validBox, true, sizeof validBox);
    for(int x = 3; x<6; x++){
        for(int y = 6; y<9; y++){
            if(!validBox[grid[x][y]])return false;
            validBox[grid[x][y]] = 0;
        }
    }


    memset(validBox, true, sizeof validBox);
    for(int x = 6; x<9; x++){
        for(int y = 0; y<3; y++){
            if(!validBox[grid[x][y]])return false;
            validBox[grid[x][y]] = 0;
        }
    }

        memset(validBox, true, sizeof validBox);
    for(int x = 6; x<9; x++){
        for(int y = 3; y<6; y++){
            if(!validBox[grid[x][y]])return false;
            validBox[grid[x][y]] = 0;
        }
    }

        memset(validBox, true, sizeof validBox);
    for(int x = 6; x<9; x++){
        for(int y = 6; y<9; y++){
            if(!validBox[grid[x][y]])return false;
            validBox[grid[x][y]] = 0;
        }
    }
    return true;
}



int main()
{
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin>>grid[i][j];
        }
    }

    if(valid()) cout<<"true";
    else cout<<"false";

}
