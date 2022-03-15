#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

char ch[300][300];
int dx[]={1,0,-1,0,1,1,-1,-1};
int dy[]={0,1,0,-1,-1,1,1,-1};
int n,m;
bool valid(int r,int c)
{
    return (r>=0&&r<n&&c>=0&&c<m);
}
void solve(int r, int c)
{
    for(int i=0;i<8;i++)
    {
        int nr=r+dx[i];
        int nc=dy[i]+c;
        if(valid(nr,nc)&&ch[nr][nc]!='x')
        {
            int num=ch[nr][nc]-'0';
            num++;
            ch[nr][nc]=num+'0';
        }
    }
}
int main()
{
    int w;
    cin >> w; cin.ignore();
    int h;
   
    cin >> h; cin.ignore();
     n=h;m=w;
    for (int i = 0; i < h; i++) {
        string line;
        getline(cin, line);
        for(int j=0;j<m;j++)
        {
            ch[i][j]=line[j];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ch[i][j]=='.')ch[i][j]='0';
        }
    }
  
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ch[i][j]=='x')
            {
                solve(i,j);
            }
        }
    }
  //  cout<<"mm\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ch[i][j]=='0'||ch[i][j]=='x')ch[i][j]='.';
            cout<<ch[i][j];
        }
        cout<<endl;
    }
    
    
}
