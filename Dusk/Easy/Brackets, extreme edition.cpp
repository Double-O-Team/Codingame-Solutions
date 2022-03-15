#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string s;
    cin >>s; cin.ignore();
    bool right=true;
    stack<char>data;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=')'&&s[i]!='('&&s[i]!='{'&&s[i]!='}'&&s[i]!='['&&s[i]!=']')
        continue;
        if(s[i]=='('||s[i]=='['||s[i]=='{')
        data.push(s[i]);
        else
        {
            if(data.size()<=0&&(s[i]==')'||s[i]==']'||s[i]=='}'))
            {
                right=false;
            }
             if(data.size()<=0)
                continue;

            if(s[i]==')'&&(data.top()!='('))
            right=false;
            if(s[i]=='}'&&(data.top()!='{'))
              right=false;
            if(s[i]==']'&&(data.top()!='['))
              right=false;
              data.pop();
        }
    }
  
if(data.size()!=0||!right)
cout<<"false";
else
cout<<"true";
    cout  << endl;
}
