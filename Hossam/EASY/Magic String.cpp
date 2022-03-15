#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

string all[500];
string ss="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
map<char ,int >mp;
int main()
{
    int n;
    cin >> n; cin.ignore();
    for(int i=0;i<ss.size();i++)mp[ss[i]]=i;
    for (int i = 0; i < n; i++) {
        string str;
        cin>>str;
        all[i]=str;
    }
    sort(all,all+n);
  
    string ans="";
    bool f=0;
    
        int s=n/2-1;
        int mid=n/2;
        int i=0;
       
        while(i<all[s].size()&&i<all[mid].size())
        {
            int ch=all[s][i];
            int cc=all[mid][i];
            if(ch<cc&&i==all[s].size())
            {
                f=1;
                ans+=ch;
                break;
            }
            if(i==all[s].size()-1&&i==all[mid].size()-1&&ch<cc)
            {
                f=1;
                ans+=ch;
                break;
            }
            for(int j=mp[ch]+1;j<=mp[cc];j++)
            {   if(mp[cc]==j&&i==all[mid].size()-1)break;
               
                  f=1;
                ans+=ss[j];
                break;
            }
            
            if(f)break;
            ans+=ch;
            
            i++;
        }
        while(ans<all[s]&&i<all[s].size())
        {
            
            ans+=all[s][i];
            i++;
        }
       
  cout<<ans<<endl;
   
}
