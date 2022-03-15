#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int org[200][200];
int arr[200][200];
int ans[200][200];
int n,m,h,w;

int dowork(int r,int c)
{
    int sum=0;
    for(int i=r,k=0;i<r+h;i++,k++)
    {
        for(int j=c,g=0;j<c+w;j++,g++)
       {
            sum+=org[i][j]*arr[k][g];   
           // cout<<i<<" "<<j<<endl;
       }
    }
  //  cout<<"sum = "<<sum<<endl;
    return sum;
}

int main()
{
 
    cin >> n >> m; cin.ignore();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          
            cin >> org[i][j]; cin.ignore();
        }
    }
    cin >> h >> w; cin.ignore();
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> arr[i][j]; cin.ignore();
        }
    }
    int r=0,c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i+h<=n&&j+w<=m)
            {
                int res=dowork(i,j);
               
                ans[i][j]=res;
                r=i+1;c=j+1;
            }
        }
    }
 
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<ans[i][j];
            if(j<c-1)cout<<" ";
        }
        cout<<endl;
    }
    
   
}
