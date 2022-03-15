#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
char get(char x,int shift)
{
    int ans=(x-'A')-shift;
  
    while(ans<=0)
    {
        ans+=26;
    }
    //   if(x=='F')cout<<ans<<endl;
    return (ans%26)+'A';
}
int main()
{
    string s;
    getline(cin, s);
    int rightShift=-1;

   for(int i=0;i<=100;i++)
   {string tmp;
for(int j=0;j<s.length();j++)
{
    if(s[j]==' ')
    {
        if(tmp=="CHIEF")
        {
            rightShift=i;
            break;
        }
        tmp.clear();
    }
    else
    tmp+=get(s[j],i);


}
  if(tmp=="CHIEF")
        {
            rightShift=i;
            break;
        }
        tmp.clear();

if(rightShift!=-1)
break;
   }

   if(rightShift==-1)
   {
 cout<<"WRONG MESSAGE"<<endl;
 return 0;
   }
// cout<<rightShift<<endl;
  string ans;
  for(int i=0;i<s.length();i++)
  {
      if(s[i]!=' ')
      {
          ans+=get(s[i],rightShift);
        //   cout<<s[i]<<" "<<(int)get(s[i],rightShift)<<endl;
      }
      else
      ans+=s[i];
  }
  cout<<ans<<endl;
}
