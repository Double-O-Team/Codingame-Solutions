#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()

map<char, vector<char>> graph;
map<char, int> color;

bool cycle(char node) {
    color[node] = 1;
    for(auto child : graph[node]) {
        if(color[child] == 0) {
            if(cycle(child))return true;
        } else if(color[child] == 1)return true;
    }
    color[node] = 2;
    return false;
}
int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    cin.ignore();
    bool valid = false;
    for (int i = 0; i < n; i++) {
        string row;
        getline(cin, row);
        char a = row[0];
        char b = row.back();
        cerr << a << ' ' << b << endl;
        graph[a].push_back(b);
    }
    for(char i = 'A'; i <= 'Z'; i++) {
        if(color[i] == 0 && cycle(i) ) {
           return  cout << "contradiction\n" , 0;
        }
    }
    cout << "consistent\n";
}

