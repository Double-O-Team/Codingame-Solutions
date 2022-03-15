#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int arr[20][20];

bool square(int r,int c,int s)
{
 set<int>st;
    for(int i=1;i<10;i++)st.insert(i);
    for(int i=r;i<r+3;i++)
    {
        for(int j=s;j<=c;j++)
        {
            st.erase(arr[i][j]);
        }
    }
    return (st.size()==0);
}
bool rowcol(int r,int c)
{
    set<int>row,col;
    for(int i=1;i<10;i++)row.insert(i),col.insert(i);
    for(int i=0;i<9;i++)
    {
        row.erase(arr[r][i]);
    }
    for(int i=0;i<9;i++)
    {
        col.erase(arr[i][c]);
    }
    return (!row.size()&&!col.size());
}
int main()
{
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int n;
            cin >> n; cin.ignore();
            arr[i][j]=n;
        }
    }
    
      for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
             
        bool f=rowcol(i,j);
        if(!f)
        {
            cout<<"false\n";
            return 0;
        }
        }
    }
    int f=1;
    for(int i=0;i<9;i+=3)
    {
        f*=square(i,2,0);
        f*=(i,6,3);
        f*=square(i,9,6);
    }
    (f)?cout<<"true\n":cout<<"false\n";
   
}
