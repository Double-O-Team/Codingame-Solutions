#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

map<char, vector<vector<char>>> mp;
string grid[40];

int main()
{
    int l;
    cin >> l; cin.ignore();
    int h;
    cin >> h; cin.ignore();

    string t;
    getline(cin, t);

    for (int i = 0; i < h; i++){
        string row;
        getline(cin, row);
        grid[i] = row;
    }

    int ch = 0;
    for(int hi = 0; hi<h; hi++){
        for(int x = 0; x<t.size(); x++){
            if(t[x] >='a' and t[x]<='z') {
                t[x] = t[x] - 'a' + 'A';
                for(int y = ( t[x] - 'A' ) * l; y< ( t[x] - 'A' ) * l + l; y++){
                    cout<<grid[hi][y];
                }
            }
            else if(t[x]>='A' and t[x]<='Z'){
                t[x] = t[x];
                for(int y = ( t[x] - 'A' ) * l; y< ( t[x] - 'A' ) * l + l; y++){
                    cout<<grid[hi][y];
                }
            }
            else {
                for(int y = ( 'Z' - 'A' + 1) * l; y < ( 'Z' - 'A' + 1) * l + l; y++){
                    cout<<grid[hi][y];
                }
            }

           
        }
        cout<<"\n";
    }
}
