#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[1000];
int main()
{
    int m;
    cin >> m; cin.ignore();
  
    cin >> n; cin.ignore();
    string t;
    getline(cin, t);
    int res=0;
    int l=0;
    for(int i=0;i<t.size();i++)
    {
        if(t[i]==' ')
        {
            arr[l++]=res;
            res=0;
            continue;
        }
        int num=t[i]-'0';
        res=(res*10)+num;
    }
    arr[l++]=res;
    int r=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m+2;j++)
        {
            if(j==0||j==m+1)cout<<"|";
            else 
            {
                if(!arr[r])r++;
                if(r%2==0&&arr[r])
                {
                    cout<<"*",arr[r]--;
                    if(!arr[r])r++;
                }
                else 
                {
                     cout<<" ",arr[r]--;
                    if(!arr[r])r++;
                }
            }
        }
        cout<<endl;
    }
}
