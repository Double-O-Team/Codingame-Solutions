#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

long long n;

int main()
{
   cin>>n;
   long long m=n;
   long long ans=0;
   int cnt=0;
   int i=1;
   n*=n;
   while(i<=n)
   {
       ans+=i;
       if(i==n)break;
       cnt++;
       i+=m-1;
      // cout<<i<<endl;
       if(cnt==4)
       {
           m-=2;
           cnt=0;
       }
       if(m<0)break;
   }
   cout<<ans<<endl;
}
