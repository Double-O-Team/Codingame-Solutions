#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "bits/stdc++.h"

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    cin >> n; cin.ignore();
    int v;
    cin >> v; cin.ignore();
    int m;
    cin >> m; cin.ignore();
    map<int , pair<int , string>>parents;
    for(int i = 0;i <= n;i++) {
        parents[i] = make_pair(0 , "");
    }
    for (int i = 0; i < m; i++) {
        int p;
        int l;
        int r;
        cin >> p >> l >> r; cin.ignore();
        parents[l] = make_pair(p , parents[p].second + "Left ");
        parents[r] = make_pair(p , parents[p].second + "Right ");
    }
    if(parents[v].second.empty()){
     cout << "Root";
    } else {
    // to delete space
     parents[v].second.pop_back();
     cout << parents[v].second << '\n';
    }
    //cout << "tree_path" << endl;
}
