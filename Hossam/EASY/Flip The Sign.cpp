#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int arr[200][200];
char ch[300][300];
int main()
{
    int height;
    int width;
    cin >> height >> width; cin.ignore();
    for (int i = 0; i < height; i++) {
       for(int j=0;j<width;j++)
       {
           cin>>arr[i][j];
       }
    }
    for (int i = 0; i < height; i++) {
       for(int j=0;j<width;j++)
       {
           cin>>ch[i][j];
       }
    }
    bool flag=1;
    for(int i=0;i<height;i++)
    {
        bool f=0;
        int prv=1e9;
        for(int j=0;j<width;j++)
        {
            if(ch[i][j]=='X')
            {
                if(prv==1e9)
                {
                    if(arr[i][j]>0)f=1;
                    else f=0;
                    prv=1;
                }
                else 
                {
                    if(f&&arr[i][j]>0||!f&&arr[i][j]<0)
                    {
                        return cout<<"false\n",0;
                        
                    }
                   f=!f;
                }
            }
        }
    }
  cout<<"true\n";
}
