#include <cstdio>
#include <ctype.h>
#include <iostream>
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
  int l;
  cin >> l; cin.ignore();
  int h;
  cin >> h; cin.ignore();
  string t;
  getline(cin, t);
  string row[h];
  for (int i = 0; i < h; i++) {
    getline(cin, row[i]);
  }
  for (int k = 0; k < h; k++) {

    for (int i = 0; i < t.size(); i++) {
      int n = 0;
      if (!isalpha(t[i])) {
        n = 26 * l;
      }
      else {
        n = tolower(t[i]) - 97;
        n *= l;
      }
      for (int j = n; j < n+l; j++) {
        cout << row[k][j];
      }
    }

    cout << endl;
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;
}
