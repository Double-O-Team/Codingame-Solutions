#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
 int dx[]={0,1,0,-1};
    int dy[]={1,0,-1,0};
int n,m;
char ch[1000][1000];
bool isvalid(int r,int c)
{
    if(r>=n||r<0||c<0||c>=m)return 0;
    return 1;
}
map<pair<int ,int> ,int>vist;
int solve(int r,int c)
{
    if(!isvalid(r,c))return 0;
    if(ch[r][c]=='#')return 0;
    vist[{r,c}]=1;
    long long  mx=0;
  
    for(int i=0;i<4;i++)
    {
        int nr=r+dx[i];
        int nc=c+dy[i];
        if(vist[{nr,nc}])continue;
        int num=0;
        if(!isalpha(ch[r][c])&&ch[r][c]!=' ')
        {
            num=ch[r][c]-'0';
        }
        mx=max(mx,(long long )solve(nr,nc)+num);
    }
    return mx;
}

int main()
{
    int h;
    int w;
    cin >> h >> w; cin.ignore();
    n=h,m=w;
    int st=0,en=0;
    for (int i = 0; i < h; i++) {
        string row;
        getline(cin, row);
        for(int j=0;j<w;j++)
        {
            ch[i][j]=row[j];
            if(ch[i][j]=='X')st=i,en=j;
        }
    }
    cout<<(long long)solve(st,en)<<endl;
  

   
}
