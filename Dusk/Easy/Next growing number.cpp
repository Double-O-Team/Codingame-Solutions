#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool check(string s)
{
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]>s[i+1])
        return false;
    }
    return true;
}
string next(string  s)
{

    int count =0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='9')
        count++;
    }
    if(count==s.length())
    {
        string ans="1";
        for(int i=0;i<count;i++)
        ans+='0';
        return ans;
    }
    int index=s.length()-1;
    while(s[index]=='9')
    {
        s[index]='0';
        index--;
        
    }
    s[index]=((s[index]-'0')+1)+'0';
    return s;
}
/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string n;
    getline(cin, n);
  n=next(n);
  for(int i=0;i<n.length();i++)
  {
if(n[i]>n[i+1])
{
    char x=n[i];
while(i<n.size())
{
    n[i]=x;
    i++;

}
   
  }}

    cout << n<< endl;
}
