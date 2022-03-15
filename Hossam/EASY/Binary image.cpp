#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int n;

set<int>st;
string str[500];
 string row[500];
int main()
{
   cin>>n;
    cin.ignore();
   for(int i=0;i<n;i++)
   {
        
        getline(cin, row[i]);
   }
   for(int i=0;i<n;i++)
   {
       int cnt=0;
      
       for(int j=0;j<row[i].size();j++)
       {
           char c=row[i][j];
           
           if(c!=' ')
           {
               int num=c-'0';   
               char ch;
               (cnt&1)?ch='O':ch='.';
                cnt++;
               while(num--)
               {
                   str[i]+=ch;
               }
           }
       }
     //  cout<<str[i]<<endl;
       st.insert(str[i].size());
       if(st.size()>1)return cout<<"INVALID\n",0;
   }
   for(int i=0;i<n;i++)cout<<str[i]<<endl;
   
}
