#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

bool solve(string str){
    stack<char>s;
    for(int x = 0; x<str.size(); x++){
        if(str[x] !='(' and str[x] !=')' and str[x] !='{' and str[x] != '}' and str[x] != '[' and str[x]!=']') continue;
        if(str[x] == '(' or str[x] == '{' or str[x] == '[') s.push(str[x]);
        else {
            if(s.empty())return false;
            if(str[x] == ')'){
                if(s.top() == '(')s.pop();
                else return false;
            }else if(str[x] == '}'){
                if(s.top() == '{')s.pop();
                else return false;
            }else if(str[x] == ']'){
                if(s.top() == '[')s.pop();
                else return false;
            }
        }
    }
    if(s.size() == 0)return true;
    else {return false;}
}

int main()
{
    string expression;
    cin >> expression; cin.ignore();
    cout<<(solve(expression) == 1? "true":"false");

}
