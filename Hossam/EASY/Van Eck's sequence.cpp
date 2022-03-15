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
long long mp[(long long)1e7 ];
int main()
{
    int a1;
    cin >> a1; cin.ignore();
    int n;
    cin >> n; cin.ignore();
    int num=a1;
    for(int i=1;i<n;i++)
    {
        int res=0;
        if(mp[num])
         res=i-mp[num];
        //cout<<num<<" ";
        mp[num]=i;
        num=res;
    }
    cout<<num<<endl;
 

   
}
