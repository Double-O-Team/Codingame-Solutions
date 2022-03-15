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
 vector<vector<pair<string,int>>>nodes(200);
bool f=0;
void dfs(int node,string ans,int target)
{
    if(node==target)
    {
        cout<<ans<<endl;
        f=1;
    }
    if(f)return;

    for(auto child: nodes[node] )
    {
        dfs(child.second,ans+(ans.size()?" ":"")+child.first,target);
    }
}
int main()
{
    int n;
    cin >> n; cin.ignore();
    int v;
    cin >> v; cin.ignore();
    int m;
    cin >> m; cin.ignore();
  
    int root=1;
    for (int i = 0; i < m; i++) {
        int p;
       
        int l;
        int r;
        cin >> p >> l >> r; cin.ignore();
        if(i==0)root=p;
        nodes[p].push_back({"Left",l});
        nodes[p].push_back({"Right",r});
    }
   
    if(root==v)cout<<"Root\n";
    else
    dfs(root,"",v);
   
 
}
