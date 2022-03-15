#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int d;
int mx=-1;
bool sure(string str)
{
    int num=0;
    for(int i=0;i<str.size();i++)
    {
        num=(num*10)+(str[i]-'0');
    }
    int lg=log10(num)+1;
    if(num%d==0&&lg==str.size())mx=max(mx,num);
    return (num%d==0);
}
bool solve(int idx,int idx2,string str)
{
    string want="";
    for(int i=0;i<str.size();i++)
    {
        if(i==idx||i==idx2)continue;
       want+=str[i];
    }
    
    return sure(want);
}
int main()
{
    string str;
    cin >> str; cin.ignore();
  
    cin >> d; cin.ignore();
    sure(str);
    for(int i=0;i<str.size();i++)
    {
        solve(i,-1,str);
        
    }
     for(int i=0;i<str.size();i++)
    {
       for(int k=i+1;k<str.size();k++)
       {
            solve(i,k,str);
       }
        
    }
    
    (mx>-1)?cout<<mx<<endl:cout << 0<< endl;
}
