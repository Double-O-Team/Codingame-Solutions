#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string message;
    getline(cin, message);
    string str=message;
     string cur="";
  for(auto ch:str)
  {
      int num=(int)ch;
      string newstring="" ; 
      while(num)
      {
          (num&1)?newstring+="1":newstring+="0";
          num/=2;
      }
      while(newstring.size()<7)newstring+="0";
         reverse(newstring.begin(),newstring.end());
      cur+=newstring;
  }
  
  
  int n=cur.size();
  int j=0;
  int cnt=0;
  string ans="";
 
  for(int i=0;i<n;i++)
  {
      j=i;
      cnt=0;
      for(;i<n;i++)
      {
          if(cur[i]!=cur[j]){i--;break;}
          cnt++;
      }
      (cur[j]=='0')?ans+="00 ":ans+="0 ";
      for(int k=0;k<cnt;k++)ans+='0';
      if(i<n-1)
      ans+=' ';

  }
  cout<<ans<<endl;

    
}
