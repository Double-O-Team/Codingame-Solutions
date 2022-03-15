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
  int w;
  cin >> w; cin.ignore();
  int h;
  cin >> h; cin.ignore();
  string line[h];
  for (int i = 0; i < h; i++) {
    getline(cin, line[i]);
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (line[i][j] == 'x') {
        for (int k = i-1; k <= i+1; k++) {
          for (int l = j-1; l <= j+1; l++) {
            if (l == j && k == i)
              continue;
            if ((l >= 0 && l < w) && (k >= 0 && k < h)) {
              if (isdigit(line[k][l]))   { line[k][l] += 1 ; }
              else if (line[k][l] == '.') {line[k][l] = '1'; }
              else                               { continue; }
            }
          }
        }
      }
    }
  }


  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (line[i][j] == 'x')
        cout << '.';
      else
        cout << line[i][j];
    }
    cout << endl;
  }
}
