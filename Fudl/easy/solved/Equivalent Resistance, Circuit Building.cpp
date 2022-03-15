#include <ctype.h>
#include <iomanip>
#include <cstdio>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
**/

int main()
{
  int n;
  cin >> n; cin.ignore();
  map<string,double> var;
  for (int i = 0; i < n; i++) {
    string name;
    double r;
    cin >> name >> r; cin.ignore();
    var[name] = r;
  }
  stack<string> ch;
  stack<double> val;
  char temp = '1';
  string circuit;
  getline(cin, circuit);
  for (int i = 0; i < circuit.size(); i++) {
    if (circuit[i] == '[' || circuit[i] == '(')
      ch.push(circuit.substr(i,1));
    else if (isalpha(circuit[i])) {
      string temp = "";
      while (i < circuit.size()) {
        temp += circuit.substr(i,1);
        i++;
        if (!isalpha(circuit[i])) {
          val.push(var[temp]);
          ch.push(temp);
          i--;
          break;
        }
      }
    }
    else if (circuit[i] == ')') {
      double value = 0;
      while (!ch.empty()) {
        if (ch.top() == "(") {
          val.push(value);
          ch.pop();
          ch.push("a");
          break;
        }
        // value += top
        value += val.top();
        val.pop();
        ch.pop();
      }
    }
    else if (circuit[i] == ']') {
      double value = 0;
      while (!ch.empty()) {
        if (ch.top() == "[") {
          val.push(1/value);
          ch.pop();
          ch.push("a");
          break;
        }
        // value += 1/top
        value += 1/val.top();
        val.pop();
        ch.pop();
      }
    }
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  cout << fixed << setprecision(1) << val.top() << endl;
}
