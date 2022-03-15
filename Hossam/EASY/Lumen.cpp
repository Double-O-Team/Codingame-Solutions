#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

char ch[200][200];
int n;
bool valid(int r,int c)
{
    return  (r>=0&&r<n&&c>=0&&c<n);
}
int dx[]={1,0,-1,0,-1,1,1,-1};
int dy[]={0,1,0,-1,-1,1,-1,1};
map<pair<int ,int >,int >mp;
void solve(int r,int c)
{
    int num=ch[r][c]-'0';
    num--;
    for(int i=0;i<8;i++)
    {
        int nr=r+dx[i];
        int nc=c+dy[i];
        if(valid(nr,nc))
        {
            if(ch[nr][nc]=='X')
            ch[nr][nc]=num+'0';
            else 
            {
                int nn=ch[nr][nc]-'0';
                if(num>nn)
                {
                    ch[nr][nc]=num+'0';
                    mp[{nr,nc}]=0;
                }
            }
        }
    }
}

int main()
{
    
    cin >> n; cin.ignore();
    int l;
    cin >> l; cin.ignore();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char cell;
            cin >> cell; cin.ignore();
            ch[i][j]=cell;
            if(ch[i][j]=='C')
            {
                ch[i][j]=l+'0';
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ch[i][j]!='X')
            {
                int nn=ch[i][j]-'0';
                if(nn==l)
                {
                    solve(i,j);
                    mp[{i,j}]=1;
                }
            }
        }
    }
    int k=0;
    while(k<300)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(ch[i][j]!='X'&&!mp[{i,j}])
                {
                    int num=ch[i][j]-'0';
                    if(num>1)
                        solve(i,j);
                    mp[{i,j}]=1;
                }
            }
        }
        k++;
    }

    int ans=0;
     for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(ch[i][j]=='X')
                {
                  ans++;
                }
            }
        }
cout<<ans<<endl;
   
}
