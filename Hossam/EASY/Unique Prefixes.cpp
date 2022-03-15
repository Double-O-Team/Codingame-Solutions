#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

map<string ,int>mp;
string all[500];
int main()
{
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word; cin.ignore();
        string str="";
        for(int j=0;j<word.size();j++)
        {
            str+=word[j];
            mp[str]++;
        
        }
        all[i]=word;
    }
    for (int i = 0; i < n; i++) {
        string str="";
        bool f=0;
      for(int j=0;j<all[i].size();j++)
      {
          str+=all[i][j];
          if(mp[str]==1)
          {
              cout<<str<<endl;
              f=1;
              break;
          }
      }
      if(!f)cout<<str<<endl;
    }
}
