#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
vector<vector<int>>v(30);
map<string,int>mp;
int vist[40];
bool f=0;
map<int ,int>save;
void dfs(int node)
{
    save[node]=1;
    if(vist[node])
    {
        f=1;
        return ;
    }
    if(f)return;
    for(auto child:v[node])
    {
        vist[node]=1;
        dfs(child);
        vist[node]=0;
    }
}
int main()
{
    int n;
    cin >> n; cin.ignore();
    int l=1;
    for (int i = 0; i < n; i++) {
        string row;
        getline(cin, row);
        string str="";
        string arr[4];
        int j=0;
        arr[0]=row[0];
        arr[2]=row[4];
       if(!mp[arr[0]])mp[arr[0]]=l++;
       
       if(!mp[arr[2]])mp[arr[2]]=l++;
      
       v[mp[arr[0]]].push_back(mp[arr[2]]);  
    }
    
   for(int i=1;i<30;i++)
   {
       if(!save[i])dfs(i);
   }
  (f)?cout<<"contradiction\n":cout<<"consistent";
}
