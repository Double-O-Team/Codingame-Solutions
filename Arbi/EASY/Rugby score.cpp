#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
vector <vector<int>> ans;

int main()
{
    int n;
    cin >> n; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    //cout << "tries transformations penalties" << endl;
    for(int i = 0;i <= n;i++){
     for(int j = 0;j <= i;j++){
      for(int k = 0;k <= n;k++){
       int res = i * 5 + j * 2 + k * 3;
       if(res == n){
        ans.push_back({i , j , k});   
       }
      }
     }
    }
    for(auto it : ans){
        cout << it[0] << ' ' << it[1] << ' ' << it[2] << endl;
    }
}
