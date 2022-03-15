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
long long sum(int a[],bool b [],int n)
{
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        if(b[i])
        ans+=a[i];
    }
    return ans;
}
int main()
{
    int n;
    int m;
    int c;

    cin >> n >> m >> c; cin.ignore();
    int div[n];
    for (int i = 0; i < n; i++) {
        int nx;
        cin >> div[i]; cin.ignore();
    }
    int mxi=-1e9;
    bool a[n];
    memset(a,false,sizeof(a));
    bool ans=true;
    for (int i = 0; i < m; i++) {
        int mx;
        cin >> mx; cin.ignore();
        if(a[mx-1])
        a[mx-1]=false;
        else
         a[mx-1]=true;
         int tmp=sum(div,a,n);
        if(tmp>c)
        ans=false;
        else
        mxi=max(mxi,tmp);
        
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
if(!ans)
{
    cout<<"Fuse was blown.";
    
}
else
{
    cout<<"Fuse was not blown."<<endl;;
cout<<"Maximal consumed current was "<< mxi <<" A.";
}
    cout << endl;
   
}