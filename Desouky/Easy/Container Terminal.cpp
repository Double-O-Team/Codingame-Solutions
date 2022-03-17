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

int main()
{
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
        set<char>ans;
        ans.insert(line[0]);
        for(int x = 1; x<line.size(); x++){
            bool flag = false;
            char val;
            for(auto it : ans){
                if(line[x] <= it){
                    val = it;
                    flag = true;
                    break;
                }
            }
            if(flag){
                ans.erase(val);
                ans.insert(line[x]);
            }else{
                ans.insert(line[x]);
            }
        }
        cout<<ans.size()<<endl;
    }
}
