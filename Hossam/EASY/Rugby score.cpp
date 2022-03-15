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
 vector<vector<int>>v;
int main()
{
    int n;
    cin >> n; cin.ignore();

   for(int i=0;i<100;i++)
   {
       for(int j=0;j<=i;j++)
       {
          
           for(int k=0;k<100;k++)
           {
               if((i*5)+(j*2)+(k*3)==n)
               {
                  
                   vector<int>ans;
                   ans.push_back(i);
                   ans.push_back(j);
                   ans.push_back(k);
                   v.push_back(ans);
               }
           }
           
       }
   }
   for(auto i : v)
   {
       int l=0;
       for(auto j : i)
       {
           cout<<j;
           if(l<2)cout<<" ";
           l++;
       }
       cout<<endl;
   }

   
}
