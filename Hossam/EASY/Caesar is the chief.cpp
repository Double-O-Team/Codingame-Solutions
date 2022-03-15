

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string str[200];
string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string text;
map<char,int>mp;
 int l=0;
string wanted="CHIEF";
bool up(int more)
{
    for(int i=0;i<l;i++)
    {
        string tmp="";
      for(int j=0;j<str[i].size();j++)
      {
          char ch=str[i][j];
          int num=mp[ch]+more;
          if(num>25)
          {
              int nn=(num)-mp[ch];
              nn=nn-(25-mp[ch]);
              num=nn-1;
          }
          tmp+=s[num];
         
      }
    
      if(tmp==wanted)return 1;
    }
    return 0;
}
bool down(int more)
{
    for(int i=0;i<l;i++)
    {
        string tmp="";
      for(int j=0;j<str[i].size();j++)
      {
          char ch=str[i][j];
          int num=mp[ch]-more;
          if(mp[ch]-more<0)
          {
              num=more-(mp[ch]+1);
              num=25-num;
          }
         tmp+=s[num];
      }
      if(tmp==wanted)return 1;
    }
    return 0;
}
int main()
{
      getline(cin, text);
      for(int i=0;i<s.size();i++)mp[s[i]]=i;
      string c="";
     
      for(int i=0;i<text.size();i++)
      {
          if(text[i]==' ')
          {
              str[l++]=c;
              c="";
              continue;
          }
          c+=text[i];
      }
      str[l++]=c;
      int ans=1e6;
      for(int i=0;i<=26;i++)
      {
          bool f=up(i);
          bool fg=down(i);
          if(f)
          {
              ans=i;
              break;
          }
          if(fg){
              
              ans=i*-1;
              break;
          }
      }
    if(ans==1e6)return cout<<"WRONG MESSAGE\n",0;
    string tmp="",mm="";
    for(int i=0;i<l;i++)
    {
        
        tmp="";
        for(int j=0;j<str[i].size();j++)
        {
            char ch=str[i][j];
            int num=mp[ch]+ans;
              if(num>25)
              {
                 
                  num=ans-(25-mp[ch])-1;
                  
              }
             else if(num<0)
              {
                 
                  num=abs(ans)-(mp[ch]+1);
                  num=25-num;
              }
            tmp+=s[num];
        }
      cout<<tmp;
        if(i<l-1)cout<<" ";
    }
   
    return 0;
}
