#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int arr[50];
bool sure(int n1,int n2,int n3,int n4,int n5)
{
    int mp[40000];
    for(int i=0;i<10;i++)mp[arr[i]]++;
    int a[6];
    a[0]=n1,a[1]=n2,a[2]=n3,a[3]=n4,a[4]=n5;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            int num=a[i]+a[j];
            if(mp[num])mp[num]--;
            else return 0;
        }
    }
    sort(a,a+5);
    for(int i=0;i<5;i++){cout<<a[i];if(i<4)cout<<" ";}
    return 1;
}
bool solve(int num)
{
    for(int i=0;i<10;i++)
    {
        int n2=arr[i]-num;
        for(int j=i+1;j<10;j++)
        {
              int n3=arr[j]-num;
            for(int k=j+1;k<10;k++)
            {
                  int n4=arr[k]-num;
                for(int h=k+1;h<10;h++)
                {
                      int n5=arr[h]-num;
                    bool f=sure(num,n2,n3,n4,n5);
                    if(f)return 1;
                }
            }
        }
    }
    return 0;
}
int main()
{
  for(int i=0;i<10;i++)
  {
      cin>>arr[i];cin.ignore();
  }
  for(int i=2;i<10;i++)
  {
      int num=arr[0]+arr[1];
      if((num-arr[i])%2==0)
      {
          int nn=(num-arr[i])/2;
          bool f= solve(nn);
          if(f)return 0;
      }
  }
  
}
