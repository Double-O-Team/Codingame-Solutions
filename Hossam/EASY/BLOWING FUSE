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
int arr[300];
map<int ,int>mp;
int main()
{
    int n;
    int m;
    int c;
    cin >> n >> m >> c; cin.ignore();
    for (int i = 0; i < n; i++) {
        int nx;
        cin >> nx; cin.ignore();
        arr[i]=nx;
    }
    int sum=0;
    int ans=0;
    bool f=0;
    for (int i = 0; i < m; i++) {
        int mx;
        cin >> mx; cin.ignore();
        if(!mp[mx])
        {
            mp[mx]=1;
            sum+=arr[mx-1];
            if(sum>c)f=1;
            ans=max(ans,sum);
        }
        else
        {
            mp[mx]=0;
            sum-=arr[mx-1];
        }
    }
    
    (f)?
    cout << "Fuse was blown." << endl:
    cout << "Fuse was not blown.\nMaximal consumed current was "<<ans<<" A." << endl;
}
