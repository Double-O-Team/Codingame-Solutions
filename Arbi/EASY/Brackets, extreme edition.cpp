#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "bits/stdc++.h"

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
bool valid(string cur) {
 cerr << cur << '\n';
  stack <char> stk;
  for(auto it : cur) {
    if(it != '(' && it != ')' && it != '{' && it != '}' && it != '[' && it != ']')continue;
    if(it == '(' || it == '{' || it == '[')stk.push(it);
    else if(it == ')' || it == '}' || it == ']'){
     if(stk.empty())return false;
     if(it == ')'){
      if(stk.top() != '(')return false;   
     } else if(it == '}'){
      if(stk.top() != '{')return false;  
     } else {
       if(stk.top() != '[')return false;  
     }
     stk.pop();
    }
  }
  return stk.empty();
}
int main()
{
    string expression;
    cin >> expression; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
   if(valid(expression)) {
       cout << "true\n";
   } else {
       cout << "false\n";
   }
}
