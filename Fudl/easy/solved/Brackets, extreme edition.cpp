#include <iostream>
#include <stack>
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
  string expression;
  cin >> expression; cin.ignore();
  stack<char> ch;
  for (int i = 0; i < expression.size(); i++) {
    if (expression[i] == '[' || expression[i] == '{' || expression[i] == '(')
      ch.push(expression[i]);
    else if (expression[i] == ']') {
      if (!ch.empty()) {
        if (ch.top() == '[') ch.pop();
        else return puts("false"), 0;
      }
      else return puts("false"), 0;
    }
    else if (expression[i] == '}') {
      if (!ch.empty()) {
        if (ch.top() == '{') ch.pop();
        else return puts("false"), 0;
      }
      else return puts("false"), 0;
    }
    else if (expression[i] == ')') {
      if (!ch.empty()) {
        if (ch.top() == '(') ch.pop();
        else return puts("false"), 0;
      }
      else return puts("false"), 0;
    }
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;
  if (!ch.empty()) puts("false");
  else puts("true");
}
