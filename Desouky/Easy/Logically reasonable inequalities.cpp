#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

vector<int>nodes;
vector<bool> vis;

vector<int> graph[100];
bool notValid(int cur)
{
    if(vis[cur])
        return true;

    vis[cur] = true;
    for(auto adj: graph[cur]){
        if(notValid(adj))
            return true;
    }
    vis[cur]=false;
    return false;
}

bool isCyclic()
{
    vis.resize(100 , false);
    for(int x=0;x<nodes.size();x++)
    {
        vis[nodes[x]] = true;
        for(auto adj : graph[nodes[x]]){
            if(notValid(adj))
                return true;
        }
        vis[nodes[x]] = false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        string row;
        getline(cin, row);
        graph[row[0]-'A'].push_back(row[4]-'A');
        nodes.push_back(row[0]-'A');
        nodes.push_back(row[4]-'A');
    }
    cout<<(isCyclic() ? "contradiction" : "consistent");
}
