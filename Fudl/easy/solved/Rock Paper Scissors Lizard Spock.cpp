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

struct player {
  int val;
  char sign;
  vector<int> wins;
};

int main()
{
  int n;
  cin >> n; cin.ignore();
  stack<player> f, s;
  for (int i = 0; i < n; i++) {
    player a;
    cin >> a.val >> a.sign; cin.ignore();
    f.push(a);
  }
  while (1) {
    if (f.empty()) {
      while (!s.empty()) {
        f.push(s.top());
        s.pop();
      }
    }
    if (f.size() == 1)
      break;
    player a, b;
    a = f.top();
    f.pop();
    b = f.top();
    f.pop();
    if (a.sign == 'C' && (b.sign == 'P' || b.sign == 'L')) { a.wins.push_back(b.val); s.push(a); }
    else if (a.sign == 'P' && (b.sign == 'R' || b.sign == 'S')) { a.wins.push_back(b.val); s.push(a); }
    else if (a.sign == 'L' && (b.sign == 'S' || b.sign == 'P')) { a.wins.push_back(b.val); s.push(a); }
    else if (a.sign == 'S' && (b.sign == 'C' || b.sign == 'R')) { a.wins.push_back(b.val); s.push(a); }
    else if (a.sign == 'R' && (b.sign == 'C' || b.sign == 'L')) { a.wins.push_back(b.val); s.push(a); }
    else if (b.sign == 'C' && (a.sign == 'P' || a.sign == 'L')) { b.wins.push_back(a.val); s.push(b); }
    else if (b.sign == 'P' && (a.sign == 'R' || a.sign == 'S')) { b.wins.push_back(a.val); s.push(b); }
    else if (b.sign == 'L' && (a.sign == 'S' || a.sign == 'P')) { b.wins.push_back(a.val); s.push(b); }
    else if (b.sign == 'S' && (a.sign == 'C' || a.sign == 'R')) { b.wins.push_back(a.val); s.push(b); }
    else if (b.sign == 'R' && (a.sign == 'C' || a.sign == 'L')) { b.wins.push_back(a.val); s.push(b); }
    else if (a.sign == b.sign) {
      if (a.val < b.val) { a.wins.push_back(b.val); s.push(a); } 
      else                { b.wins.push_back(a.val); s.push(b); }
    }
  }
  player winer = f.top();

/*
Rock (R)
Paper (P)
sCissors (C)
Lizard (L)
Spock (S)

C > P
C > L
P > R
P > S
L > S
L > P
S > C
S > R
R > C
R > L
*/

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  cout << winer.val << endl;
  for (int i = 0; i < winer.wins.size()-1; i++) cout << winer.wins[i] << " ";
  cout << winer.wins[winer.wins.size()-1] << endl;

}
