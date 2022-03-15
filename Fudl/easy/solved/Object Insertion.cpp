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
  int a;
  int b;
  cin >> a >> b; cin.ignore();
  string object_line[a];
  for (int i = 0; i < a; i++) {
    getline(cin, object_line[i]);
  }
  int c;
  int d;
  cin >> c >> d; cin.ignore();
  string grid_line[c];
  for (int i = 0; i < c; i++) {
    getline(cin, grid_line[i]);
  }
  int out = 0;
  int n,m;
  bool once = true;
  for (int i = 0; i <= c-a; i++) {
    for (int j = 0; j <= d-b; j++) {
      bool pass = true;
      for (int k = 0; k < a; k++) {
        for (int l = 0; l < b; l++) {
          if (!pass) break;
          if (object_line[k][l] == '*' && grid_line[i+k][j+l] == '#')
            pass = false;
        }
        if (!pass) break;
      }
      if (pass) out++;
      if (out == 1 && once) { n = i; m = j; once = false; }
    }
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  cout << out << endl;
  if (out == 1) {
    for (int i = n; i < n+a; i++)
      for (int j = m; j < m+b; j++)
        if (object_line[i-n][j-m] == '*')
          grid_line[i][j] = object_line[i-n][j-m];
    for (int i = 0; i < c; i++) {
      for (int j = 0; j < d; j++) {
        cout << grid_line[i][j];
      }
      cout << endl;
    }
  }

}
