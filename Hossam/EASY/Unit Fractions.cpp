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
 long long  y;
bool sub(long long n,long long x)
{
    long long dwon=n*x;
    long long up=x-n;
    long long gcd=__gcd(up,dwon);
    y=dwon/gcd;
    up=up/gcd;
   return (up==1);

}
int main()
{
    int n;
    cin >> n; cin.ignore();
    map<int,int>mp;
    for(long long i=n+1;i<n+2e5;i++)
    {
        bool res=sub(n,i);
        if(mp[i])continue;
        if(res)
        {
            cout<<"1/"<<n<<" = "<<"1/"<<y<<" + "<<"1/"<<i<<endl;
            mp[i]=mp[y]=1;
        }
    }
  

    
}
