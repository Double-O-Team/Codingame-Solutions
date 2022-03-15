#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
**/

int main()
{
  string message;
  getline(cin, message);
  char answer[message.size()*7 + 1];
  int ln = message.size() * 7 + 1;
  stack<int> bits;

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;
  for (int i = 0; i < message.size(); i++) {
    int n = (i+1) * 7;
    int a = (int)message[i];
    for (int j = n; j > n - 7; j--) {
      if (a == 0) {
        answer[j] = '0';
      }
      else {
        if (a % 2 == 0)
          answer[j] = '0';
        else
          answer[j] = '1';
        a /= 2;
      }
    }
  }
  for (int i = 1; i < ln; i++) {
    int counter = 0;
    if (answer[i] == '1') {
      while(i < ln) {
        if (answer[i] == '0') {
          i--;
          break;
        }
        counter++;
        i++;
      }
      cout << "0 ";
      while (counter--) cout << "0";
      if (i < ln-1)
        cout << ' ';
    }
    else {
      while (i < ln) {
        if (answer[i] == '1') {
          i--;
          break;
        }
        counter++;
        i++;
      }
      cout << "00 ";
      while (counter--) cout << "0";
      if (i < ln-1)
        cout << ' ';
    }
  }
  cout << endl;

}
/*
  for (int i = 0; i < message.size(); i++) {
    int n = (int)message[i];
    while (n) {
      bits.push(n%2 != 0);
      n /= 2;
    }
  }
  if (bits.size() < 7) {
    cout << "00 ";
    for (int i = bits.size(); i < 7; i++)
      cout << "0";
    cout << " ";
  }
  while (!bits.empty()) {
    int counter = 0;
    if (bits.top() == 1) {
      while (!bits.empty()) {
        if (bits.top() != 1)
          break;
        counter++;
        bits.pop();
      }
      cout << "0" << " ";
      while (counter--) cout << "0";
      if (!bits.empty())
        cout << " ";
    }
    else {
      while (!bits.empty()) {
        if (bits.top() != 0)
          break;
        counter++;
        bits.pop();
      }
      cout << "00" << " ";
      while (counter--) cout << "0";
      if (!bits.empty())
        cout << " ";
    }
  }
  cout << endl;
*/
