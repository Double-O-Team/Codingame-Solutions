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
int solve(string str)
{
    int cnt=0;
    int mx=0;
    for(auto ch:str)
    {
        if(ch=='1')cnt++;
        else cnt=0;
        mx=max(mx,cnt);
    }
    mx=max(mx,cnt);
    return mx;
}    
int main()
{
    string b;
    getline(cin, b);
    int mx=0;
    for(int i=0;i<b.size();i++)
    {
        if(b[i]=='0')
        {
            b[i]='1';
            mx=max(mx,solve(b));
            b[i]='0';
        }
    }
   

    cout << mx << endl;
}
