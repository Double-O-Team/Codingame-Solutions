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

int main()
{
    string expression;
    cin >> expression; cin.ignore();
    stack<char>s;
    for(auto ch:expression)
    {
        if(ch=='['||ch=='('||ch=='{')s.push(ch);
        else if(ch==']'||ch==')'||ch=='}')
        {
            if(s.empty())return cout<<"false\n",0;
            if(ch=='}'&&s.top()=='{')s.pop();
            else if(ch==']'&&s.top()=='[')s.pop();
            else if(ch==')'&&s.top()=='(')s.pop();
            else 
            {
             
               return cout<<"false\n",0;
            }
        }
    }
    if(s.empty())
    cout<<"true\n";
    else cout<<"false\n";
}
