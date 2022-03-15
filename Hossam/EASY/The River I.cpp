#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


map<long long ,int>mp;
int main()
{
    long long r_1;
    cin >> r_1; cin.ignore();
    long long r_2;
    cin >> r_2; cin.ignore();
    long long r=r_1,c=r_2;
    for(int i=0;i<2e5;i++)
    {
        long long tr=r;
        mp[r]++;
        int sum=0;
        while(r)
        {
            sum+=r%10;
            r/=10;
        }
        r=tr+sum;
    }
    for(int i=0;i<2e5;i++)
    {
        long long tc=c;
        mp[c]++;
        if(mp[c]>1)
        {
            cout<<c<<endl;
            break;
        }
        int sum=0;
        while(c)
        {
            sum+=c%10;
            c/=10;
        }
        c=tc+sum;
    }

    
}
