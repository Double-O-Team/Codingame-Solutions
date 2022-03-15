#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int n,m;
char ch [200][200];
vector<pair<int ,int >>v;
int ans=0;
char answer[200][200];
bool valid(int r,int c)
{
    return (r>=0&&r<n&&c>=0&&c<m);
}
void solve(int r, int c)
{
    bool flag=1;
   
    for(auto i : v)
    {
        int nr=i.first+r;
        int nc=i.second+c;
        if(valid(nr,nc)&&ch[nr][nc]=='.')ch[nr][nc]='*';
        else {flag=0; break;}
    }
    if(flag&&ans==0)
    {
     
        answer[r][c]='*';
        
         for(int i=0;i<n;i++)
           {
               for(int j=0;j<m;j++)
               {
                   if(i==r&&c==j)continue;
                   answer[i][j]=ch[i][j];
               }
           }
    }
    for(auto i : v)
    {
        int nr=i.first+r;
        int nc=i.second+c;
        if(valid(nr,nc)&&ch[nr][nc]=='*')ch[nr][nc]='.';
        else {break;}
    }
    if(flag)ans++;
}
int main()
{
   cin>>n>>m;
   int p1=-1,p2;
   
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           char c;
           cin>>c;
           if(c=='*'&&p1==-1)
           {
               p1=i,p2=j;
           }
           else if(c=='*')
           {
               v.push_back({i-p1,j-p2});
           }
       }
   }
   cin>>n>>m;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cin>>ch[i][j];
       }
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if(ch[i][j]=='.')solve(i,j);
       }
   }
   if(ans==1)
   {
       cout<<ans<<endl;
         for(int i=0;i<n;i++)
           {
               for(int j=0;j<m;j++)
               {
                   cout<<answer[i][j];
               }
               cout<<endl;
           }
   }
   else cout<<ans<<endl;
   
  
}
