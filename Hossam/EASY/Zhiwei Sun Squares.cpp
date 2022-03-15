#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin >> n; cin.ignore();
    int ans=0;
    for(int i=0;i<=180;i++)
    {
        for(int j=0;j<=180;j++)
        {
            for(int h=0;h<=180;h++)
            {
                int res=pow(i,2)+pow(j,2)+pow(h,2);
                if(res<=n)
                {
                    int rem=n-res;
                    int sqt=sqrt(rem);
                    if(sqt*sqt==rem)
                    {
                        int rs=j+3*h+5*sqt;
                        int s=sqrt(rs);
                        if(s*s==rs)ans++;
                    }
                }else break;
            }
        }
    }
   

    cout << ans << endl;
}
