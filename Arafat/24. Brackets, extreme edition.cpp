//https://www.codingame.com/training/easy
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string str;
    cin >> str;
    cin.ignore();
    stack<char>s1;
    for(ll i =0; i<str.size(); i++)
    {
        if(str[i] != '(' && str[i] != '[' && str[i] != '{' && str[i] != ')' && str[i] != ']' && str[i] != '}') continue;
        if(str[i] == '(' || str[i] == '[' || str[i] == '{') s1.push(str[i]);
        if(str[i] == ')' || str[i] == ']' || str[i] == '}')
        {
            if(s1.empty())
            {
                cout<<"false";
                return 0;
            }
            if(s1.top() == '(' && str[i] != ')')
            {
                cout<<"false";
                return 0;
            }
            if(s1.top() == '[' && str[i] != ']')
            {
                cout<<"false";
                return 0;
            }
            if(s1.top() == '{' && str[i] != '}')
            {
                cout<<"false";
                return 0;
            }
            else
            {
                s1.pop();
            }

        }
    }
    if(!s1.empty())
    {
        cout<<"false";
        return 0;
    }
    cout<<"true";

}

/*

*/
