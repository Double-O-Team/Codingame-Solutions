#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


char ch[300][300];
bool  sure()
{
    if(ch[0][0]=='O'&&ch[0][1]=='O'&&ch[0][2]=='O')return 1;
    if(ch[1][0]=='O'&&ch[1][1]=='O'&&ch[1][2]=='O')return 1;
    if(ch[2][0]=='O'&&ch[2][1]=='O'&&ch[2][2]=='O')return 1;
    if(ch[0][0]=='O'&&ch[1][0]=='O'&&ch[2][0]=='O')return 1;
    if(ch[0][1]=='O'&&ch[1][1]=='O'&&ch[2][1]=='O')return 1;
    if(ch[0][2]=='O'&&ch[1][2]=='O'&&ch[2][2]=='O')return 1;
    if(ch[0][0]=='O'&&ch[1][1]=='O'&&ch[2][2]=='O')return 1;
    if(ch[2][0]=='O'&&ch[1][1]=='O'&&ch[0][2]=='O')return 1;
return 0;        
    
}
int main()
{
    for (int i = 0; i < 3; i++) {
        string line;
        getline(cin, line);
        for(int j=0;j<line.size();j++)
        {
            ch[i][j]=line[j];
        }
    }
    bool ac=0;
    for(int i=0;i<3;i++)
    {
        bool  f=0;
        for(int j=0;j<3;j++)
        {
            if(ch[i][j]=='.')
            {
                ch[i][j]='O';
                f=sure();
                if(f)break;
                ch[i][j]='.';
            }
        }
        if(f)ac=1;
        if(f)break;
    }
    if(!ac)
    {
        cout<<"false\n";
        return 0;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<ch[i][j];
        }
        cout<<endl;
    }
   
  
}
