#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int v;
vector<string> path;
vector<int>tree[150];
bool dfs(int node){
    if(node == v) return true;
    if((!tree[node].empty())){
        if(dfs(tree[node][0])){
            path.push_back("Left");
            return true;
        }
    }
    if(tree[node].size() > 1 ){ 
        if(dfs(tree[node][1])){
            path.push_back("Right");
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n; cin.ignore();
    cin >> v; cin.ignore();
    int m;
    cin >> m; cin.ignore();
    int root = 0;

    for (int i = 0; i < m; i++) {
        int p;
        int l;
        int r;
        cin >> p >> l >> r; cin.ignore();
        if(i == 0) root = p;
        tree[p].push_back(l);
        tree[p].push_back(r);
    }

    if(root == v){
        cout<<"Root";
        return 0;
    }

    dfs(root);
    reverse(path.begin() , path.end());
    for(int x = 0; x<path.size(); x++){
        cout<<path[x];
        if(x != path.size()-1)cout<<" ";
    }
}
