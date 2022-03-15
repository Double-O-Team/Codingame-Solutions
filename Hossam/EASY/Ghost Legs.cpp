

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n,m;
char ch[200][200];
vector<string>v;
bool valid(int r,int c)
{
    return(r>=0&&r<n&&c>=0&&c<m);
}
char solve(int r ,int c)
{
    map<pair<int ,int >,int>mp;
    char res;
        int j=c;
        for(int i=r;i<n;i++)
        {
           
            if(valid(i,j+1)&&!mp[{i,j+1}]&&ch[i][j+1]=='-')
            {
                j++;
                while(ch[i][j]!='|'){
              
                mp[{i,j}]=1;
                 j++;
                
                }
            }
            if(valid(i,j-1)&&!mp[{i,j-1}]&&ch[i][j-1]=='-')
            {
                j--;
                while(ch[i][j]!='|'){
              
                mp[{i,j}]=1;
                 j--;
                
                }
            }
            res=ch[i][j];
        }
   
    return res;
    
}
int main()
{
  cin>>m>>n;
  cin.ignore();
    string line;
  for(int i=0;i<n;i++)
  {
    
       getline(cin, line);
       m=line.size();
      for(int j=0;j<line.size();j++)
      {
          ch[i][j]=line[j];
      }
  }

  for(int i=0;i<m;i+=3)
  {
      string s="";
      s+=ch[0][i];
      s+=solve(1,i);
      v.push_back(s);
    
  }
  
  for(auto i :v)cout<<i<<endl;
 
    return 0;
}
