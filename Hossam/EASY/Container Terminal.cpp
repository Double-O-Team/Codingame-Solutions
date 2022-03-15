#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int n;
int arr[500];
string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
map<char,int>mp;
vector<int >v;
int main()
{
   cin>>n;cin.ignore();
   for(int i=0;i<s.size();i++)mp[s[i]]=i;
   for(int i=0;i<n;i++)
   {
       string str;
       int ans=0;
       getline(cin,str);
       int l=0;
       for(auto ch :str)
       {
           arr[l++]=mp[ch];
       }
       while(true)
       {
        
           int prv=-1;
           bool flag=0;
           for(int j=l-1;j>=0;j--)
           {
               if(arr[j]==-2)continue;
               if(arr[j]>=prv)
               {
                   prv=arr[j];
                   arr[j]=-2;
                   if(!flag)ans++;flag=1;
               }
               
           }
           if(!flag)break;
       }
      v.push_back(ans);
   }
  for(auto i : v)cout<<i<<endl;
}
