#include <iostream>
#include <cmath>
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
  int rounds;
  cin >> rounds; cin.ignore();
  int cash;
  cin >> cash; cin.ignore();
  for (int i = 0; i < rounds; i++) {
    int a, b;
    string play;
    cin >> a >> play;
    if (play == "PLAIN") {
      cin >> b;
      if (a == b) {
          cash += ceil(cash/4.f) * 35;
      }
      else
        cash -= ceil(cash/4.f);
    }
    else if (play == "ODD") {
      if (a % 2 != 0) cash += ceil(cash/4.f);
      else            cash -= ceil(cash/4.f);
    }
    else if (play == "EVEN") {
      if (a % 2 == 0 && a != 0) cash += ceil(cash/4.f);
      else            cash -= ceil(cash/4.f);
    }
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  cout << cash << endl;
}
