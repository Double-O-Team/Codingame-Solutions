#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
vector< string> g(3);
void print(auto gg){
   for(int i = 0;i < 3;i++){
    for(int j = 0;j < 3;j++){
        cout << gg[i][j];
    }
    cout << endl;
   } 
   exit(0);
}
int main()
{
    vector< string> g(3);
    for (int i = 0; i < 3; i++) {
        string line;
        getline(cin, line);
        cerr << line << '\n';
        g[i] = line;
    }
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    int row = -1;
    for(int i = 0;i < 3;i++){
      int cnt = 0;
      for(int j = 0;j < 3;j++){
       cnt += g[i][j] == 'O';
       cnt -= g[i][j] == 'X';
      }
      if(cnt == 2){
       row = i;
       break;   
      }  
    }
    if(row != -1) {
     for(int j = 0; j < 3;j++) {
         g[row][j] = 'O';
     }
     print(g);
    }
    int col = -1;
    for(int i = 0;i < 3;i++){
      int cnt = 0;
      for(int j = 0;j < 3;j++){
        cnt += g[j][i] == 'O';
        cnt -= g[j][i] == 'X';
      }
      if(cnt == 2){
       col = i;
       break;   
      }  
    }
    if(col != -1) {
     for(int j = 0; j < 3;j++)g[j][col] = 'O';
      print(g);
    }
    int cnt = 0;
    for(int i = 0;i < 3;i++){
      cnt += g[i][i] == 'O';
      cnt -= g[i][i] == 'X';
    }
    if(cnt == 2) {
     for(int i = 0;i < 3;i++)g[i][i] = 'O';
     print(g);
    }
    cnt = 0;
    for(int i = 2 ,  j = 0;i >= 0;i-- , j++){
     cnt += g[i][j] == 'O';
     cnt -= g[i][j] == 'X';
    }
    if(cnt == 2) {
     for(int i = 2 ,  j = 0;i >= 0;i-- , j++)g[i][j] = 'O';
     print(g);
    }
    cout << "false\n";
    ///cout << "answer" << endl;
}
