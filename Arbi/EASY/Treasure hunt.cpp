
#include <bits/stdc++.h>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
bool visited[105][105];
vector <string> grid(105);

int dfs(int row , int col , int h , int w) {
  if(row < 0 || col < 0 || col >= w ||  row >= h)return 0;
  if(visited[row][col] == true|| grid[row][col] == '#')return 0;
  visited[row][col] = 1;
  int ans = grid[row][col] - '0';
  int res1 = dfs(row + 1 , col , h , w);
  //visited[row][col] = 0;
  int res2 = dfs(row , col + 1 , h , w);
  //visited[row][col] = 0;
  int res3 = dfs(row - 1 , col , h , w);
  //visited[row][col] = 0;
  int res4 = dfs(row , col - 1 , h , w);
  visited[row][col] = 0;
  return ans + max({
    res1 , res2 , res3 , res4
  });
}
int main()
{
    int h;
    int w;
    cin >> h >> w;
    cin.ignore();
    grid.resize(h);
    memset(visited , false , sizeof visited);
    for (int i = 0; i < h; i++) {
        string row;
        getline(cin, row);
        grid[i] = row;
    }
    int row = 0 , col = 0;
    for(int i = 0;i < h;i++){
      for(int j = 0;j < w;j++)if(grid[i][j] == 'X'){
          row = i;
          col = j;
          grid[i][j] = '0';
          break;
      }
    }
    for(int i = 0;i < h;i++){
      for(int j = 0;j < w;j++)if(grid[i][j] == ' '){
          grid[i][j] = '0';
      }
    }
    cout << dfs(row , col , h  ,w) << endl;
}
