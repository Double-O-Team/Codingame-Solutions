#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int n,m; 
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
char ch[200][200];
bool valid(int r,int c)
{
    return (r>=0&&r<n&&c>=0&&c<m);
}
int ans[200][200];
void solve(int r,int c)
{
    int cnt=0;
    for(int i=0;i<4;i++)
    {
        int nr=r+dx[i];
        int nc=c+dy[i];
        if(valid(nr,nc)&&ch[nr][nc]=='0')cnt++;
    }
    cerr<<cnt<<endl;
    ans[r][c]=cnt;
    cerr<<ans[r][c]<<" ";
}
int main()
{
    int width;
    int height;
    cin >> width >> height; cin.ignore();
    n=height,m=width;
    for (int i = 0; i < height; i++) {
        string line;
        cin >> line; cin.ignore();
        for(int j=0;j<line.size();j++)
        {
            ch[i][j]=line[j];
            cerr<<ch[i][j]<<" ";
        }
        cerr<<endl;
    }
    for (int i = 0; i < height; i++) {

      for(int j=0;j<width;j++)
      {
          if(ch[i][j]!='#')
          {solve(i,j);
          cout<<ans[i][j];
        
          }
          else {
              cout<<'#';
             
          }
        //   cout<<endl;
      }
     cout<<endl;
    }

}
